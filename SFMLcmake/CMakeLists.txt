cmake_minimum_required(VERSION 3.10)
project(MySFMLProject)

include_directories(SFML/include)
link_directories(SFML/lib)

add_executable(SFMLcmake main.cpp)

target_link_libraries(SFMLcmake sfml-graphics sfml-window sfml-system)
