#include "MyFile.h"

void RestaurantMenu(std::string dayWeek, std::string path)
{
	setlocale(LC_ALL, "rus");
		
	std::ifstream fin;

	fin.open(path);

	if (!fin.is_open())
	{
		std::cout << "������ �������� �����!" << std::endl;
	}
	else
	{
		std::string str;

		std::cout << "������� " << dayWeek << " � ��� ������-���� ������� ��: " << std::endl;
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
	// ���������� ��������� �����
	std::random_device rd;

	// �������������� ����� �������� ��������� ��������� ������ 
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
		std::cout << "������ �������� �����!" << std::endl;
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
	system("cls");
	setlocale(LC_ALL, "rus");

	/// �������� ������������� ����� ����� �����
	int number = 0;

	// ������� ������
	int lavel = 1;

	std::cout << "������� ������: " << lavel << std::endl;
	std::cout << "������� ����� ����� �����: ";
	std::cin >> number;

	if (number == 1000 || number == 2500 || number == 5000)
	{
		lavel++;
	}

	std::cout << "������� ������: " << lavel << std::endl;
}

void Task5()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	// ������ �����
	int number1 = 0;

	// ������ �����
	int number2 = 0;

	std::cout << "������� ������ �����: ";
	std::cin >> number1;
	std::cout << "������� ������ �����: ";
	std::cin >> number2;

	if (number1 % number2 == 0)
	{
		std::cout << "����� " << number1 << " ������ ����� " << number2 << std::endl;
	}

	if (number2 % number1 == 0)
	{
		std::cout << "����� " << number2 << " ������ ����� " << number1 << std::endl;
	}

	if (number1 % number2 != 0 && number2 % number1 != 0)
	{
		std::cout << "����� " << number1 << " � " << number2 << " �� ������ ���� �����." << std::endl;
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

	std::cout << "�� ���� �������������� ��� � ����� ���������!!!" << std::endl;
	std::cout << "������� ����� ��� ������ (�� 1 �� 7): ";
	std::cin >> dayWeek;

	switch (dayWeek)
	{
	case 1:		
		RestaurantMenu("�����������", "File\\Monday.txt");
		break;
	case 2:		
		RestaurantMenu("�������", "File\\Tuesday.txt");
		break;
	case 3:		
		RestaurantMenu("�����", "File\\Wednesday.txt");
		break;
	case 4:
		RestaurantMenu("�������", "File\\Thursday.txt");
		break;
	case 5:
		RestaurantMenu("�������", "File\\Friday.txt");
		break;
	case 6:
		RestaurantMenu("�������", "File\\Saturday.txt");
		break;
	case 7:
		RestaurantMenu("�����������", "File\\Sunday.txt");
		break;
	default:
		std::cout << "��� ������ � ����� ������� �� ����������!" << std::endl;
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

	std::cout << std::setw(15) << std::left << "���";
	std::cout << std::setw(15) << std::left << "�������";
	std::cout << "��������" << std::endl;
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
	std::cout << "������� �������� �����������: ";
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

	std::cout << "���������� ��������: " << std::endl;
	std::cout << std::setw(15) << std::left << employee[min].name;
	std::cout << std::setw(15) << std::left << employee[min].surname;
	std::cout << employee[min].salary << std::endl;
	std::cout << std::endl;

	std::cout << "������������ ��������: " << std::endl;
	std::cout << std::setw(15) << std::left << employee[max].name;
	std::cout << std::setw(15) << std::left << employee[max].surname;
	std::cout << employee[max].salary << std::endl;
	std::cout << std::endl;

	std::cout << "������� ����� ������������ � ����������� ��������� ����������: " << maxSalary - minSalary << std::endl;
}

void Task9()
{
	system("cls");
	setlocale(LC_ALL, "rus");

	int income = 0;
	int tax = 0;

	std::cout << "������� ����� ����������� ������: ";
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

	std::cout << "����� �� ����� ����������� ������ ����������: " << tax << std::endl;
}
