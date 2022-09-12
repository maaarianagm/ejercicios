#include "iostream"
#include "string"
using namespace std;

int main()
{
	string titulos[5];
	string autores[5];
	cout << "Por favor ingrese la siguiente informacion de los libros: \n";
	for(int i = 0; i < 5; i++)
	{
		cout << "\n******* Libro " << i + 1 << "********:\n";
		cout << "Titulo: ";
		
		getline(cin, titulos[i]);
		cout << "Autor: ";
		
		getline(cin, autores[i]); 
	}
