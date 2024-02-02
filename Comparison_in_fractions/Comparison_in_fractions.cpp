#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	f1.fraction_conversion(f2); // Функция приравнивает дроби

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << "\n\n";


	//Проверка работы fraction_conversion()

	std::cout << f1.get_n() << " " << f1.get_d() << "\n";
	std::cout << f2.get_n() << " " << f2.get_d() << "\n";

	return 0;
}