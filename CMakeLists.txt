cmake_minimum_required(VERSION 3.16)
project(Rule_based_Chatbot_in_Cpp)

set(CMAKE_CXX_STANDARD 20)

# Include the header files directory
include_directories(include)

# Source files
set(SOURCES
        src/main.cpp
        src/chatbot.cpp
        src/utilities.cpp
        src/system_controls.cpp
        src/advanced_math.cpp

)

# Target executable
add_executable(Rule_based_Chatbot_in_Cpp ${SOURCES})
