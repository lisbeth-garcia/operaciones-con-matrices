#include<iostream>
#include<stdlib.h>
using namespace std;


void mostrar(float (*r)[5])
{
cout<<endl<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<r[i][j]<<" ";
	}
cout<<"\n";
	}



}

//FUNCION PRINCIPAL
int main()
{
	int op,flag;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
	system("clear");
	cout<<"OPERACIONES CON MATRICES EN 2 DIMENSIO"<<endl<<endl;
	cout<<"1.- Ingresar los valores de las matrices \n";
	cout<<"2.- Obtener el producto de las dos matrices \n";
	cout<<"3.- Mostrar la potencias 2 de la primera matriz \n"; 
	cout<<"4.- Mostrar la transpuesta de la primera matriz \n";
	cout<<"5.- Calcular la media y varianza y compararlas \n";
	cout<<"0.- Salir del menu \n";
        cout<<" Ingrese una opción : ";
		cin>>op;
		system (" ");
		
	switch(op)
	{
		case 1:
			
	//ESTA FUNCION PERMITE INGRESAR EL VALOR A LAS MATRICES.
	
		ingresar(matriz1,matriz2);
		system("PAUSE");
		system("PAUSE");
		break;
		
	        case 2:
	        	
	// ESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES.
	
		producto(matriz1,matriz2,resultado);
		system("PAUSE");
		break;
		
		case 3:
			
	// ESTA FUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ.
	
		potencia(matriz1,resultado);
		system("PAUSE");
		break;
		
		case 4:
			
	// ESTA FUNCION CALCULA LA TRANSPUEST DE LA PRIMERA MATRIZ.
	
		transpuesta(matriz1,resultado);
		system("PAUSE");
		break;
		
		case 5:
			
	//CALCULA Y MUESTRA LA MEDIA Y VARIANZA DE LAS DOS MATRICES.
	
		mediayvarianza(matriz1,matriz2);
		system("PAUSE");
		break;
		
		}
		if(op>5)
		{
		cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
			    
    // pause the program until user input
    
	    flag=cin.ignore().get();
		}		  
	    if(op==0)
	{
		
	    cout<<"Salimos del Sistema: "<<endl;

	}
	system("PAUSE"); 
	}
	
	while(op!=0);

	return(0);

}
