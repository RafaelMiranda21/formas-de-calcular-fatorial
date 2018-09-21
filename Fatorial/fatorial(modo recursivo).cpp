//calculo fatorial
//modo recursivo

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

double fatorial(unsigned int n)
{
	if(n <= 1)
	{
		return 1;
	}
	
	    return n * fatorial(n - 1);
}

int main()
{
	double valor;
	
	unsigned int num;
	
	cout<<"Digite um numero natural: "; 
	cin>>num;
	
	valor = fatorial(num);
	cout<<num<<"! = "<<valor<<endl;
}
	    
