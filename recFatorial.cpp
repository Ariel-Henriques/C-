#include<iostream>

using namespace std;

int fatorial(int);

int fatorial(int n){
//Retorna fatorial de n
	if (n==0){
		return 1;
	}else{
		return (n * fatorial(n-1));
	}
}

int main (void){
	int n, k;
	cout << "Escreve ae um numero: ";
	cin >> n;
	k = fatorial(n);
	cout << "Fatorial de "<< n << " = " << k <<'\n';
	return 0;
} 
