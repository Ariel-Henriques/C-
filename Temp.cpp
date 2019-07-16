#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main( void){
	int celsius;
	cout << "Temperatura em Celsius: ";
	cin >> celsius;
	int fahrenheit = (celsius*9/5) + 32;
	cout << "Temperatura em Fahrenheit: ";
	cout << fahrenheit << endl;
	return 0;
}
	
