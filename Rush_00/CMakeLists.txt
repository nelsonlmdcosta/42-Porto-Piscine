cmake_minimum_required(VERSION 3.15)
project(RushProjects C)

# Set C standard
set(CMAKE_C_STANDARD 99)

# Enable warnings and treat them as errors
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")

# List all the rush files
set(RUSH_FILES
        ./ex00/rush00.c
        ./ex00/rush01.c
        ./ex00/rush02.c
        ./ex00/rush03.c
        ./ex00/rush04.c
)

# Loop through the rush files and create an executable target for each
foreach(RUSH_FILE ${RUSH_FILES})
    # Get the file name without extension
    get_filename_component(TARGET_NAME ${RUSH_FILE} NAME_WE)
    add_executable(${TARGET_NAME} ${RUSH_FILE} ./ex00/main.c ./ex00/ft_putchar.c)
endforeach()

# Optional: Add a target to run norminette
find_program(NORMINETTE norminette)
if(NORMINETTE)
    add_custom_target(norminette
            COMMAND norminette ${RUSH_FILES} ./ex00/main.c ./ex00/ft_putchar.c
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMENT "Running Norminette style check..."
            EXCLUDE_FROM_ALL
    )
endif()