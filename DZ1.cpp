#include "stdafx.h" //для вижлы
#include <iostream> //для cin, cout
#include <conio.h> //getch
#include <math.h> //математика
#include <stdlib.h>//random
using namespace std; //для cin, cout

int main()
{
	char a[4] = { 'C','I','V','A' };
	long double N = rand() + rand() * 65536;
	long double res = N, lul = N;
	for (int i = 0; i < 4; i++)
	{
		res += a[i] * (int)pow(256, i);
	}

	cout << "Gamma: " << N << endl;
	res = res * 2;
	cout << "The encrypted number: " << res << endl;
	res = res / 2;
	res -= N;
	cout << "The encrypted number: " << res << endl;
	for (int i = 0; i < 4; i++)
	{
		N = (int)((int)res % 256);
		a[i] = (char)((int)res % 256);
		res = res / 256;
		cout << "The decrypted letter: " << a[i] << endl;
	}
	//while (t != 0)
	//{
	//	mod = t % 2;
	//	t /= 2;
	//	k = k + mod*i;
	//	i *= 10;
	//}
	//cout << k << endl;
	_getch();
	return 0;
}
