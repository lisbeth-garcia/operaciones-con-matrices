void mediayvarianza(float (*m1)[5], float (*m2)[])

//==========================================================================
//AQUI VOY A CALCULAR Y MOSTRAR LA MEDIA Y VARIANZA DE LAS DOS MATRICES
  
  for(int a=0;a<2;a++)
  {
     for(int b=0;b<2;b++)
     {
      matrizresultado[a][b]=0;
      matrizresultado[a][b]=matrizresultado[a][b]+matriz1[a][b]*matriz2[a][b];
      matrizresultado[a][b]=matrizresultado[a][b]/2;
     }
  }  
  
  for(int a=0;a<2;a++)
  {
     for(int b=0;b<2;b++)
     {
      matrizresultado1[a][b]=0;
      matrizresultado1[a][b]=matrizresultado[a][b]+matriz1[a][b]*matriz2[a][b];
      matrizresultado1[a][b]=matrizresultado[a][b]*2;
     }
  }  


     cout<<"\nLA MEDIA ARITMETICA ES:\n;
       
  for(int a=0;a<2;a++)
  {
     for(int b=0;b<2;b++)
     {
        cout<<matrizresultado[a][b]<<" ";
     }
    
    cout<<"\n";  
  }
     cout<<"\nLA VARIANZA ARITMETICA, QUEDARIA ASI:\n";
 
   for(int a=0;a<2;a++)
  {
     for(int b=0;b<2;b++)
     {
        cout<<matrizresultado1[a][b]<<" ";
     }
     cout<<"\n";  
  }
     break;
}
     if(op<0 || op>5)
     {
        cout<<"\nEste numero es valido..\n";
       system("cls");  
     }
   if (op==0)
   {
      cout<<"\n Carlos Mero Albán \n";
       cout<<"TERMINAR: "<<endl;
   }
}
   while(op!=0);
   return(0);
}
