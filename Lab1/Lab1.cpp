// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include "CMakeProject1.h"
#include <cfloat>  
#include <limits>  
#include <string>
using namespace std;



int main()
{	
	setlocale(LC_ALL, "Russian");
	
	
	// Высота трапеции
	short int hight;

	// Основания трапеции
	short int firstBase, secondBase;

	//вводим данные
	cin >> hight;
	cin >> firstBase;
	cin >> secondBase;

	//считаем прощадь
	float Sp = (firstBase + secondBase) * hight /2.0;
	
	//выводим
	std::cout << "Площадь " << Sp << "\n" << "float" << "\n";
	std::cout << "short int" << "\n" << sizeof(short) * 8<< " бит" << "\n" << -pow(2, sizeof(short) * 8 - 1) << "\n" << pow(2, sizeof(short) * 8 - 1) - 1 << "\n";
	std::cout << "float " << "\n" << sizeof(float) * 8 << " бит" << "\n" << -FLT_MAX << "\n" << FLT_MAX << endl << "\n";

	
	
	return 0;
}
