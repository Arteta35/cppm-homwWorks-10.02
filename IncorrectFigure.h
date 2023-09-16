#pragma once
#include <iostream>



class IncorrectFigure : public std::exception {
public:

	IncorrectFigure(int error_number);

	const char* what() const override {
		switch (error_number)
		{
		case(1):
			return "������! ����� ����� � ������������ �� ����� 180!";
			break;
		case(2):
			return "������! ���� '�' � �������������� ������������ �� ����� 90 ��������!";
			break;
		case(3):
			return "������! ���� 'a' �� ����� ���� 'c' � ������� 'A' �� ����� ������� 'C'!";
			break;
		case(4):
			return "������! � �������������� ������������ �� ����� ������� ��� ����!";
			break;
		case(5):
			return "������! ����� ����� � �������� �� ����� 360 ��������!";
			break;
		case(6):
			return "������! � �������������� �������� ������� �� �����!";
			break;
		case(7):
			return "������! � �������������� ����/���� �� ����� 90 ��������!";
			break;
		case(8):
			return "������! � �������� ������� �� �����!";
			break;
		case(9):
			return "������! � �������� ����/���� �� ����� 90 ��������!";
			break;
		case(10):
			return "������! � ��������������� �������� ������� �� �����!";
			break;
		case(11):
			return "������! � ��������������� �������� ���� �� �����!";
			break;
		case(12):
			return "������! � ����� ������� �� �����!";
			break;
		case(13):
			return "������! � ����� �������� ���� �� �����!";
			break;
		default:
			return "����������� ������";
			break;
		}
	}


protected:

	int error_number = 0;
};