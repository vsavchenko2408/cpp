cmake_minimum_required(VERSION 3.10)

# Название вашего проекта
project(Composition_body)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавление исходных файлов проекта
set(SOURCES
    main.cpp brain.cpp heart.cpp body.cpp
    # Добавьте ваши файлы .cpp здесь
)

# Добавление заголовочных файлов проекта
set(HEADERS
brain.h heart.h body.h
    # Добавьте ваши файлы .h здесь
)

# Создание исполняемого файла
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
