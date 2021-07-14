void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{

// en esta parte se podra sacar el producto de las matrices//
  
  //PARTICIPANTE2 
	//Pierina Mejia Hurtado
	//EN ESTA PARTE PODREMOS SACAR EL PRODUCTO DE LAS MATRICES.
    cout<<"\nESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES\n";
    
	 for (int a=0;a<2;a++)
    {
	
	for (int b=0;b<2;b++)
       { 
	    matrizresultado[a][b]=0;
         
		 for (int k=0;k<2;k++)
          {
		  matrizresultado[a][b]=matrizresultado[a][b]+matriz1[a][k]*matriz2[k][b];
          }
       }
    }
    
	cout<<"\nEL PRODUCTO DE LAS MATRICES ES:\n";
	
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matrizresultado[a][b]<<" ";
		}
		cout<<"\n";
	}
	
		break;
		
		case 3:
//====================================================



}
