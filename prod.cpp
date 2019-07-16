#include<iostream>
//#include<cstdio>
//#include<cstdlib>


using namespace std;

int main (void){
//Multiplica a entrada até ela ser negativa, ignora o 0.
	int n, prod;
	prod = 1;	
	while (true){
		cout << ("Numero: ");
		cin >> n;
		if (n<0){
			break;
		}else{
			if (n==0){
				cout << ("Ignora zero. \n");
				continue;
			}else{
				prod = prod * n;
			}
		}
	}
	cout << ("Total : ", prod);
	return 0;
}
 			
		
		
	
