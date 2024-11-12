#include <iostream>

using namespace std;

int main()
{
	// Ввод данных осуществляется при помощи команды cin.
	// Синтаксис ввода данных:
	//      cin >> имя;
	// имя - имя переменной, в которую будут записаны данные.
	int nValue;
	cout << "Enter number: ";
	cin >> nValue;

	cout << "nValue = " << nValue << endl << endl;

	// Выполнение программы приостанавливается в том месте кода, где производится ввод данных, и 
	// продолжается после завершения ввода данных пользователем.

	// Синтаксис ввода нескольких значений подряд:
	//      cin >> имя_1 >> имя_2 >> ...;
	float fltNumber1, fltNumber2;
	cout << "Enter two numbers ";
	cin >> fltNumber1 >> fltNumber2;

	cout << "fltNumber1 = " << fltNumber1 << endl;
	cout << "fltNumber2 = " << fltNumber2 << endl;

	return 0;
}