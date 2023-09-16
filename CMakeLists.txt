# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("cppm-homeWorks-10.02")

add_executable(main main.cpp "Figure.h" "Figure.cpp" "Triangle.h" "Triangle.cpp" "IncorrectFigure.h" "IncorrectFigure.cpp" "Equilateral_triangle.h" "Equilateral_triangle.cpp" "Isosceles_triangle.h" "Isosceles_triangle.cpp" "Parallelogram.h" "Parallelogram.cpp" "Quadrilateral.h" "Quadrilateral.cpp" "Rhomb.h" "Rhomb.cpp" "Right_triangle.h" "Right_triangle.cpp" "Square.h" "Square.cpp" "_Rectangle.h" "_Rectangle.cpp")

# Включите подпроекты.
add_subdirectory ("cppm-homeWorks-10.02")
