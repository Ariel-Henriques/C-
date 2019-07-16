#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main( int nNumberofargs, char*  pszargs[]){
	int celsius;
	cout << "Temperatura em Celsius: ";
	cin >> celsius;
	int fahrenheit = (celsius*9/5) + 32;
	cout << "Temperatura em Fahrenheit: ";
	cout << fahrenheit << endl;
	return 0;
}
	
