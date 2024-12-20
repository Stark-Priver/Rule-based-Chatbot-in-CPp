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
        src/speech_recognition.cpp
        include/chatbot.h
        include/speech_recognition.h
)

# Target executable (This must be defined before linking libraries)
add_executable(Rule_based_Chatbot_in_Cpp ${SOURCES})

# Required Libraries
# Manually specify PortAudio paths if not found automatically
find_library(PORTAUDIO_LIB portaudio HINTS /usr/lib /usr/local/lib)
find_path(PORTAUDIO_INCLUDE_DIR portaudio.h HINTS /usr/include /usr/local/include)

# Check if PortAudio was found
if (PORTAUDIO_LIB AND PORTAUDIO_INCLUDE_DIR)
    message(STATUS "Found PortAudio")
    include_directories(${PORTAUDIO_INCLUDE_DIR})
    # Link the PortAudio library to the target executable
    target_link_libraries(Rule_based_Chatbot_in_Cpp PRIVATE ${PORTAUDIO_LIB})
else()
    message(FATAL_ERROR "PortAudio not found. Please install PortAudio and try again.")
endif()
