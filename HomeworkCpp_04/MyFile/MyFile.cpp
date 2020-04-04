#include "MyFile.h"

void Task1()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	/// первое число
	int number1;

	/// Второе число
	int number2;

	std::cout << "Введите первое число: ";
	std::cin >> number1;
	std::cout << "Введите второе число: ";
	std::cin >> number2;

	if (number1 != number2)
	{
		if (number1 > number2)
		{
			std::cout << "Минимальное число: " << number2 << std::endl;			
		}
		else
		{
			std::cout << "Минимальное число: " << number1 << std::endl;
		}		
	}
	else
	{
		std::cout << "Числа равны!" << std::endl;
	}
}

void Task2()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	// Генерируем случайное число
	std::random_device rd;

	// Инициализируем Вихрь Мерсенна случайным стартовым числом 
	std::mt19937 mersenne(rd());

	// Уровень сложности
	int lavel = 1;

	// Первое число
	int number1 = 0;

	// Второе число
	int number2 = 0;

	// Результат сложения чисел
	int result = 0;

	// Ответ вводимый пользоватемем
	int answer = 0;

	std::cout << "Сложение чисел в уме." << std::endl;
	std::cout << std::endl;

	std::cout << "Введите уровень сложности (1, 2 или 3): ";
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
		std::cout << "Ошибка ввода данных!" << std::endl;
		return;
		break;
	}
	
	result = number1 + number2;

	std::cout << "Первое число: " << number1 << std::endl;
	std::cout << "Второе число: " << number2 << std::endl;
	std::cout << "Введите сумму чисел: ";
	std::cin >> answer;

	if (answer == result)
	{
		std::cout << "ВЕРНО!!!" << std::endl;
	}
	else
	{
		std::cout << "НЕ ВЕРНО!!!" << std::endl;
		std::cout << "Врный ответ: " << result << std::endl;
	}
}

void Task3()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	/// Вводимое пользователем число
	int number;

	std::cout << "Введите первое число: ";
	std::cin >> number;

	if (number % 2 == 0)
	{
		std::cout << "Введённое число является ЧЁТНЫМ!" << std::endl;
	}
	else
	{
		std::cout << "Введённое число является НЕЧЁТНЫМ!" << std::endl;
	}
}

void Task4()
{

}
