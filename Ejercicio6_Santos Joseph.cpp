#include <iostream>
using namespace std;

int main()
{
int A, B, C;	
cout << " escribe el numero "<< "\n";
	cin>>A;
	
	cout << " escribe otro numero "<< "\n";
	cin>>B;
	
	cout << " escribe otro numero "<< "\n";
	cin>>C;
	
	if (A>B)
	        if (B>C)
	                if (B>C) {
				             cout << A<<"  "<<B<<"  "<<C<< "\n";}
				    else 
					         {cout << A<<"  "<<B<<"   "<<C<< "\n";}         
            else {  cout << C<<"  "<<A<<"  "<<B<<   "\n";}
    else
	        if (B>C)        
                    if (A>C)
                            {cout << B<<"  "<<A<<"  "<<C<< "\n";}
                            
                    else    {cout << B<<"  "<<<<"  "<<A<< "\n";}        
		    else
			 {cout <<C<<"  "<<B<<"  "<<A<< "\n";} 
	
	return 0;		 
}                   

