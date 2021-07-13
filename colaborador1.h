//garcia lopez lisbeth 
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
	
	void ingresar(float (*m1)[5], float (*m2)[5])
{

cout<<"Ingresar y mostrar los valores de los arreglos o matrices";
	
//PARTICIPANTE 1//
	
	cout<<"EN ESTA PARTE PODREMOS PONER LOS VALORES DE LAS MATRICES\n";
	cout<<"\nPOR FAVOR DIGITE LOS NUMEROS DE LA PRIMERA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<"\nINGRESE UN NUMERO ["<<a<<"]["<<b<<"]: ";
			cin>>matriz1[a][b];
		}
	}
	
	cout<<"\nPOR FAVOR DIGITE LOS NUMEROS DE LA SEGUNDA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<"\nINGRESE UN NUMERO ["<<a<<"]["<<b<<"]: ";
			cin>>matriz2[a][b];
		}
	}
	
	cout<<"\nESTA ES LA PRIMERA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matriz1[a][b]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nESTA ES DE LA SEGUNDA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matriz2[a][b]<<" ";
		}
		cout<<"\n";
	}
		break;
		
	        case 2:



}
