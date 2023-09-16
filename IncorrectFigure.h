#pragma once
#include <iostream>



class IncorrectFigure : public std::exception {
public:

	IncorrectFigure(int error_number);

	const char* what() const override {
		switch (error_number)
		{
		case(1):
			return "Ошибка! Сумма углов в треугольнике не равна 180!";
			break;
		case(2):
			return "Ошибка! Угол 'С' у прямоугольного треугольника не равен 90 градусам!";
			break;
		case(3):
			return "Ошибка! Угол 'a' не равен углу 'c' и сторона 'A' не равна стороне 'C'!";
			break;
		case(4):
			return "Ошибка! В равностороннем треугольнике не равны стороны или углы!";
			break;
		case(5):
			return "Ошибка! Сумма углов в квадрате не равна 360 градусов!";
			break;
		case(6):
			return "Ошибка! В прямоугольнике попарные стороны не равны!";
			break;
		case(7):
			return "Ошибка! В прямоугольнике угол/углы не равны 90 градусам!";
			break;
		case(8):
			return "Ошибка! В квадрате стороны не равны!";
			break;
		case(9):
			return "Ошибка! В квадрате угол/углы не равны 90 градусам!";
			break;
		case(10):
			return "Ошибка! В паралеллограмме попарные стороны не равны!";
			break;
		case(11):
			return "Ошибка! В паралеллограмме попарные углы не равны!";
			break;
		case(12):
			return "Ошибка! В ромбе стороны не равны!";
			break;
		case(13):
			return "Ошибка! В ромбе попарные углы не равны!";
			break;
		default:
			return "Неизвестная ошибка";
			break;
		}
	}


protected:

	int error_number = 0;
};