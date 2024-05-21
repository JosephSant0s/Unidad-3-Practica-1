#include <iostream>
using namespace std;

int main()
{
	//mensaje de bievenida
	cout << " hola :D este programa 2 unidad 2 " << "\n";
	
	// se declaran los numeros que se sumaran (pueden ser decimales)
	float SUELDO, aum, nsue;
	
	//se pide el primer numero 
	cout << " por favor ingrese el primer sueldo: ";
	
	//se asigna el primer valor a SUELDO
	cin >>  SUELDO;
	
if (SUELDO < 400000.00)	
      {
       aum = SUELDO * 0.15;	
       nsue = SUELDO + aum;	
	    }
    else
       nsue=SUELDO*1.08;
       
    
	cout << " el nuevo sueldo es : "<<nsue;
	//se muestra el resultado 
       
    return 0;   
}
