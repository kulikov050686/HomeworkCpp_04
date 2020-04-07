#include "MyFile.h"

void RestaurantMenu(std::string dayWeek, std::string path)
{
	setlocale(LC_ALL, "rus");
		
	std::ifstream fin;

	fin.open(path);

	if (!fin.is_open())
	{
		std::cout << "Ошибка открытия файла!" << std::endl;
	}
	else
	{
		std::string str;

		std::cout << "Сегодня " << dayWeek << " и Ваш бизнес-ланч состоит из: " << std::endl;
		std::cout << std::endl;

		while (!fin.eof())
		{
			str = "";
			std::getline(fin, str);
			std::cout << str << std::endl;
		}
	}

	fin.close();
}

int FileLength(std::string path)
{
	int fileLength = 0;

	std::ifstream inFile;

	inFile.open(path);

	if (!inFile.is_open())
	{
		return 0;
	}
	else
	{
		std::string line;

		while (std::getline(inFile, line))
		{
			fileLength++;
		}	
	}

	inFile.close();

	return fileLength;
}

int Random(int min, int max)
{
	// Генерируем случайное число
	std::random_device rd;

	// Инициализируем Вихрь Мерсенна случайным стартовым числом 
	std::mt19937 mersenne(rd());

	return min + mersenne() % (max - min);
}

void Init(std::string arr[], const int N, std::string path)
{
	setlocale(LC_ALL, "rus");

	std::ifstream fin;

	fin.open(path);

	if (!fin.is_open())
	{
		std::cout << "Ошибка открытия файла!" << std::endl;
	}
	else
	{
		std::string str;
		int i = 0;

		while (!fin.eof())
		{
			if (i < N)
			{
				str = "";
				std::getline(fin, str);
				arr[i] = str;
				i++;
			}		
		}
	}

	fin.close();
}

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
		number1 = Random(0, 10);
		number2 = Random(0, 10);
		break;
	case 2:
		number1 = Random(10, 100);
		number2 = Random(10, 100);
		break;
	case 3:
		number1 = Random(100, 1000);
		number2 = Random(100, 1000);
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
	system("cls");
	setlocale(LC_ALL, "rus");

	/// Вводимое пользователем число очков опыта
	int number = 0;

	// Уровень игрока
	int lavel = 1;

	std::cout << "Уровень игрока: " << lavel << std::endl;
	std::cout << "Введите число очков опыта: ";
	std::cin >> number;

	if (number == 1000 || number == 2500 || number == 5000)
	{
		lavel++;
	}

	std::cout << "Уровень игрока: " << lavel << std::endl;
}

void Task5()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	// Первое число
	int number1 = 0;

	// Второе число
	int number2 = 0;

	std::cout << "Введите первое число: ";
	std::cin >> number1;
	std::cout << "Введите второе число: ";
	std::cin >> number2;

	if (number1 % number2 == 0)
	{
		std::cout << "Число " << number1 << " кратно числу " << number2 << std::endl;
	}

	if (number2 % number1 == 0)
	{
		std::cout << "Число " << number2 << " кратно числу " << number1 << std::endl;
	}

	if (number1 % number2 != 0 && number2 % number1 != 0)
	{
		std::cout << "Числа " << number1 << " и " << number2 << " не кратны друг другу." << std::endl;
	}
}

void Task6()
{

}

void Task7()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int dayWeek = 0;

	std::cout << "Мы рады приветствовать Вас в нашем ресторане!!!" << std::endl;
	std::cout << "Введите номер дня недели (от 1 до 7): ";
	std::cin >> dayWeek;

	switch (dayWeek)
	{
	case 1:		
		RestaurantMenu("понедельник", "File\\Monday.txt");
		break;
	case 2:		
		RestaurantMenu("вторник", "File\\Tuesday.txt");
		break;
	case 3:		
		RestaurantMenu("среда", "File\\Wednesday.txt");
		break;
	case 4:
		RestaurantMenu("четверг", "File\\Thursday.txt");
		break;
	case 5:
		RestaurantMenu("пятница", "File\\Friday.txt");
		break;
	case 6:
		RestaurantMenu("суббота", "File\\Saturday.txt");
		break;
	case 7:
		RestaurantMenu("воскресенье", "File\\Sunday.txt");
		break;
	default:
		std::cout << "Дня недели с таким номером не существует!" << std::endl;
		break;
	}
}

void Task8()
{
	system("cls");
	setlocale(LC_ALL, "rus");
	
	int const N = 10;
	int numberOfNames = FileLength("File\\EmployeeNames.txt");
	int numberOfSurnames = FileLength("File\\SurnamesOfEmployees.txt");
	int averageSalary = 0;
	std::string* employeeNames = new std::string[numberOfNames];
	std::string* employeeSurnames = new std::string[numberOfSurnames];

	Init(employeeNames, numberOfNames, "File\\EmployeeNames.txt");
	Init(employeeSurnames, numberOfSurnames, "File\\SurnamesOfEmployees.txt");
			
	companyEmployee employee[N];

	std::cout << std::setw(15) << std::left << "Имя";
	std::cout << std::setw(15) << std::left << "Фамилия";
	std::cout << "Зарплата" << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	for (int i = 0; i < N; i++)
	{
		employee[i].name = employeeNames[Random(0, numberOfNames)];
		employee[i].surname = employeeSurnames[Random(0, numberOfSurnames)];
		employee[i].salary = Random(10000, 100000);

		std::cout << std::setw(15) << std::left << employee[i].name;
		std::cout << std::setw(15) << std::left << employee[i].surname;
		std::cout << employee[i].salary;
		std::cout << std::endl;

		averageSalary += employee[i].salary;
	}
	
	delete[] employeeNames;
	delete[] employeeSurnames;

	averageSalary /= N;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Средняя зарплата сотрудников: ";
	std::cout << averageSalary << std::endl;

	int min = 0;
	int max = 0;
	int minSalary = employee[min].salary;
	int maxSalary = employee[max].salary;

	for (int i = 1; i < N; i++)
	{
		if (employee[i].salary >= maxSalary)
		{
			maxSalary = employee[i].salary;
			min = i;
		}

		if (employee[i].salary <= minSalary)
		{
			minSalary = employee[i].salary;
			max = i;
		}
	}
	std::cout << std::endl;

	std::cout << "Минимальна зарплата: " << std::endl;
	std::cout << std::setw(15) << std::left << employee[min].name;
	std::cout << std::setw(15) << std::left << employee[min].surname;
	std::cout << employee[min].salary << std::endl;
	std::cout << std::endl;

	std::cout << "Максимальная зарплата: " << std::endl;
	std::cout << std::setw(15) << std::left << employee[max].name;
	std::cout << std::setw(15) << std::left << employee[max].surname;
	std::cout << employee[max].salary << std::endl;
	std::cout << std::endl;

	std::cout << "Разница между максимальной и минимальной зарплатой составляет: " << maxSalary - minSalary << std::endl;
}

void Task9()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int income = 0;
	int tax = 0;

	std::cout << "Введите сумму полученного дохода: ";
	std::cin >> income;

	if (income > 50000)
	{
		tax = ((income - 50000) * 30 / 100) + 9300;
	}

	if (10000 < income && income <= 50000)
	{
		tax = ((income - 10000) * 20 / 100) + 1300;
	}

	if (income <= 10000)
	{
		tax = income * 13 / 100;
	}

	std::cout << "Налог на сумму полученного дохода составляет: " << tax << std::endl;
}
