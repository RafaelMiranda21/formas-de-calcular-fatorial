//calculo fatorial
//modo interativo

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

double fatorial(unsigned int n)
{
	double fat = 1;
	int i;
	
	for(i = n; i > 1; i--)
	{ 
		fat *= i;
	}
	 return fat;
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
