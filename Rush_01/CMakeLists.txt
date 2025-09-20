cmake_minimum_required(VERSION 3.10)
project(rush01 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Gather all .c and .h files in the current directory
file(GLOB SRC_FILES "*.c")
file(GLOB HEADER_FILES "*.h")

# Combine all sources and headers for lint dependencies
set(LINT_DEPENDENCIES ${SRC_FILES} ${HEADER_FILES})

# -------------------------
# Step 1: Create lint target with stamp
# -------------------------
set(LINT_STAMP ${CMAKE_BINARY_DIR}/lint.stamp)

add_custom_command(
        OUTPUT ${LINT_STAMP}
        COMMAND norminette ${SRC_FILES}  # only check .c files
        COMMAND ${CMAKE_COMMAND} -E touch ${LINT_STAMP}
        DEPENDS ${LINT_DEPENDENCIES}     # rerun only if .c or .h changed
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        COMMENT "Running norminette before build"
)

# Hidden target (no ALL) so it won't appear in CLion target list
add_custom_target(lint_target DEPENDS ${LINT_STAMP})

# Executable
add_executable(rush01 ${SRC_FILES})

# Ensure lint runs before building rush01
add_dependencies(rush01 lint_target)

# Enable strict warnings
target_compile_options(rush01 PRIVATE -Wall -Wextra -Werror)

include_directories(${CMAKE_SOURCE_DIR})

# Just here for me to test soemthing out to see if they might use this parameter
#add_compile_definitions(GRID_SIZE=5)
