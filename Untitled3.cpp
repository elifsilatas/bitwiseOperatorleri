#include <iostream>

using namespace std;

int main()
{
	int a;
	a = 10;
	cout << a << endl;
	int b = a<<2;//left shift. İki sola kaydırır(ikilik tabanda en sağa iki sıfır ekler).
	cout << b << endl;
	int c = b>>3;//right shift. Üç sağa kaydırır(ikilik tabanda en sağdan üç rakam siler).
	cout << c << endl;
	int x = 22 & 13;//and operatörü
	/*
	12 ile 13 sayısının ikilik tabandaki değerlerini 've' mantıksal operatörü 
	ile karşılaştırır ve sonucu onluk tabanda yazdırır.
	*/ 
	cout << x << endl;
	int y = 22|13;//or operatörü
	cout << y << endl;
	int z = 22 ^ 13;//xor operatörü
	cout << z << endl;
	return 0;
}