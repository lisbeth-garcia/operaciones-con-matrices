#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int op,flag;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	

    for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++) {
    	cout<<"Digite su matriz1 ["<<i<<"]["<<j<<"]: ";
    	cin>>matriz1[i][j];
	}
    cout<<"\n";
}

void ingresar(float (*m1)[5], float (*m2)[5]);

{
	
cout<<"Ingresar y mostrar los valores de los arreglos o matrices";
for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++) 
		{
    	cout<<"Digite su matriz2 ["<<i<<"]["<<j<<"]: ";
    	cin>>matriz2[i][j];
	}
}}

cout<<"\nmatriz 2\n";
for (int i=0;i<5;i++){
	for(int j=0;j<5;j++) 
	{
		cout<<matriz2[i][j]<<" ";
	}
	cout<<"\n";
}

return (0);

}



