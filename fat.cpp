#include <iostream>

using namespace std;

int main (void){
//escreve fatorial de n.
	int n;
	cout << "Numero: ";
	cin >> n;	
	int j = n;
	while (j>1){
		j = j - 1;
		n = n * j;
		
	}
	cout << n;
	return 0;
}
		
	
