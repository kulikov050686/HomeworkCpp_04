#pragma once
#include <string>
#include <iostream>
#include <random>
#include <fstream>
#include <iomanip>

/// Труктура сотрудник фирмы
struct companyEmployee
{
	// Имя
	std::string name;

	// Фамилия
	std::string surname;

	// Зарплата
	int salary = 0;
};

/// Отвкрытие файла с меню ресторона
void RestaurantMenu(std::string dayWeek, std::string path);

/// Длина открываемого файла
int FileLength(std::string path);

/// Генератор случайных чисел в диапазоне [min; max) 
int Random(int min, int max);

/// Инциализация массива
void Init(std::string arr[], const int N, std::string fileName);

/// Задача 1
void Task1();

/// Задача 2
void Task2();

/// Задача 3
void Task3();

/// Задача 4
void Task4();

/// Задача 5
void Task5();

/// Задача 6
void Task6();

/// Задача 7
void Task7();

/// Задача 8
void Task8();

/// Задача 9
void Task9();