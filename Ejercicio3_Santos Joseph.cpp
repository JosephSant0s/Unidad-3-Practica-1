#include <iostream>

using namespace std;


int main()
{
	//mensaje de bienvenida 
	cout << " hola :D este programa 2 unidad 2 " << "\n";
	
	// se declaran los numeros que se sumaran (pueden ser decimales)
	float NOTA;
	
	//se mide el primer numero 
	cout << " por favor ingrese la calificacion : ";
	
	//se asigna el primer valor a NOTA
	cin >> NOTA;
	
	if (NOTA>=3.0)
	            cout << "aprobado" ;
	    else
		        cout<<"reprobado";
		        
	//se muestra el resultado.
		        
	return 0;
	
}
