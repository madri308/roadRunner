cmake_minimum_required(VERSION 3.16)
project(RoadRunner)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenMP)
add_executable(RoadRunner main.cpp GeneticAlgorithm.cpp GeneticAlgorithm.h Calculator.cpp Calculator.h Individual.cpp Individual.h iConstants.cpp iConstants.h Matroid.cpp Matroid.h Configuration.cpp Configuration.h Instructions.cpp Instructions.h)

if(OpenMP_CXX_FOUND)
    target_link_libraries(RoadRunner PUBLIC OpenMP::OpenMP_CXX)
endif()