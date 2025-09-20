cmake_minimum_required(VERSION 3.28)
project(BSQ C)

set(CMAKE_C_STANDARD 11)

add_executable(BSQ BSQSolverMain.c
        src/FileParser.c
        includes/fileparser.h
        includes/mapdata.h
        includes/point.h
        src/MapGenerator/ProblemFileGenerator.c
        src/ParameterParser/ParameterParser.c
        src/MapGenerator/ProgramParameters.h
        src/BSQSolver.c
        src/MapPrinter.c)
