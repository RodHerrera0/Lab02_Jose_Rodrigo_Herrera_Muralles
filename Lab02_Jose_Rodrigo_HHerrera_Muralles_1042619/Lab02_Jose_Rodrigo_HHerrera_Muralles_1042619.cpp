#include "pch.h"
#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace System;
using namespace std;

int main()
{

	int T = 1;
	int L = 1;
	int x;
	int* Tp = &T;
	int* Lp = &L;

	srand(time(0));
	cout << "BANG!!!  Y ARRANCAN!!!" << endl;

	while (T < 70 && L < 70)
	{
		x = 1 + rand() % (10-1);

		if (1 <= x <= 5)
		{
			*Tp += 3;
			cout << "La tortuga avanza a paso veloz" << endl;
			cout << "La tortuga esta en la posicion " << *Tp << endl;
		}
		if (6 <= x <= 7)
		{
			*Tp -= 6;
			cout << "La torutuga ha tenido un Resbalon" << endl;

			if (*Tp < 0)
			{
				*Tp = 1;
			}

			cout << "La tortuga esta en la posicion " << *Tp << endl;
		}
		if (8 <= x <= 10)
		{
			*Tp += 1;
			cout << "La torutga va a un paso lento" << endl;
			cout << "La tortuga esta en la posicion " << *Tp << endl;
		}

		if (1 <= x <= 2)
		{
			*Lp += 0;
			cout << "La liebre esta dormida" << endl;
			cout << "La liebre esta en la posicion " << *Lp << endl;
		}
		if (3 <= x <= 4)
		{
			*Lp += 9;
			cout << "La liebre ha dado un gran salto" << endl;
			cout << "La liebre esta en la posicion " << *Lp << endl;
		}
		if (5 == x)
		{
			*Lp -= 12;
			cout << "La liebre ha dado un gran resbalon " << endl;

			if (*Lp < 0)
			{
				*Lp = 1;
			}

			cout << "La liebre esta en la posicion " << *Lp << endl;
		}
		if (6 <= x <= 8)
		{
			*Lp += 1;
			cout << "La liebre ha dado un pequeño salto" << endl;
			cout << "La liebre esta en la posicion " << *Lp << endl;
		}
		if (9 <= x <= 10)
		{
			*Lp -= 2;
			cout << "La liebre ha tenido un pequeño resbalon" << endl;
			cout << "La liebre esta en la posicion " << *Lp << endl;
		}


		if (*Lp == *Tp) {
			cout << "La tortuga esta en la posicion " << *Tp << endl;
			cout << "La liebre esta en la posicion " << *Lp << endl;
			cout << "OUCH!!!";
		}

	}

	if (T >= 70)
		cout << "LA TORTUGA GANA!!! BRAVO!!!" << endl;
	if (L >= 70)
		cout << "La liebre gana. Ni hablar" << endl;
	if (L >= 70 && T >= 70)
		cout << "Es un empate" << endl;


	system("pause");

    return 0;
}
