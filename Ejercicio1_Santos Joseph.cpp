#include <iostream>

using namespace std;


int main()
{
    //mensaje de bienvenida 
	cout << " Hola :D Este programa 1 unidad 2 " << "\n";
	
	//se declaran los numeros que se sumaron (puede ser decimales) 
	float NOTA;
	
	//se pide el primer numero
	cout << " por favor ingrese la calificacion: ";
	
	//se asigna el primer valor a NOTA
	cin >> NOTA;
	
	if (NOTA<3.0) cout << "Reprobado";
	//se muestra el resultado.
	
	
	return 0;
}

