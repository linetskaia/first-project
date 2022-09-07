// first project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
	for (int i = 0; i < 30; i++)
		Beep(400 + i * 50, 1000 - i * 40);
}


