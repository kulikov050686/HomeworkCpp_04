#include "MyFile.h"

void Task1()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	/// ������ �����
	int number1;

	/// ������ �����
	int number2;

	std::cout << "������� ������ �����: ";
	std::cin >> number1;
	std::cout << "������� ������ �����: ";
	std::cin >> number2;

	if (number1 != number2)
	{
		if (number1 > number2)
		{
			std::cout << "����������� �����: " << number2 << std::endl;			
		}
		else
		{
			std::cout << "����������� �����: " << number1 << std::endl;
		}		
	}
	else
	{
		std::cout << "����� �����!" << std::endl;
	}
}

void Task2()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	// ���������� ��������� �����
	std::random_device rd;

	// �������������� ����� �������� ��������� ��������� ������ 
	std::mt19937 mersenne(rd());

	// ������� ���������
	int lavel = 1;

	// ������ �����
	int number1 = 0;

	// ������ �����
	int number2 = 0;

	// ��������� �������� �����
	int result = 0;

	// ����� �������� �������������
	int answer = 0;

	std::cout << "�������� ����� � ���." << std::endl;
	std::cout << std::endl;

	std::cout << "������� ������� ��������� (1, 2 ��� 3): ";
	std::cin >> lavel;

	switch (lavel)
	{
	case 1:
		number1 = mersenne() % 10;
		number2 = mersenne() % 10;
		break;
	case 2:
		number1 = mersenne() % 100;
		number2 = mersenne() % 100;
		break;
	case 3:
		number1 = mersenne() % 1000;
		number2 = mersenne() % 1000;
		break;
	default:
		std::cout << "������ ����� ������!" << std::endl;
		return;
		break;
	}
	
	result = number1 + number2;

	std::cout << "������ �����: " << number1 << std::endl;
	std::cout << "������ �����: " << number2 << std::endl;
	std::cout << "������� ����� �����: ";
	std::cin >> answer;

	if (answer == result)
	{
		std::cout << "�����!!!" << std::endl;
	}
	else
	{
		std::cout << "�� �����!!!" << std::endl;
		std::cout << "����� �����: " << result << std::endl;
	}
}

void Task3()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	/// �������� ������������� �����
	int number;

	std::cout << "������� ������ �����: ";
	std::cin >> number;

	if (number % 2 == 0)
	{
		std::cout << "�������� ����� �������� ר����!" << std::endl;
	}
	else
	{
		std::cout << "�������� ����� �������� ��ר����!" << std::endl;
	}
}

void Task4()
{

}
