void mediayvarianza(float (*m1)[5], float (*m2)[5])
{
cout<<endl;
float acum,acum1,var,cont,med,A,B,C;
//media aritmética 
for(int i=0;i<5;i++){
	
for(int j=0;j<5;j++){
	    
 acum += *(*(m1+j)+i);
	   
  cont += 1;
	
}
	
}
	
cout<<endl;
	
med=acum/cont;
	
cout<<"MATRIZ UNO "<<endl<<endl;
	
cout<<"La media es "<<med1<<endl;
	
//varianza
	
for(int i=0;i<5;i++){
	
for(int j=0;j<5;j++){
	   
  acum1 += (*(*(m1+j)+i)-med)*(*(*(m1+j)+i)-med);
}
	
}
	
cout<<endl;
	
var=acum1/cont;
	
cout<<"La varianza es "<<var1<<endl;
	
//media aritmética 
for(int i=0;i<5;i++){
for(int j=0;j<5;j++) 
A += *(*(m2+j)+i);
 
C += 1;
}
}
cout<<endl;
med=A/C;
cout<<"MATRIZ DOS"<<endl<<endl;
cout<<"La media es "<<med1<<endl;
//varianza
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
	 
B += (*(*(m2+j)+i)-med)*(*(*(m2+j)+i)-med);
	
}
}
	
cout<<endl;
	
var=B/C;
	
cout<<"La varianza es "<<var1<<endl;
}
