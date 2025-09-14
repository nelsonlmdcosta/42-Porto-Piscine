cmake_minimum_required(VERSION 3.15)
project(C_06 C)

set(CMAKE_C_STANDARD 11)
add_compile_options(-Wall -Wextra -Werror)

# ---------------------------------
# Find exercise folders
# ---------------------------------
file(GLOB EXERCISE_DIRS RELATIVE ${CMAKE_SOURCE_DIR} "ex*")

# ---------------------------------
# Find Norminette
# ---------------------------------
find_program(NORMINETTE_EXECUTABLE norminette)

foreach(dir ${EXERCISE_DIRS})
    # Collect all .c files in this exercise folder
    file(GLOB SRC_FILES "${dir}/*.c")

    if(SRC_FILES)
        # Add the executable
        add_executable(${dir} ${SRC_FILES})

        # Only run Norminette if executable is built and norminette exists
        if(NORMINETTE_EXECUTABLE)
            # Collect ft_*.c and all header files in this exercise folder
            file(GLOB FT_FILES
                    "${dir}/ft_*.c"
                    "${dir}/*.h"
            )

            if(FT_FILES)
                # Add Norminette as a pre-build step (runs before compilation)
                add_custom_command(TARGET ${dir} PRE_BUILD
                        COMMAND ${NORMINETTE_EXECUTABLE} -R CheckForbiddenSourceHeader -R CheckDefine ${FT_FILES}
                        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
                        COMMENT "Running Norminette on ${dir}..."
                )
            endif()
        endif()
    endif()
endforeach()
