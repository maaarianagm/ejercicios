#include <iostream>
#include <ctime> // Utilizado para usar funciones que crean números aleatrorios
using namespace std;

int main(){
	int numeros[100];
	srand(time(0));
	
	for(int i= 0; i <100; i++){
		numeros[i] = rand()% 100; // Se asignan números del 0 al 99
		}
	for(int i= 0; i <100; i++){
		cout << numeros[i] << endl;}
		return 0;
}
