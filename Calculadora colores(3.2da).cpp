#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>
#include<time.h>
#include<string.h>
#include<windows.h>
using namespace std;
float xel=0,yel=0,aux=0,respuesta=0,x,r,y,ar,ag,m,xd,xh,sum2=0.0,vlr=0.0;
int num=0,num2,restl,expo,expo2,opc2=1,inicio,op=1,n,c,i=1,z,sum=0,numero[1000],a,b,mz=2,opc4=0,opc5,inv=0;
int resultado[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},j;
char var,numerox[100];
double f,l,o,theta;
struct cadena{
float x;
int matriz[20][20],binario[50];
char numero[90];
}cadena[90];
int main(){
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
setlocale(LC_ALL, "spanish");
float x[n],r=0,y,w,pi=3.141592653589793;
while(op>=0 && op<=39){
if(mz==1){
system("pause");}
mz=1;
system("cls");
SetConsoleTextAttribute(hConsole, 10);
cout<<"----------------------------------------------------------------------------------------------"<<endl;
SetConsoleTextAttribute(hConsole, 12);
cout<<endl<<"\t  <<<<<<<<<    BIENVENIDO A NUESTRO PROYECTO FINAL    >>>>>>>>>"<<endl<<endl;
SetConsoleTextAttribute(hConsole, 2);cout<<"\t                   ___             ___         \t  ________ ______ ________\n";SetConsoleTextAttribute(hConsole, 13);
	cout<<"\t | |      | |     /   \\           /   \\        \t |___  ___|  ____|___  ___|\n";SetConsoleTextAttribute(hConsole, 4);cout<<"\t | |      | |    /  _  \\         /  _  \\       \t    |  |  | |       |  |\n";
    SetConsoleTextAttribute(hConsole, 6);cout<<"\t | |      | |   /  / \\  \\       /  / \\  \\    \t    |  |  | |       |  |\n";SetConsoleTextAttribute(hConsole, 9);
	cout<<"\t | |      | |  /  /___\\  \\     /  /___\\  \\   \t    |  |  | |       |  |\n";SetConsoleTextAttribute(hConsole, 3);cout<<"\t |  \\____/  | /  /     \\  \\   /  /     \\  \\ \t  __|  |__| |____ __|  |__\n";
    SetConsoleTextAttribute(hConsole, 5);cout<<"\t  \\________/ /__/       \\__\\ /__/       \\__\\\t |________|______|________|\n"; SetConsoleTextAttribute(hConsole, 2);
	cout<<"              _____      _            _           _\n             / ____|    | |          | |         | |\n  ";SetConsoleTextAttribute(hConsole, 3);cout<<"          | |     __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _ \n";
	SetConsoleTextAttribute(hConsole, 4);cout<<"            | |    / _` | |/ __| | | | |/ _` |/ _` |/ _ \\| '__/ _` |\n    ";SetConsoleTextAttribute(hConsole, 6);
	cout<<"        | |___| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| |\n      ";SetConsoleTextAttribute(hConsole, 1);cout<<"       \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__,_|\\___/|_|  \\__,_|\n\n\n";
	SetConsoleTextAttribute(hConsole, 10);cout<<"      ---------------------------------------------------------------------\n";
    SetConsoleTextAttribute(hConsole, 12);
	cout<<"              <<<<<<<<<<          OPERACIONES         >>>>>>>>>>";
    SetConsoleTextAttribute(hConsole, 15);
		cout<<"\n\n0)Integrantes del proyecto \n1)Suma \n2)Resta \n3)Multiplicación \n4)División \n5)Raiz Cuadrada ";
		cout<<"\n6)Raiz Cúbica \n7)Raiz a la y \n8)x^2 \n9)x^3 \n10)x^y \n11)10^x ";
		cout<<"\n12)Logaritmo en base 10 \n13)Logaritmo Natural \n14)Funcion Exponencial e^x \n15)Seno ";
		cout<<"\n16)Coseno \n17)Tangente \n18)Arcoseno \n19)Arcocoseno \n20)Arcotangente \n21)Factorial de X! \n22)Porcentaje de un numero X ";
		cout<<"\n23)Numero Aleatorio \n24)X^-y \n25)Derivada de Constante \n26)Derivada de Variable \n27)Derivada de un Exponecial ";
		cout<<"\n28)Derivada de un Cociente \n29)Derivada de Funciones Trigonométricas \n30)Matrices \n31)Radianes-Grados \n";
		cout<<"32)Invertir un numero \n33)Permutaciones \n34)Combinaciones \n35)Coordenadas polares a coordenadas rectangulares ";
		cout<<"\n36)Cordenadas Rectangulares a coordenadas polares \n37)Calculo de una Integral Por el Numero de Intervalos \n38)Decimal a Binario \n39)Binario a Decimal \n";
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"      ---------------------------------------------------------------------\n\n";
		SetConsoleTextAttribute(hConsole, 15);
		cout<<"[presione cualquier numero que no este marcado en el menu para salir]"<<endl<<endl;
		cout<<"Eliga la operacion a realizar: ";
		SetConsoleTextAttribute(hConsole, 2);
		cin>>op;
		system("cls");
		SetConsoleTextAttribute(hConsole, 15);
		switch (op){
			case 0:
				SetConsoleTextAttribute(hConsole, 10);
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				SetConsoleTextAttribute(hConsole, 12);
				cout<<"\t\tLos integrantes de este proyecto son: \n\n";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<"Dante Alejandro Alegria Romero 265853\n";
			cout<<"----------------------------------------------------------------------------------------------"<<endl;
				SetConsoleTextAttribute(hConsole, 3);
				cout<<endl<<"Diego Alberto Aranda Gonzales  262021\n";
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				SetConsoleTextAttribute(hConsole, 4);
				cout<<"\nAlan Noe Jimenez Medina 260894\n";
			cout<<"----------------------------------------------------------------------------------------------"<<endl;
				SetConsoleTextAttribute(hConsole, 6);
				cout<<"\nDiego Lopez Mendoza 334749\n";
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				SetConsoleTextAttribute(hConsole, 5);
				cout<<"\nCesar Donnet Hernandez Gastelum 283189"<<endl;
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				SetConsoleTextAttribute(hConsole, 15);break;
			case 1:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tSuma\n\n";
				cout<<"Escriba la cantidad de numeros a sumar teniendo en cuenta el numero guardado (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;	
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;	
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") : ";
				cin>>n;
				cadena[0].x=vlr;
				for(c=1;c<=n;c++){
				  cout<<"Escriba el "<<c<< " numero a sumar: ";
				  cin>>cadena[c].x;
				  r+=cadena[c].x;}
				  r+=cadena[0].x;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El resultado de la suma es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
					if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}	}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tSuma\n\n";
				cout<<"Escriba la cantidad de numeros a sumar: ";
				cin>>n;
				for(c=0;c<n;c++){
				  cout<<"Escriba el "<<c+1<< " numero a sumar: ";
				  cin>>cadena[c].x;
				  r+=cadena[c].x;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El resultado de la suma es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
					if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}}
				r=0;break;
			case 2:
			  if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tResta\n\n";
				cout<<"Escriba la cantidad de numeros a restar teniendo en cuenta a la base (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") : ";
				cin>>n;
				cadena[0].x=vlr;
				for(c=1;c<=n;c++){
				  cout<<"Escriba el "<<c<<" numero a restar: ";
				  cin>>cadena[c].x;}
				r=cadena[0].x;
				for(c=1;c<=n;c++){
					r-=cadena[c].x;}
				system("cls");
				  cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				  cout<<"El resultado de la resta es: ";
				  if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r<<"\n\n";
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r<<"\n\n";
				  SetConsoleTextAttribute(hConsole, 15);}	
				  system("pause");
				  system("cls");
				  cout<<"Deseas usar este valor (";
			  if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
			  if(opc4==1){
					vlr=r;}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tResta\n\n";
				cout<<"Escriba la cantidad de numeros a restar: ";
				cin>>n;
				for(c=0;c<n;c++){
				  cout<<"Escriba el "<<c+1<<" numero a restar: ";
				  cin>>cadena[c].x;}
				r=cadena[0].x;
				for(c=1;c<n;c++){
					r-=cadena[c].x;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El resultado de la resta es: ";
				if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r<<endl;
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r<<endl;
				  SetConsoleTextAttribute(hConsole, 15);}	
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
			  if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}}
				r=0;break;
			case 3:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tMultiplicación\n\n";
				cout<<"Escriba la cantidad de numeros a multiplicar teniendo en cuenta que el primer numero es (";
			    if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") : ";
				cin>>n;
				r+=1;
				cadena[0].x=vlr;
				for(c=1;c<=n;c++){
				  cout<<"Escriba el "<<c<<" numero a multiplicar: ";
				  cin>>cadena[c].x;
				  r*=cadena[c].x;}
				  r*=cadena[0].x;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El resultado de la multiplicación es: ";\
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
				if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tMultiplicación\n\n";
				cout<<"Escriba la cantidad de numeros a multiplicar: ";
				cin>>n;
				r+=1;
				for(c=0;c<n;c++){
				  cout<<"Escriba el "<<c+1<<" numero a multiplicar: ";
				  cin>>cadena[c].x;
				  r*=cadena[c].x;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El resultado de la multiplicación es: ";\
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
				if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}}
				r=0;break;
			case 4:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tDivisión\n\n";
				cout<<"Escriba la cantidad de numeros a dividir teniendo en cuenta que el primero es (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
			    cout<<") : ";
				cin>>n;
				cadena[0].x=vlr;
				for(c=1;c<=n;c++){
				  cout<<"Escriba el "<<c<<" numero a dividir:";
				  cin>>cadena[c].x;
				  if(cadena[0].x == 0.0){
				  	  system("cls");
				  	  cout<<"El resultado sera 0 no importa que pongas despues\n";system("pause");break;}}
				r=cadena[0].x;
				for(c=1;c<=n;c++){
				  r/=cadena[c].x;}
				  system("pause");
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				if(cadena[0].x==0.0){
					cout<<"El resultado es: ";
					SetConsoleTextAttribute(hConsole, 4);
					cout<<"0\n\n";
					SetConsoleTextAttribute(hConsole, 15);}
				else{
					 cout<<"El resultado de la división es: ";
				if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r<<"\n\n";
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r<<"\n\n";
				  SetConsoleTextAttribute(hConsole, 15);}
					 system("pause");
				     system("cls");
				     cout<<"Deseas usar este valor (";
				if(r>=0){
				     SetConsoleTextAttribute(hConsole, 2);
				     cout<<r;
				     SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}}}
				else{
				  cout<<"----------------------------------------------------------------------------------------------"<<endl;
				  cout<<"\tDivisión\n\n";
				  cout<<"Escriba la cantidad de numeros a dividir: ";
				  cin>>n;
				for(c=0;c<n;c++){
				  cout<<"Escriba el "<<c+1<<" numero a dividir:";
				  cin>>cadena[c].x;
				if(cadena[0].x == 0.0){
				  	  system("cls");
				  	  cout<<"El resultado sera 0 no importa que pongas despues\n";system("pause");break;}}
				r=cadena[0].x;
				for(c=1;c<n;c++){
				  r/=cadena[c].x;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				if(cadena[0].x==0.0){
					cout<<"El resultado es: ";
					SetConsoleTextAttribute(hConsole, 4);
					cout<<"0\n\n";
					SetConsoleTextAttribute(hConsole, 15);}
				else{
					 cout<<"El resultado de la división es: ";
				     if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r<<"\n\n";
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r<<"\n\n";
				  SetConsoleTextAttribute(hConsole, 15);}}
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
				if(r>=0){
				  SetConsoleTextAttribute(hConsole, 2);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);	
				}else{
				  SetConsoleTextAttribute(hConsole, 4);
				  cout<<r;
				  SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
					vlr=r;}}	
				r=0;break;
			case 5:
			  if(opc4==1){
				if(vlr<0){
					cout<<"No es posible sacar raiz cuadrada de un numero negativo...";break;
				}else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cuadrada\n\n";
				cout<<"Se le sacara raiz cuadrada al numero (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	
                cout<<") \n";
				n=vlr;
				system("pause");}}
			  else{
			  	system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cuadrada\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz cuadrada : ";
				cin>>n;}
				r=pow(n,(double)1/2);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
			    cout<<"\nLa raiz cuadrada de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);	
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 6:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cúbica\n\n";
				if(vlr<0){
				cout<<"No es posible sacar raiz cubica a numeros negativos....";break;
				}else{
				cout<<"Se le sacara raiz cubica al numero (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"):";
				n=vlr;system("pause");}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cúbica\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz cubica : ";
				cin>>n;}
				r=pow(n,(double)1/3);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa raiz cúbica de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);	
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 7:
				if(opc4==1){
					if(vlr<0){
						cout<<"No es posible sacar raiz a numeros negativos...";break;
					}else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz a la Y\n\n";
				cout<<"El numero al cual calcularle su raiz es (";
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				cout<<"): \n";
			    n=vlr;system("pause");}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz a la Y\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz: ";
			    cin>>n;}
				cout<<"Escriba la potencia de la raiz: ";
				cin>>y;
				r=pow(n,(double)1/y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa raiz a la "<<y<<" de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);	
				system("pause");
				system("cls");
				cout<<"Deseas usar este valor (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);	
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}	
				cout<<") para alguna otra operacion?\n";
				cout<<"\n1)Si\n2)No\nRespuesta: ";
				cin>>opc4;
				if(opc4==1){
				vlr=r;}
				y=0;n=0;r=0;break;
			case 8:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^2\n\n";
				cout<<"Se obtendra el cuadrado del numero(";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}
				cout<<")\n";
				n=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^2\n\n";
				printf("Escriba el numero al cual calcularle su cuadrado: ");
				cin>>n;}
				r=pow(n,2);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nEl cuadrado de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}	
				n=0;r=0;break;
			case 9:
				if(opc4==1){
						cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^3\n\n";
				cout<<"Se obtendra el cubo de (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				n=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^3\n\n";
				cout<<"Escriba el numero al cual calcularle su cubo: ";
				cin>>n;}
				r=pow(n,3);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nEl cubo de (";
				if(n>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<n;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<n;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 10:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^Y\n\n";
				cout<<"El numero al que se le elevara a 'Y' potencia es (";
				if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				n=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^Y\n\n";
				cout<<"Escriba el numero al cual calcularle potencia: ";
				cin>>n;}
				cout<<"Escriba la potencia: ";
				cin>>y;
				r=pow(n,y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa potencia de "<<n<<" a la "<<y<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
			    n=0;y=0;r=0;break;
			case 11:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t10^X\n\n";
				cout<<"Se obtendra 10 a la (";
				if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				n=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t10^X\n\n";
				cout<<"Escriba la potencia: ";
				cin>>n;}
				r=pow(10,n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa potencia de 10 a la (";
				if(n>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<n;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<n;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 12:
				if(opc4==1){
				if(vlr<0){
					cout<<"No es posible obtener el logaritmo en base 10 de un numero negativo...";break;	}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo en Base 10\n\n";
				cout<<"Se obtendra el Logaritmo en base 10 de (";
				if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);
				}
				cout<<")\n";
				n=vlr;system("pause");}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo en Base 10\n\n";
				cout<<"Escriba el numero a calcular el logaritmo en base 10: ";
				cin>>n;}
				r=log10(n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El logaritmo en base 10 de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 13:
				if(opc4==1){
					if(vlr<0){
						cout<<"No es posible sacar el logaritmo de un numero negativo...";break;}
						else{
						
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo Natural\n\n";
				cout<<"Se obtendra el logaritmo del numero (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<")\n";
				n=vlr;system("pause");}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo Natural\n\n";
				cout<<"Escriba el numero a calcular el logaritmo natural: ";
				cin>>n;}
				r=log(n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El logaritmo natural de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
			    n=0;r=0;break;
			case 14:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFunción Exponencial e^x\n\n";
				cout<<"Se obtendra la funcion exponencial de (";
			if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);}
			    cout<<")\n";
				n=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFunción Exponencial e^x\n\n";
				cout<<"Escriba el numero a calcular su funcion potencial: ";
				cin>>n;}
				r=exp(n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"La función exponencial de "<<n<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 15:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tSeno\n\n";
				cout<<"Se obtendra el seno del numero (";
				if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);
				}
				cout<<")\n";
				w=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tSeno\n\n";
				cout<<"Escriba el ángulo en grados a calcular el seno: ";
				cin>>w;}
				y=(w*pi)/180;
				r=sin(y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El valor del seno del ángulo de "<<w<<" grados es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
			    w=0;r=0;break;
			case 16:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCoseno\n\n";
				cout<<"Se determinara el coseno al numero (";
				if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				w=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCoseno\n\n";
				cout<<"Escriba el ángulo en grados a calcular el coseno: ";
				cin>>w;}
				y=(w*pi)/180;
				r=cos(y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El valor del coseno del ángulo de "<<w<<" grados es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				w=0;r=0;break;
			case 17:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tTangente\n\n";
				cout<<"Se determinara la Tangente del numero (";
				if(vlr>=0){
				 SetConsoleTextAttribute(hConsole, 2);
				 cout<<vlr;
				 SetConsoleTextAttribute(hConsole, 15);
				}else{
				 SetConsoleTextAttribute(hConsole, 4);
				 cout<<vlr;
			     SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				w=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tTangente\n\n";
				cout<<"Escriba el ángulo en grados a calcular la tangente: ";
				cin>>w;}
				y=(w*pi)/180;
				r=tan(y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El valor de la tangente del ángulo de "<<w<<" grados es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);}
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
			    w=0;r=0;break;
			case 18:
				if(opc4==1){
				if(vlr>=1.000001){
				cout<<"No existe un Arcoseno para este valor, el valor maximo para sacar arcoseno es 1 o -1....";break;}
			    else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcoseno\n\n";	
				cout<<"Se determinara el Arcoseno del numero (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				w=vlr;system("pause");}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcoseno\n\n";	
				cout<<"Escriba la cantidad para calcular el arcoseno: ";
				cin>>w;}
				y=asin(w);
				r=(y/pi)*180;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El ángulo de la cantidad  es: ";
			     if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<< " grados"<<"\n\n";
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
					vlr=r;}
				w=0;r=0;break;
			case 19:
				if(opc4==1){
				if(vlr>1){
				cout<<"No es posible sacar el Arcocoseno a numeros mayores que 1...";break;}
				else{
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcocoseno\n\n";
				cout<<"Se obtendra el Arcocoseno del numero (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				w=vlr;system("pause");}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcocoseno\n\n";
				cout<<"Escriba la cantidad para calcular la arcocoseno: ";
				cin>>w;}
				y=acos(w);
				r=(y/pi)*180;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El ángulo de la cantidad es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<" grados"<<"\n\n";
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				w=0;r=0;break;
			case 20:
		         if(opc4==1){
		         		cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcotangente\n\n";
				cout<<"Se obtendra el Arcotangente del numero (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				w=vlr;system("pause");}
			     else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcotangente\n\n";
				cout<<"Escriba la cantidad calcular el arcontangente: ";
				cin>>w;}
				y=atan(w);
				r=(y/pi)*180;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El ángulo de la cantidad es: ";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<" grados"<<"\n\n";
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				r=0;w=0;break;
			case 21:
			if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFactorial de X!\n\n";
				cout<<"Se obtendra el factorial del numero(";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				n=vlr;system("pause");}
			else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFactorial de X (X!)\n\n";
				cout<<"Escriba un numero: ";
				cin>>n;}
				r+=1;
				for (c=1;c<=n;c++){
				r*=c;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El factorial de "<<n<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 22:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tPorcentaje de un numero X\n\n";
				cout<<"La cantidad equivalente a 100% es (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				w=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tPorcentaje de un numero X\n\n";
				cout<<"Escriba la cantidad a calcular el porcentaje: ";
				cin>>w;}
				cout<<"Escriba el porcentaje a calcular: ";
				cin>>y;
				r=(w*y)/100;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El "<<y<<"% de "<<w<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				y=0;w=0;r=0;break;
			case 23:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tNumero Aleatorio del 1 al n\n\n";
				cout<<"El maximo numero aletorio sera (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				n=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tNumero Aleatorio del 1 al n\n\n";
				cout<<"Escriba el maximo numero del que tomara un aletorio: ";cin>>n;}
				srand (time(NULL));
				r=rand() % n;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El numero aletorio es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				n=0;r=0;break;
			case 24:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t X^-y \n\n";
				cout<<"El valor de x sera (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				xel=vlr;system("pause");}
				else{
		 	    cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t X^-y \n\n";
				cout<<"Digite el valor para x: ";cin>>xel;
				if(xel==0){
				cout<<"No se puede utilizar el cero, vuelve a digita el valor para x: ";cin>>xel;}}
				cout<<"\nDigite el valor para (^-y): ";cin>>yel;
				aux=(1 / xel);
				r=pow (aux,yel);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"La respuesta del numero "<<xel<<" elevado a la potencia -"<<yel<<" es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<"\n\n";
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				xel=0;yel=0;aux=0,r=0;break;
			case 25:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tDerivada de una Constante\n\n";
	            cout<<"Se usara el valor de (";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") como numero real\n";
				num=vlr;system("pause");}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tDerivada de una Constante\n\n";
	            cout<<"Proporcione un numero entre el 1 al 10000: ";cin>>num;}
	            if (num>0 || num<10000){
		        r=num*0;}	
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
	            system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
			    num=0;r=0;break;
			case 26:
				if(opc4==1){
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de una Variable\n\n";
	            cout<<"Se tomara el numero(";
				if(vlr>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				num=vlr;system("pause");}
				else{
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de una Variable\n\n";
	            cout<<"Proporcione un numero en el campo de los reales: ";cin>>num;}
	            cout<<"\nProporcione la letra de la variable: ";cin>>var;
	            if (num>=0 || num<10000 || num<=0){
		        r=num;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r<<endl;
				SetConsoleTextAttribute(hConsole, 15);
	            system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
				vlr=r;}
				num=0;r=0;break;	
			case 27:
				if(opc4==1){
			cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
			cout<<"\nComo deseas usar tu numero guardado en esta funcion?\n\n1)Como numero entre los reales \n\n2)Como exponente \n\n3)De ambas maneras \n";
			 cout<<"(Escriba cualquier numero que no este en este menu para volver al menu anterior)\n\nRespuesta: ";cin>>opc5;
			switch(opc5){
				case 1:
					system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada Exponencial \n\n";
	            cout<<"El numero entre los reales se usara (";
	            if(vlr>=0){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<")\n\n";
				num=vlr;
				cout<<"Proporcione la letra de la variable: ";cin>>var;
	            cout<<"Proporcione el valor del exponente (enteros): ";cin>>expo;
	            if(expo>0 || expo<10000){
		        restl=num*expo;
		        expo2=expo-1;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<var<<"^"<<expo2<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Esta Respuesta no puede ser usado para otras operaciones\n\n";
				opc4=2;break;
					case 2:
						system("cls");
						cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada Exponencial \n\n";
	            cout<<"Proporcione un numero entre los reales: ";cin>>num;
				cout<<"\nProporcione la letra de la variable: ";cin>>var;
			    expo=vlr;
				cout<<"\nSe usara el valor de (";
				if(expo>=0){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<") como exponente \n\n";
				if(expo>0 || expo<10000){
		        restl=num*expo;
		        expo2=expo-1;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<var<<"^"<<expo2<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Esta Respuesta no puede ser usado para otras operaciones\n\n";
				opc4=2;break;
						case 3:
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada Exponencial \n\n";
	            cout<<"El numero entre los reales se usara ("<<endl;
	            if(vlr>=0){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<")\n\n";
				num=vlr;
				cout<<"Proporcione la letra de la variable: ";cin>>var;
				expo=vlr;
				cout<<"\nSe usara el valor de (";
				if(expo>=0){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<") como exponente \n\n";
				if(expo>0 || expo<10000){
		        restl=num*expo;
		        expo2=expo-1;}
		        system("pause");
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<var<<"^"<<expo2<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Esta Respuesta no puede ser usado para otras operaciones\n\n";
				opc4=2;break;}}
			    else{
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada Exponencial \n\n";
	            cout<<"Proporcione un numero entre los reales: ";cin>>num;
	            cout<<"\nProporcione la letra de la variable: ";cin>>var;
	            cout<<"\nProporcione el valor del exponente (enteros): ";cin>>expo;
	            if(expo>0 || expo<10000){
		        restl=num*expo;
		        expo2=expo-1;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<var<<"^"<<expo2<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				cout<<"Esta Respuesta no puede ser usado para otras operaciones\n\n";
				opc4=2;}
	            num=0;expo=0;restl=0;expo2=0;break;
			case 28:
				if(opc4==1){
				 	 cout<<"----------------------------------------------------------------------------------------------"<<endl;
					 cout<<"\nComo deseas usar tu numero guardado en esta funcion?\n\n1)Como numero entre los reales \n\n2)Como exponente(si el numero guardado es positivo sera convertido a negativo) \n\n3)De ambas maneras \n";
				     cout<<"(Escriba cualquier numero que no este en este menu para volver al menu anterior)\n\nRespuesta: ";cin>>opc5;
				 switch(opc5){
				 	case 1:
				 		system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de un Cociente \n\n";
	            cout<<"El numero entre los reales se usara (";
				if(vlr>=0){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				num=vlr;
				cout<<"Proporcione la letra de la variable: ";cin>>var;
	            cout<<"\nProporcione el valor del exponencial (negativo): ";cin>>expo;
	            cout<<endl;
	            if(n<0 || n>-10000){
		        num2=num*expo;
		        expo2=expo-1;
		        restl=num2;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<"("<<num<<var<<")"<<"^"<<expo2<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                system("pause");
                system("cls");
				cout<<"Tu resultado no puede ser usado en ninguna otra funcion...\n";
				opc4=2;break;
				case 2:
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de un Cociente \n\n";
	            cout<<"Proporcione el numero entre los reales: ";cin>>num;
	            cout<<"\nProporcione la letra de la variable: ";cin>>var;
	            if(vlr>=1){
	            	expo=vlr*-1;}
				else{
				expo=vlr;}
	            cout<<"\nSe usara el valor de (";
				if(expo>=1){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<") como exponente negativo\n";
	            if(n<0 || n>-10000){
		        num2=num*expo;
		        expo2=expo-1;
		        restl=num2;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<"("<<num<<var<<")"<<"^"<<expo2<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                system("pause");
                system("cls");
                cout<<"Tu resultado no puede ser usado en ninguna otra funcion...\n";
				opc4=2;break;
				case 3:
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de un Cociente \n\n";
	            cout<<"El numero entre los reales se usara ("<<endl;
	            if(vlr>=0){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<")\n\n";
	            num=vlr;
				cout<<"Proporcione la letra de la variable: ";cin>>var;
	            if(vlr>=1){
	            	expo=vlr*-1;}
				else{
				expo=vlr;}
	            cout<<"\nSe usara el valor de (";
				if(expo>=1){
	            SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);	}
				else{
				SetConsoleTextAttribute(hConsole, 2);
				cout<<expo;
				SetConsoleTextAttribute(hConsole, 15);}
	            cout<<") como exponente negativo\n";
	            if(n<0 || n>-10000){
		        num2=num*expo;
		        expo2=expo-1;
		        restl=num2;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<"("<<num<<var<<")"<<"^"<<expo2<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                system("pause");
                system("cls");
                cout<<"Tu resultado no puede ser usado en ninguna otra funcion...\n";
				opc4=2;break;}}
				else{
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de un Cociente \n\n";
	            cout<<"Proporcione el numero entre los reales: ";cin>>num;
	            cout<<"\nProporcione la letra de la variable: ";cin>>var;
	            cout<<"\nProporcione el valor del exponencial (negativo): ";cin>>expo;
	            cout<<endl;
	            if(n<0 || n>-10000){
		        num2=num*expo;
		        expo2=expo-1;
		        restl=num2;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<restl<<"("<<num<<var<<")"<<"^"<<expo2<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                system("pause");
                system("cls");
                cout<<"Tu resultado no puede ser usado en ninguna otra funcion...\n";
				opc4=2;}
				num=0;restl=0;expo=0;expo2=0;break;
			case 29:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t Derivada de Funciones Trigonométricas \n\n";
	            cout<<"1) Seno \n2)Coseno \n3)Tangente \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior)\n\n";
	            cout<<"Respuesta: "<<endl;cin>>opc2;
	            system("cls");
	                switch (opc2){
	                 	case 1:
			                 cout<<"----------------------------------------------------------------------------------------------"<<endl;
			                 cout<<"\t\tDerivar Seno\n\n";
                 	         cout<<"El numero entre los reales se usara (";
	                         if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
	                         cout<<")\n\n";
	                         num=vlr;
							 cout<<"Proporciona la letra de la variable: ";cin>>var;
                  	         system("cls");
                  	         cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                         cout<<"La derivada de la funcion Sen("<<num<<var<<") es ";
							 SetConsoleTextAttribute(hConsole, 2);
							 cout<<num<<"Cos("<<num<<var<<")"<<endl;
							 SetConsoleTextAttribute(hConsole, 15);
							 num=0;break;
			           case 2:
			                cout<<"----------------------------------------------------------------------------------------------"<<endl;
		                   	cout<<"\t\tDerivar Coseno\n\n";
	                        cout<<"El numero entre los reales se usara (";
	                         if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
	                         cout<<")\n\n";
	                         num=vlr;
							cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                        restl=num*-1;
	                        system("cls");
	                        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                        cout<<"La derivada de la funcion de Cos("<<num<<var<<") es ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<restl<<"Sen("<<num<<var<<")"<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							num=0;restl=0;break;
				       case 3:
						    cout<<"----------------------------------------------------------------------------------------------"<<endl;
						    cout<<"Derivar Tangente\n\n";
	                        cout<<"El numero entre los reales se usara (";
	                         if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
	                         cout<<")\n\n";
	                         num=vlr;
	                        cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                        system("cls");
	                        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                        cout<<"La derivada de la funcion de Tan("<<num<<var<<") es ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<num<<"Sec("<<num<<var<<")^2"<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							num=0;break;}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t Derivada de Funciones Trigonométricas \n\n";
	            cout<<"1) Seno \n2)Coseno \n3)Tangente \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior)\n\n";
	            cout<<"Respuesta: "<<endl;cin>>opc2;
	            system("cls");
	                switch (opc2){
	                 	case 1:
			                 cout<<"----------------------------------------------------------------------------------------------"<<endl;
			                 cout<<"\t\tDerivar Seno\n\n";
                 	         cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
                  	         cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
                  	         system("cls");
                  	         cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                         cout<<"La derivada de la funcion Sen("<<num<<var<<") es ";
							 SetConsoleTextAttribute(hConsole, 2);
							 cout<<num<<"Cos("<<num<<var<<")"<<endl;
							 SetConsoleTextAttribute(hConsole, 15);
							 num=0;break;
			           case 2:
			                cout<<"----------------------------------------------------------------------------------------------"<<endl;
		                   	cout<<"\t\tDerivar Coseno\n\n";
	                        cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
	                        cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                        restl=num*-1;
	                        system("cls");
	                        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                        cout<<"La derivada de la funcion de Cos("<<num<<var<<") es ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<restl<<"Sen("<<num<<var<<")"<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							num=0;restl=0;break;
				       case 3:
						    cout<<"----------------------------------------------------------------------------------------------"<<endl;
						    cout<<"Derivar Tangente\n\n";
	                        cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
	                        cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                        system("cls");
	                        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                        cout<<"La derivada de la funcion de Tan("<<num<<var<<") es ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<num<<"Sec("<<num<<var<<")^2"<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							num=0;break;}}break;
			case 30:
				if(opc4==1){
					if(vlr<0){
						cout<<"Tu numero guardado es negativo asi que sera convertido a positivo para poder usarlo en esta funcion, de lo contrario no se puede usar...\n";
						vlr*=-1;
					}
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tMatrices\n\n";
				cout<<"1.Suma de matrices \n2.Multiplicación de matrices \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior) \n";
				cin>>opc2;
				system("cls");
					switch(opc2){
						case 1:
							
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tSuma de matrices\n\n";
							cout<<"Como desea que su numero guardado sea usado en la suma de matrices? \n\n 1)filas de la matrices  \n\n 2)Columnas de la matrices \n\n ";
							cout<<"(Para salir de este menu introduzca cualquier numero que no este en este menu)\nRespuesta: ";cin>>opc5;
							system("cls");
							switch(opc5){
								case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tSuma de matrices\n\n";
							cout<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<") como las filas de la matrices \n";
							n=vlr;
							cout<<endl<<"Digite el numero de columnas de las matrices ";cin>>c;
							system("cls");
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"\tAhora digite los valores para la matriz 2\n\n";
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
							for(int i=0;i<n;i++){
							for(int j=0;j<c;j++){
									cadena[3].matriz[i][j]=cadena[1].matriz[i][j]+cadena[2].matriz[i][j];}}
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"El resultado es: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 2);
							for(int i=0;i<n;i++){
							for(int j=0;j<c;j++){
							  cout<<"\t"<<cadena[3].matriz[i][j]<<"  ";	}
							  cout<<endl;}
							  SetConsoleTextAttribute(hConsole, 15);
							  n=0;c=0;z=0,opc4=2;break;	
									case 2:
										cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tSuma de matrices\n\n";
							cout<<"Digite el numero de filas de la matrices: ";cin>>n;
							cout<<endl<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
							cout<<") como columnas de la matrices\n";
							c=vlr;
							system("pause");
							system("cls");
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"\tAhora digite los valores de la matriz 2\n\n";
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
							for(int i=0;i<n;i++){
							for(int j=0;j<c;j++){
									cadena[3].matriz[i][j]=cadena[1].matriz[i][j]+cadena[2].matriz[i][j];}}
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"El resultado es: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 2);
							for(int i=0;i<n;i++){
							for(int j=0;j<c;j++){
							  cout<<"\t"<<cadena[3].matriz[i][j]<<"  ";	}
							  cout<<endl;}
							  SetConsoleTextAttribute(hConsole, 15);
							  n=0;c=0;z=0,opc4=2;break;}break;
						case 2:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tMultiplicacion de matrices\n\n";
							cout<<"Como desea que su numero guardado sea usado en la multiplicacion de matrices?\n\n 1)filas de la matriz 1\n\n 2)Columnas de la matriz 1\n\n 3)Filas de la matriz 2\n\n 4)De las 3 maneras\n\n";
							cout<<"(Para salir de este menu introduzca cualquier numero que no este en este menu)\nRespuesta: ";cin>>opc5;
							system("cls");
							switch(opc5){
								case 1:
									cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tMultiplicacion de matrices\n\n";
							cout<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<") como filas de la matriz 1\n";
							n=vlr;
							cout<<endl<<"Digita el numero de columnas para la matriz 1: ";cin>>c;
							system("cls");
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"Digita el numero de columnas para la segunda matriz: ";cin>>z;
							system("cls");
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
								for(int m=0;m<z;m++){
									cadena[0].matriz[i][j] = cadena[2].matriz[i][j] * cadena[1].matriz[i][m];}}}
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					        cout<<"El resultado es: "<<endl<<endl;
					        SetConsoleTextAttribute(hConsole, 2);
					           for(int i=0;i<n;i++){
					           for(int j=0;j<c;j++){
					              cout<<cadena[0].matriz[i][j]<<"   ";}cout<<endl;}
					              SetConsoleTextAttribute(hConsole, 15);
					              n=0;c=0;z=0,opc4=2;break;
									case 2:
										cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tMultiplicacion de matrices\n\n";
							cout<<"Digita el numero de filas para la matriz 1: ";cin>>n;
							cout<<endl<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<") como columnas de la matriz 1\n";
							c=vlr;
							system("pause");
							system("cls");
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"Digita el numero de columnas para la segunda matriz: ";cin>>z;
							system("cls");
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
								for(int m=0;m<z;m++){
									cadena[0].matriz[i][j] = cadena[2].matriz[i][j] * cadena[1].matriz[i][m];}}}
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					        cout<<"El resultado es: "<<endl<<endl;
					        SetConsoleTextAttribute(hConsole, 2);
					           for(int i=0;i<n;i++){
					           for(int j=0;j<c;j++){
					              cout<<cadena[0].matriz[i][j]<<"   ";}cout<<endl;}
					              SetConsoleTextAttribute(hConsole, 15);
					              n=0;c=0;z=0,opc4=2;break;
										case 3:
											cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tMultiplicacion de matrices\n\n";
							cout<<"Digita el numero de filas para la matriz 1: ";cin>>n;
							cout<<endl<<"Digita el numero de columnas para la matriz 1: ";cin>>c;
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<") como columnas de la segunda matriz\n";
				             z=vlr;
							system("pause");
							system("cls");
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
								for(int m=0;m<z;m++){
									cadena[0].matriz[i][j] = cadena[2].matriz[i][j] * cadena[1].matriz[i][m];}}}
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					        cout<<"El resultado es: "<<endl<<endl;
					        SetConsoleTextAttribute(hConsole, 2);
					           for(int i=0;i<n;i++){
					           for(int j=0;j<c;j++){
					              cout<<cadena[0].matriz[i][j]<<"   ";}cout<<endl;}
					              SetConsoleTextAttribute(hConsole, 15);
					              n=0;c=0;z=0,opc4=2;break;
								case 4:
									cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tMultiplicacion de matrices\n\n";
							cout<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<")Como filas de la matriz 1\n";
							n=vlr;
							cout<<endl<<"Se usara el numero(";
							if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<") como columnas de la matriz 1\n";
							c=vlr;
							system("pause");
							system("cls");
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
						  cout<<"Se usara el numero(";
						  if(vlr>=0){
	                         SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);	}
				             else{
				             SetConsoleTextAttribute(hConsole, 2);
				             cout<<vlr;
				             SetConsoleTextAttribute(hConsole, 15);}
				             cout<<") como filas de la matriz 2\n";
						    z=vlr;
						system("pause");
							system("cls");
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
								for(int m=0;m<z;m++){
									cadena[0].matriz[i][j] = cadena[2].matriz[i][j] * cadena[1].matriz[i][m];}}}
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					        cout<<"El resultado es: "<<endl<<endl;
					        SetConsoleTextAttribute(hConsole, 2);
					           for(int i=0;i<n;i++){
					           for(int j=0;j<c;j++){
					              cout<<cadena[0].matriz[i][j]<<"   ";}cout<<endl;}
					              SetConsoleTextAttribute(hConsole, 15);
					              n=0;c=0;z=0,opc4=2;break;}}}
					else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tMatrices\n\n";
				cout<<"1.Suma de matrices \n2.Multiplicación de matrices \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior) \n";
				cin>>opc2;
				system("cls");
					switch(opc2){
						case 1:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tSuma de matrices\n\n";
							cout<<"Digite el numero de filas de la matriz 1: ";cin>>n;
							cout<<endl<<"Digite el numero de columnas de la matriz 1: ";cin>>c;
							system("cls");
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"Digite los valores de la matriz 2\n\n";
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
							for(int i=0;i<n;i++){
							for(int j=0;j<c;j++){
									cadena[3].matriz[i][j]=cadena[1].matriz[i][j]+cadena[2].matriz[i][j];}}
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"El resultado es: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 2);
							for(int i=0;i<n;i++){
							for(int j=0;j<c;j++){
							  cout<<"\t"<<cadena[3].matriz[i][j]<<"  ";	}
							  cout<<endl;}
							  SetConsoleTextAttribute(hConsole, 15);
							  n=0;c=0;z=0;break;
						case 2:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tMultiplicacion de matrices\n\n";
							cout<<"Digita el numero de filas para la matriz 1: ";cin>>n;
							cout<<endl<<"Digita el numero de columnas para la matriz 1: ";cin>>c;
							for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[1].matriz[i][j];}}
							system("cls");
							cout<<"Digita el numero de columnas para la segunda matriz: ";cin>>z;
							system("cls");
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
									cout<<"Digita el valor para fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
								for(int i=0;i<n;i++){
								for(int j=0;j<c;j++){
								for(int m=0;m<z;m++){
									cadena[0].matriz[i][j] = cadena[2].matriz[i][j] * cadena[1].matriz[i][m];}}}
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					        cout<<"El resultado es: "<<endl<<endl;
					        SetConsoleTextAttribute(hConsole, 2);
					           for(int i=0;i<n;i++){
					           for(int j=0;j<c;j++){
					              cout<<cadena[0].matriz[i][j]<<"   ";}cout<<endl;}
					              SetConsoleTextAttribute(hConsole, 15);
					              n=0;c=0;z=0;}}break;
			case 31:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
					cout<<"\t\tRadianes-Grados\n\n";
					cout<<"1.Grados a radianes \n2.Radianes a grados \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior) \n\n";
					cout<<"respuesta: ";cin>>opc2;
					system("cls");
						switch(opc2){
							case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tGrados a radianes\n\n";
								cout<<"Se usara el numero guardado(";
								if(vlr>=0){
				                SetConsoleTextAttribute(hConsole, 2);
			                	cout<<vlr;
				                SetConsoleTextAttribute(hConsole, 15);}
								else{
				                SetConsoleTextAttribute(hConsole, 4);
				                 cout<<vlr;
				                 SetConsoleTextAttribute(hConsole, 15);}
								cout<<")\n";
								w=vlr;
								r=w*(pi/180);
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El angulo "<<w<<" en radianes es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<r<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								system("pause");
				                 system("cls");
				                cout<<"Deseas usar el numero (";
				                if(r>=0){
			      	            SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                  SetConsoleTextAttribute(hConsole, 15);}
								  else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				               SetConsoleTextAttribute(hConsole, 15);}
				                 cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
					           vlr=r;}
								r=0;w=0;break;
							case 2:	
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tRadianes a grados\n\n";
								cout<<"Se usara el numero guardado(";
								if(vlr>=0){
				                 SetConsoleTextAttribute(hConsole, 2);
				                   cout<<vlr;
				                  SetConsoleTextAttribute(hConsole, 15);
				                  }else{
				                  SetConsoleTextAttribute(hConsole, 4);
				                  cout<<vlr;
				                   SetConsoleTextAttribute(hConsole, 15);}
								w=vlr;
								r=w*(180/pi);
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El numero en radianes "<<w<<" es en grados: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<r<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								system("pause");
				                system("cls");
				                cout<<"Deseas usar el numero (";
				                if(r>=0){
			      	            SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                  SetConsoleTextAttribute(hConsole, 15);
				               }else{
				              SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                 cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								r=0;w=0;}break;}
				else{
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
					cout<<"\t\tRadianes-Grados\n\n";
					cout<<"1.Grados a radianes \n2.Radianes a grados \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior) \n\n";
					cout<<"respuesta: ";cin>>opc2;
					system("cls");
						switch(opc2){
							case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tGrados a radianes\n\n";
								cout<<"Digite el numero de grados a convertir : ";cin>>w;
								r=w*(pi/180);
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El angulo "<<w<<" en radianes es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<r<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								system("pause");
				                 system("cls");
				                 cout<<"Deseas usar el numero (";
				               if(r>=0){
			      	              SetConsoleTextAttribute(hConsole, 2);
				                    cout<<r;
				                    SetConsoleTextAttribute(hConsole, 15);
				                     }else{
				                     SetConsoleTextAttribute(hConsole, 4);
				                     cout<<r;
				                       SetConsoleTextAttribute(hConsole, 15);}
				                       cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                      if(opc4==1){
					                    vlr=r;}
							    r=0;w=0;break;
							case 2:	
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tRadianes a grados\n\n";
								cout<<"Digite el numero en radianes a convertir: ";cin>>w;
								r=w*(180/pi);
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El numero en radianes "<<w<<" es en grados: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<r<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								system("pause");
				                system("cls");
				                 cout<<"Deseas usar el numero (";
				                if(r>=0){
			      	           SetConsoleTextAttribute(hConsole, 2);
				               cout<<r;
				                  SetConsoleTextAttribute(hConsole, 15);
				                }else{
				               SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                 cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}	
								r=0;w=0;}}break;
			case 32:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tInvertir un numero\n\n ";
				cout<<"Se usara el numero(";
				if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") para invertir\n";
				sprintf(cadena[0].numero,"%.0f",vlr);
				system("pause");
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\n El numero invertido es: ";
			   	SetConsoleTextAttribute(hConsole, 2);
				cout<<strrev(cadena[0].numero)<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause");
				system("cls");
				r=atof(cadena[0].numero);
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
					vlr=r;}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tInvertir un numero\n\n ";
				fflush(stdin);
				cout<<"Digite el numero a invertir: ";
				cin.getline(cadena[0].numero,1000,'\n');
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\n El numero invertido es: ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<strrev(cadena[0].numero)<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				r=atof(cadena[0].numero);
				system("pause");
				system("cls");
				cout<<"Deseas usar el numero (";
				if(r>=0){
				SetConsoleTextAttribute(hConsole, 2);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
				SetConsoleTextAttribute(hConsole, 4);
				cout<<r;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				if(opc4==1){
					vlr=r;}}break;
			
			
			
			
			/////////////////////////////////////////////Falta agregar switch anidados para que funcione el vlr
			
			case 33:
				if(opc4==1){
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tPermutaciones\n\n";
				cout<<"1)PR(n,k) \n2)P(n)=n! \n3)PR(n,r)=n^r \n4)P(n,r)\n\n(Digite cualquier numero que no este en este menu para volver al menu anterior)\n \nRespuesta: ";cin>>opc2;
				system("cls");
					switch(opc2){
							case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"Como deseas usar tu numero Guardado aqui?\n\n1)Como valor de N \n\n2)Como valor de K\n\n3)De Ambas Maneras \n\n(Para salir de este menu digite un numero que no se encuentre en este)\n";
								cout<<"Respuesta: ";cin>>opc5;system("cls");
								switch(opc5){
								case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,k)\n\n";
								cout<<"Se usara el valor (";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") como valor de N\n";
								n=vlr;
								cout<<"Digite el numero de letras repetidas (k): ";cin>>c;
								for(int i=1;i<=c;i++){
								 cout<<"Digite cuantas veces se repite la letra "<<i+1<<" : ";cin>>numero[i];}
								for(int j=1;j<=c;j++){
								for(int i=1;i<=numero[j];i++){
								 resultado[j]*=i;}}
								num=1;
								for(int i=1;i<=n;i++){	
								 num*=i;}
								for(int m=1;m<=c;m++){
								 sum+=resultado[m];}
								respuesta=num/sum;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=respuesta;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								respuesta=0;n=0;c=0;num=0;sum=0;break;
								case 2:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,k)\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<"Se usara el valor(";
									if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") Como valor de K tipos\n";
								c=vlr;
								for(int i=1;i<=c;i++){
								 cout<<"Digite cuantas veces se repite la letra "<<i+1<<" : ";cin>>numero[i];}
								for(int j=1;j<=c;j++){
								for(int i=1;i<=numero[j];i++){
								 resultado[j]*=i;}}
								num=1;
								for(int i=1;i<=n;i++){	
								 num*=i;}
								for(int m=1;m<=c;m++){
								 sum+=resultado[m];}
								respuesta=num/sum;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=respuesta;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								respuesta=0;n=0;c=0;num=0;sum=0;break;		
								case 3:				
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,k)\n\n";
								cout<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<")Como valor de N\n";
								n=vlr;
								cout<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") Como valor de K repetidas\n\n";
								c=vlr;
								system("pause");
								system("cls");
								for(int i=1;i<=c;i++){
								 cout<<"Digite cuantas veces se repite la letra "<<i+1<<" : ";cin>>numero[i];}
								for(int j=1;j<=c;j++){
								for(int i=1;i<=numero[j];i++){
								 resultado[j]*=i;}}
								num=1;
								for(int i=1;i<=n;i++){	
								 num*=i;}
								for(int m=1;m<=c;m++){
								 sum+=resultado[m];}
								respuesta=num/sum;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=respuesta;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								
								
								respuesta=0;n=0;c=0;num=0;sum=0;break;}break;
							case 2:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"Como deseas usar tu numero Guardado aqui?\n\n1)Como valor de N \n\n(Para salir de este menu digite un numero que no se encuentre en este)\n";
								cout<<"Respuesta: ";cin>>opc5;system("cls");	
								switch(opc5){
									case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n)=n!\n\n";
								cout<<"Se usara el valor de (";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<")Como N\n";
								n=vlr;
								system("pause");
								system("cls");
								num=1;
								for(int i=1;i<=n;i++){
								 num*=i;}
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El resultado es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<num<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=num;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								num=0;n=0;break;}break;
							case 3:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"Como deseas usar tu numero Guardado aqui?\n\n1)Como valor de N \n\n2)Como valor de R\n\n3)De Ambas Maneras \n\n(Para salir de este menu digite un numero que no se encuentre en este)\n";
								cout<<"Respuesta: ";cin>>opc5;system("cls");
								switch(opc5){
									case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,r)=n^r\n\n";
								cout<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") Como N\n";
								n=vlr;
								cout<<endl<<"Digite el valor de r: ";cin>>c;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta de PR("<<n<<","<<c<<") es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<pow(n,c)<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=pow(n,c);
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								case 2:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,r)=n^r\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<endl<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<")Como R\n";
								c=vlr;
								system("pause");
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta de PR("<<n<<","<<c<<") es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<pow(n,c)<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=pow(n,c);
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}			
							    case 3:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,r)=n^r\n\n";
								cout<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") Como valor de N\n";
								n=vlr;
								cout<<endl<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<")Como valor de R\n";
								c=vlr;
								system("pause");
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta de PR("<<n<<","<<c<<") es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<pow(n,c)<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=pow(n,c);
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}}break;
							case 4:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"Como deseas usar tu numero Guardado aqui?\n\n1)Como valor de N \n\n2)Como valor de R\n\n3)De Ambas Maneras \n\n(Para salir de este menu digite un numero que no se encuentre en este)\n";
								cout<<"Respuesta: ";cin>>opc5;system("cls");
								switch(opc5){
								case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n,r)\n\n";
								cout<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") Como N\n";
								n=vlr;
								cout<<endl<<"Digite el valor de r: ";cin>>c;
								sum=1;
								for(int i=1;i<=n;i++){
								 sum*=i;}
								 num=n-c;
								 a=1;
								for(int i=1;i<=num;i++){
								 a*=i;}
								respuesta=sum/a;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=respuesta;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}	break;
								case 2:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n,r)\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<endl<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<") Como R\n";
								c=vlr;
								system("pause");
								system("cls");
								sum=1;
								for(int i=1;i<=n;i++){
								 sum*=i;}
								 num=n-c;
								 a=1;
								for(int i=1;i<=num;i++){
								 a*=i;}
								respuesta=sum/a;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=respuesta;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
							    case 3:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n,r)\n\n";
								cout<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<")Como N\n";
							    n=vlr;
								cout<<endl<<"Se usara el valor(";
								if(vlr>=0){
								SetConsoleTextAttribute(hConsole, 2);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								else{
								SetConsoleTextAttribute(hConsole, 4);
								cout<<vlr;
								SetConsoleTextAttribute(hConsole, 15);}
								cout<<")Como R\n";
								c=vlr;
								system("pause");
								system("cls");
								sum=1;
								for(int i=1;i<=n;i++){
								 sum*=i;}
								 num=n-c;
								 a=1;
								for(int i=1;i<=num;i++){
								 a*=i;}
								respuesta=sum/a;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								r=respuesta;
								system("pause");
								system("cls");
								cout<<"Deseas usar el numero (";
				                if(r>=0){
			                 	SetConsoleTextAttribute(hConsole, 2);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);
				                }else{
				                SetConsoleTextAttribute(hConsole, 4);
				                cout<<r;
				                SetConsoleTextAttribute(hConsole, 15);}
				                cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				                if(opc4==1){
					            vlr=r;}
								n=0;c=0;num=0;sum=0;respuesta=0;break;}}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tPermutaciones\n\n";
				cout<<"1)PR(n,k) \n2)P(n)=n! \n3)PR(n,r)=n^r \n4)P(n,r)\n\n(Digite cualquier numero que no este en este menu para volver al menu anterior)\n \nRespuesta: ";cin>>opc2;
				system("cls");
					switch(opc2){
							case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,k)\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<"Digite el numero de letras repetidas (k): ";cin>>c;
								for(int i=1;i<=c;i++){
								 cout<<"Digite cuantas veces se repite la letra "<<i+1<<" : ";cin>>numero[i];}
								for(int j=1;j<=c;j++){
								for(int i=1;i<=numero[j];i++){
								 resultado[j]*=i;}}
								num=1;
								for(int i=1;i<=n;i++){	
								 num*=i;}
								for(int m=1;m<=c;m++){
								 sum+=resultado[m];}
								respuesta=num/sum;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								respuesta=0;n=0;c=0;num=0;sum=0;break;
							case 2:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n)=n!\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								system("cls");
								num=1;
								for(int i=1;i<=n;i++){
								 num*=i;}
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El resultado es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<num<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								num=0;n=0;break;
							case 3:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,r)=n^r\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<endl<<"Digite el valor de r: ";cin>>c;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta de PR("<<n<<","<<c<<") es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<pow(n,c)<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								n=0;c=0;break;
							case 4:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n,r)\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<endl<<"Digite el valor de r: ";cin>>c;
								sum=1;
								for(int i=1;i<=n;i++){
								 sum*=i;}
								 num=n-c;
								 a=1;
								for(int i=1;i<=num;i++){
								 a*=i;}
								respuesta=sum/a;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta es: ";
								SetConsoleTextAttribute(hConsole, 2);
								cout<<respuesta<<endl<<endl;
								SetConsoleTextAttribute(hConsole, 15);
								n=0;c=0;num=0;sum=0;respuesta=0;}}break;
			case 34:
				if(opc4==1){
					if(vlr<0){
					cout<<"Su numero guardado es negativo asi que para poder usarlo en esta funcion lo convertiremos a positivo...\n";
					vlr*=-1;system("pause");}
					system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCombinaciones\n\n";
				cout<<"1)CR^p,n \n2)C(n,r)\n\n(Digite cualquier numero que no este en este menu para volver al menu anterior)\n \nrespuesta: ";cin>>opc2;
				system("cls");
					switch(opc2){
						case 1:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"De que manera desea usar su numero guardado? \n\n1)Como el valor de N \n\n2)Como el valor de P \n\n3)De ambas maneras \n\n(Para salir de este menu digite cualquier numero que no se encuentre en este)\n\n";
							cout<<"Respuesta: ";cin>>opc5;system("cls");
							switch(opc5){
								case 1:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tCR^p,n\n\n";
							cout<<"Se usara el numero(";
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);
	                        cout<<") como valor de n\n";
							n=vlr;
							cout<<endl<<"Digita el valor de p: ";cin>>c;
							system("cls");
							a=n+c-1;b=n-1;n=1;
							for(int i=1;i<=a;i++){
							    n*=i;}
							a=1;
							for(int i=1;i<=b;i++){
							a*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=n/(a*b);
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
						    r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							respuesta=0;n=0;c=0;b=0;a=0;break;
							case 2:		
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tCR^p,n\n\n";
							cout<<"Digite el valor para N: ";cin>>n;
							cout<<endl<<"Se usara el valor de(";
							SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);
							cout<<") como valor de P\n";
							c=vlr;
							system("pause");
							system("cls");
							a=n+c-1;b=n-1;n=1;
							for(int i=1;i<=a;i++){
							    n*=i;}
							a=1;
							for(int i=1;i<=b;i++){
							a*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=n/(a*b);
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							respuesta=0;n=0;c=0;b=0;a=0;break;
							case 3:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tCR^p,n\n\n";
							cout<<"Se usara el valor(";
							SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);
							cout<<") como valor de N\n";
							n=vlr;
							cout<<endl<<"Se usara el valor(";
							SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);
							cout<<") como valor de P\n";
							c=vlr;
							system("pause");
							system("cls");
							a=n+c-1;b=n-1;n=1;
							for(int i=1;i<=a;i++){
							    n*=i;}
							a=1;
							for(int i=1;i<=b;i++){
							a*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=n/(a*b);
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							r=respuesta;
							if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r<<"\n\n";
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r<<"\n\n";
				            SetConsoleTextAttribute(hConsole, 15);}
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							respuesta=0;n=0;c=0;b=0;a=0;break;}break;
							case 2:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"De que manera desea usar su numero guardado? \n\n1)Como el valor de N \n\n2)Como el valor de R \n\n3)De ambas maneras \n\n(Para salir de este menu digite cualquier numero que no se encuentre en este)\n\n";
							cout<<"Respuesta: ";cin>>opc5;system("cls");
							switch(opc5){
							case 1:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tC(n,r)\n\n";
							cout<<"Se usara el valor(";
							if(vlr>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
							cout<<") como N\n";
							n=vlr;
							cout<<endl<<"Digite el valor de r: ";cin>>c;
							a=1;b=n-c;
							for(int i=1;i<=n;i++){
								a*=i;}
							n=1;
						    for(int i=1;i<=b;i++){
								n*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=a/(n*b);
					     	system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							n=0;c=0;a=0;b=0;respuesta=0;break;
							case 2:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tC(n,r)\n\n";
							cout<<"Digite el valor de n: ";cin>>n;
							cout<<endl<<"Se usara el valor(";
							if(vlr>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") como valor de R\n";
							c=vlr;
							system("pause");
							system("cls");
							a=1;b=n-c;
							for(int i=1;i<=n;i++){
								a*=i;}
							n=1;
						    for(int i=1;i<=b;i++){
								n*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=a/(n*b);
					     	system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							n=0;c=0;a=0;b=0;respuesta=0;break;
							case 3:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tC(n,r)\n\n";
							cout<<"Se usara el valor(";
							if(vlr>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") como valor de N\n";
							n=vlr;
							cout<<endl<<"Se usara el valor de (";
							if(vlr>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") Como valor de R\n";
							c=vlr;
							system("pause");
							system("cls");
							a=1;b=n-c;
							for(int i=1;i<=n;i++){
								a*=i;}
							n=1;
						    for(int i=1;i<=b;i++){
								n*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=a/(n*b);
					     	system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							n=0;c=0;a=0;b=0;respuesta=0;}break;}}
				            else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCombinaciones\n\n";
				cout<<"1)CR^p,n \n2)C(n,r)\n\n(Digite cualquier numero que no este en este menu para volver al menu anterior)\n \nrespuesta: ";cin>>opc2;
				system("cls");
					switch(opc2){
						case 1:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tCR^p,n\n\n";
							cout<<"Digita el valor de n: ";cin>>n;
							cout<<endl<<"Digita el valor de p: ";cin>>c;
							system("cls");
							a=n+c-1;b=n-1;n=1;
							for(int i=1;i<=a;i++){
							    n*=i;}
							a=1;
							for(int i=1;i<=b;i++){
							a*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=n/(a*b);
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							respuesta=0;n=0;c=0;b=0;a=0;break;
						case 2:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
							cout<<"\t\tC(n,r)\n\n";
							cout<<"Digite el valor de n: ";cin>>n;
							cout<<endl<<"Digite el valor de r: ";cin>>c;
							a=1;b=n-c;
							for(int i=1;i<=n;i++){
								a*=i;}
							n=1;
						    for(int i=1;i<=b;i++){
								n*=i;}
							b=1;
							for(int i=1;i<=c;i++){
								b*=i;}
							respuesta=a/(n*b);
					     	system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"La respuesta es: ";
							SetConsoleTextAttribute(hConsole, 2);
							cout<<respuesta<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 15);
							r=respuesta;
							system("pause");
			               	system("cls");
				            cout<<"Deseas usar el numero (";
				            if(r>=0){
				            SetConsoleTextAttribute(hConsole, 2);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<r;
				            SetConsoleTextAttribute(hConsole, 15);}
				            cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				             if(opc4==1){
				            vlr=r;}
							n=0;c=0;a=0;b=0;respuesta=0;}}break;
			case 35:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tConvertir de Polar a rectangular\n\n";
					cout<<"Como deseas usar tu numero guardado?\n\n1)Como el radio \n\n2)Como el angulo \n\n)De ambas maneras \n\n";
					cout<<"(Para salir de este menu digita cualquier numero que no se encuentre aqui)\n\nRespuesta: ";cin>>opc5;
					system("cls");
					switch(opc5){
						case 1:
							cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tConvertir de Polar a rectangular\n\n";
                cout<<"\nSe usara el valor(";
					if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") como el radio ";
				r=vlr;
                cout<<"\nIntroduce el valor del angulo(en grados): ";cin>>ag;
                system("cls");
                ar=ag*3.1416/180.0;
                m=r*cos(ar);
                y=r*sin(ar);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"Las coordenadas son: "<<endl;
                cout<<"\n\tX= ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<m;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Y=";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<y<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				opc4=2;
				break;
				case 2:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tConvertir de Polar a rectangular\n\n";
                cout<<"\nIntroduce el valor del radio: ";cin>>r;
                cout<<"\nSe usara el valor(";
				if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<")como el angulo ";
				ag=vlr;
				system("pause");
				system("cls");
                ar=ag*3.1416/180.0;
                m=r*cos(ar);
                y=r*sin(ar);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"Las coordenadas son: "<<endl;
                cout<<"\n\tX= ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<m;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Y=";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<y<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				opc4=2;
				break;
				case 3:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tConvertir de Polar a rectangular\n\n";
                cout<<"\nSe usara el valor(";
				if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") como el radio ";
				r=vlr;
                cout<<"\nSe usara el valor(";
                if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") como el angulo ";
				ag=vlr;
				system("pause");
				system("cls");
                ar=ag*3.1416/180.0;
                m=r*cos(ar);
                y=r*sin(ar);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"Las coordenadas son: "<<endl;
                cout<<"\n\tX= ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<m;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Y=";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<y<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				opc4=2;}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tConvertir de Polar a rectangular\n\n";
                cout<<"\nIntroduce el valor del radio: ";cin>>r;
                cout<<"\nIntroduce el valor del angulo(en grados): ";cin>>ag;
                ar=ag*3.1416/180.0;
                m=r*cos(ar);
                y=r*sin(ar);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"Las coordenadas son: "<<endl;
                cout<<"\n\tX= ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<m;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Y=";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<y<<endl<<endl;
				SetConsoleTextAttribute(hConsole, 15);}
				m=0;y=0;ar=0;ag=0;r=0;break;
		    case 36:
		    	cout<<"----------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\tRectangular a Polar\n\n";
				if(opc4==1){
		    	cout<<"Como deseas usar tu numero guardado? \n\n1)Como cordenada X \n\n2)Como cordenada Y \n\n(Para salir del menu digite un numero que no este aqui)\n\nRespuesta: ";cin>>opc5;
				system("cls");
				switch(opc5){
					case 1:
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\tRectangular a Polar\n\n";
                cout<<"Se usara el valor(";
				if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") como coordenada X\n";
				f=vlr;
                cout<<"Coordenada Y: ";cin>>l;
                o=sqrt(pow(f,2)+pow(l,2));
                theta=atan(l/f);
                theta=theta*(180/pi);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<endl<<"radio = ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<o;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Angulo theta = ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<theta;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<" grados\n\n";
                theta=0;f=0;l=0;o=0,opc4=2;break;	
						case 2:
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\tRectangular a Polar\n\n";
                cout<<"Coordenada X: ";cin>>f;
                cout<<"Se usara el valor(";
				if(vlr>=0){
			    SetConsoleTextAttribute(hConsole, 2);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);
				}else{
	            SetConsoleTextAttribute(hConsole, 4);
				cout<<vlr;
				SetConsoleTextAttribute(hConsole, 15);}
				cout<<") como coordenada Y\n";
				l=vlr;
				system("pause");
				system("cls");
                o=sqrt(pow(f,2)+pow(l,2));
                theta=atan(l/f);
                theta=theta*(180/pi);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<endl<<"radio = ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<o;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Angulo theta = ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<theta;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<" grados\n\n";
                theta=0;f=0;l=0;o=0,opc4=2;break;}}
				else{
                cout<<"----------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\tRectangular a Polar\n\n";
                cout<<"Coordenada X: ";cin>>f;
                cout<<"Coordenada Y: ";cin>>l;
                o=sqrt(pow(f,2)+pow(l,2));
                theta=atan(l/f);
                theta=theta*(180/pi);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<endl<<"radio = ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<o;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<"   Angulo theta = ";
				SetConsoleTextAttribute(hConsole, 2);
				cout<<theta;
				SetConsoleTextAttribute(hConsole, 15);
				cout<<" grados\n\n";}
                theta=0;f=0;l=0;o=0;break;
			case 37:
				if(opc4==1){
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCalculo de una integral\n\n";
				cout<<"Se usara como numero de intervalos al numero(";
				if(vlr>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<vlr;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<vlr;
				     SetConsoleTextAttribute(hConsole, 15);}
				cout<<")\n";
				n=vlr;
				for (i=0; i<n; i++) {
                    xd= 1.0*i/n;
                    xh= 1.0*(i+1)/n;
                    r+=((pow(3,sqrt(5*xd+7))/sqrt(xd+7))+(pow(3,sqrt(5*xh+7))/sqrt(xh+7)))/2;}
                    system("pause");
                    system("cls");
                    cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
			        cout<<"El valor de la suma de los intervalos "<<n<<" es: ";
					if(r>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<r<<endl;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<r<<endl;
				     SetConsoleTextAttribute(hConsole, 15);}
			        system("pause");
				    system("cls");
				    cout<<"Deseas usar el numero (";
				    if(r>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<r;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<r;
				     SetConsoleTextAttribute(hConsole, 15);}
				      cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				      if(opc4==1){
					    vlr=r;}}
				else{
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCalculo de una integral\n\n";
				cout<<"Digite el numero de intervalos: ";cin>>n;
				for (i=0; i<n; i++) {
                    xd= 1.0*i/n;
                    xh= 1.0*(i+1)/n;
                    r+=((pow(3,sqrt(5*xd+7))/sqrt(xd+7))+(pow(3,sqrt(5*xh+7))/sqrt(xh+7)))/2;}
                    system("cls");
                    cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
			        cout<<"El valor de la suma de los intervalos "<<n<<" es: ";
					if(r>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<r<<endl;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<r<<endl;
				     SetConsoleTextAttribute(hConsole, 15);}
			        system("pause");
				    system("cls");
				    cout<<"Deseas usar el numero (";
				    if(r>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<r;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<r;
				     SetConsoleTextAttribute(hConsole, 15);}
				      cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				      if(opc4==1){
					    vlr=r;}}
					r=0.0;n=0;break; 
					case 38:
						if(opc4==1){
						cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					cout<<"\t\tDecimal a Binario\n\n";
					cout<<"Se usara el numero(";
					if(vlr>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<vlr;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<vlr;
				     SetConsoleTextAttribute(hConsole, 15);}
					cout<<") como decimal a convertir\n";
					num=vlr;
					system("pause");
					system("cls");
					for (i=0;i<50;i++) { 
                    cadena[0].binario[i]=num%2; 
                     num/=2; 
                     if(num==0) 
                      break;} 
                      cout<<"En Binario es: ";
                      SetConsoleTextAttribute(hConsole, 2);
                        for(j=i;j>=0;j--) { 
						cout<<cadena[0].binario[j];
						}
						SetConsoleTextAttribute(hConsole, 15);
                         cout<<"\n\n";
                         system("pause");
				    system("cls");
				    cout<<"No podemos guardar este resultado para usarlo despues...\n\n";opc4=2;}
					else{
					cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					cout<<"\t\tDecimal a Binario\n\n";
					cout<<"Digita el numero en decimal a convertir: ";
					cin>>num;
					system("cls");
					for (i=0;i<50;i++) { 
                    cadena[0].binario[i]=num%2; 
                     num/=2; 
                     if(num==0) 
                      break;} 
                      cout<<"En Binario es: ";
                        SetConsoleTextAttribute(hConsole, 2);
						for(j=i;j>=0;j--) { 
						cout<<cadena[0].binario[j];
						}
						SetConsoleTextAttribute(hConsole, 15);
                         cout<<"\n\n";
                         system("pause");
				    system("cls");
				    cout<<"No podemos guardar este resultado para usarlo despues...\n\n";opc4=2;}
					break;
						case 39:
							if(opc4==1){
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"\t\tBinario a Decimal\n\n";
							cout<<"Se usara el numero (";
							if(vlr>=0){
			      	        SetConsoleTextAttribute(hConsole, 2);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);
				            }else{
				            SetConsoleTextAttribute(hConsole, 4);
				            cout<<vlr;
				            SetConsoleTextAttribute(hConsole, 15);}
							cout<<") como binario\n";
							r=vlr;
							system("pause");
							system("cls");
							while(((int)(r/10))!=0){
                            c= (int)r % 10;
                            w+=c * pow(2.0,i);
                            i++;
                            r=(int)(c/10);}
                             w+=r*pow(2.0,i);
                            system("cls");
							cout<<"El numero en decimal es: ";
							if(w>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<w<<"\n\n";
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<w<<"\n\n";
				     SetConsoleTextAttribute(hConsole, 15);}
				    system("pause");
				    system("cls");
				    cout<<"Deseas usar el numero (";
				    if(w>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<w;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				    cout<<w;
				    SetConsoleTextAttribute(hConsole, 15);}
				    cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				    if(opc4==1){
					vlr=w;}	}
					else{
					cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
					cout<<"\t\tBinario a Decimal\n\n";
					cout<<"Digite el numero en binario a convertir a decimal: ";cin>>r;
					while(((int)(r/10))!=0){
                    c= (int)r % 10;
                    w+=c * pow(2.0,i);
                    i++;
                    r=(int)(c/10);}
                    w+=r*pow(2.0,i);
                    system("cls");
					cout<<"El numero en decimal es: ";
					if(w>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<w<<"\n\n";
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<w<<"\n\n";
				     SetConsoleTextAttribute(hConsole, 15);}
				    system("pause");
				    system("cls");
				    cout<<"Deseas usar el numero (";
				    if(w>=0){
			      	SetConsoleTextAttribute(hConsole, 2);
				    cout<<w;
				    SetConsoleTextAttribute(hConsole, 15);
				    }else{
				    SetConsoleTextAttribute(hConsole, 4);
				     cout<<w;
				     SetConsoleTextAttribute(hConsole, 15);}
				      cout<<") en alguna otra operacion? \n1)Si\n2)No\nRespuesta: ";cin>>opc4;
				      if(opc4==1){
					    vlr=w;}}
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"Saliendo del sistema....."<<endl;
				SetConsoleTextAttribute(hConsole, 15);
				system("pause"); break;}}}
