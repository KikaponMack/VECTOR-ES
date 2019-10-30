#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numero[5];//Array o vector de 5 numeros
	int suma; //un entero que guardara la suma
	for (int i = 0; i <= 5; i++)
	{
		cout << "Introduce de manera gentil un numero: ";
		cin >> numero[i];
		suma = +numero[i];

	}
	cout << "La suma es " << suma;
	return 0;
}

