cmake_minimum_required(VERSION 3.10)
project(MyGame)

# Вказуємо стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Шукаємо SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Додаємо вихідний файл
add_executable(MyGame main.cpp)

# Підключаємо бібліотеки SFML
target_link_libraries(MyGame PRIVATE sfml-graphics sfml-window sfml-system)

