cmake_minimum_required(VERSION 3.27)
project(Voter_Registration)

set(CMAKE_CXX_STANDARD 14)

include_directories(Voter_Registration)

add_executable(Voter_Registration
        Voter.cpp
        Voter.h
        main.cpp
        Democratic_Voter.h
        Democratic_Voter.cpp
        Republican_Voter.cpp
        Republican_Voter.h
        Other_Voter.cpp
        Other_Voter.h
        voter_data_analysis.py)
