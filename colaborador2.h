 // Pierina Mejía Hurtado

void producto(float (*m1)[5], float (*m2)[5],float (*r)[5])
{
int filas=5,columnas=5;
cout<<"PRODUCTO DE LAS MATRICES\n\n";

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		for(int k=0;k<columnas;k++){
				r[i][j]+=m1[i][k]*m2[k][j];
			
		
		}
	} 
}
		cout<<"\nMostrando matriz #1\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<m1[j][i]<<"  ";
		}
		cout<<"\n\n";
	}
	cout<<"\nMostrando matriz #2\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<m2[j][i]<<"  ";
		}
		cout<<"\n\n";
	}
	cout<<"El producto de las dos matrices es:\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			
			cout<<r[j][i]<<"  ";
		}
		cout<<"\n\n";
	}


}
