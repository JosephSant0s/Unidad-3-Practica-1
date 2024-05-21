#include <iostream>
using namespace std;

int main()
{
	//mensaje de bienvenida
	cout <<"Hola :D este programa 2 unidad 2 " << "\n";
	
	//se declaran los numeros que se sumaron (puede ser decimales)
	float SUELDO, aum, nsue;
	
	// se mide el primer numero 
	cout << " por favor ingrese el primer sueldo: ";
	
	//se asigna el primer valor a SUELDO 
	cin >> SUELDO;
	
if (SUELDO  < 400000.00)	
       {
       aum = SUELDO * 0.15;
       nsue = SUELDO + aum;
     	
 }
    cout  << " el sueldo es: "	<<nsue ;
    //se muestra el resultado
    
	return 0;	
}
