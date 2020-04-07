#pragma once
#include <string>
#include <iostream>
#include <random>
#include <fstream>
#include <iomanip>

/// �������� ��������� �����
struct companyEmployee
{
	// ���
	std::string name;

	// �������
	std::string surname;

	// ��������
	int salary = 0;
};

/// ��������� ����� � ���� ���������
void RestaurantMenu(std::string dayWeek, std::string path);

/// ����� ������������ �����
int FileLength(std::string path);

/// ��������� ��������� ����� � ��������� [min; max) 
int Random(int min, int max);

/// ������������ �������
void Init(std::string arr[], const int N, std::string fileName);

/// ������ 1
void Task1();

/// ������ 2
void Task2();

/// ������ 3
void Task3();

/// ������ 4
void Task4();

/// ������ 5
void Task5();

/// ������ 6
void Task6();

/// ������ 7
void Task7();

/// ������ 8
void Task8();

/// ������ 9
void Task9();