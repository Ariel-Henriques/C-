#include<iostream>

using namespace std;

int main (void){
//Converte um valor inteiro para character
	int decimal;
	cout << "Valor: ";
	cin >> decimal;
	char character;
	character = decimal;
	cout << "Char (ASCII) : " << character << endl;
	return 0;
}
