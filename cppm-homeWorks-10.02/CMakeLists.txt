# CMakeList.txt: проект CMake для cppm-homeWorks-10.02; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (cppm-homeWorks-10.02 "cppm-homeWorks-10.02.cpp" "cppm-homeWorks-10.02.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cppm-homeWorks-10.02 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
