#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>
#include<time.h>
#include<string.h>
using namespace std;
float xel=0,yel=0,aux=0,respuesta=0,x,y,r,ar,ag,m,xd,xh,sum2=0.0;
int num=0,num2,restl,expo,expo2,opc2=1,inicio,op=1,n,c,i=1,z,sum=0,numero[1000],a,b;
int resultado[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
char var;
double f,l,o,theta;
struct cadena{
float x;
int matriz[100][100];
char numero[1000];
}cadena[1000];
int main(){
setlocale(LC_ALL, "spanish");
float x[n],r=0,y,w,pi=3.141592653589793;
while(op>=1 && op<=37){
system("cls");
cout<<"----------------------------------------------------------------------------------------------"<<endl;
cout<<endl<<"\t\t     BIENVENIDO A NUESTRO PROYECTO FINAL"<<endl<<endl;
	cout<<"\t\t                      ___              ___         \n\t\t | |      | |        /   \\            /   \\       \n\t\t | |      | |       /  _  \\          /  _  \\      \n";
    cout<<"\t\t | |      | |      /  / \\  \\        /  / \\  \\     \n\t\t | |      | |     /  /___\\  \\      /  /___\\  \\    \n\t\t |  \\____/  |    /  /     \\  \\    /  /     \\  \\  \n";
    cout<<"\t\t  \\________/    /__/       \\__\\  /__/       \\__\\ \n\n"; 
    cout<<"              _____      _            _           _\n             / ____|    | |          | |         | |\n            | |     __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _ \n";
    cout<<"            | |    / _` | |/ __| | | | |/ _` |/ _` |/ _ \\| '__/ _` |\n            | |___| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| |\n             \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__,_|\\___/|_|  \\__,_|\n\n\n";
    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"              <<<<<<<<<<          OPERACIONES         >>>>>>>>>>";
    
    
		cout<<"\n1)Suma \n2)Resta \n3)Multiplicación \n4)División \n";
		cout<<"5)Raiz Cuadrada \n6)Raiz Cúbica \n7)Raiz a la y \n8)x^2 \n";
	    cout<<"9)x^3 \n10)x^y \n11)10^x \n12)Logaritmo en base 10 \n";
		cout<<"13)Logaritmo Natural \n14)Funcion Exponencial e^x \n15)Seno \n16)Coseno \n";
		cout<<"17)Tangente \n18)Arcoseno \n19)Arcocoseno \n20)Arcotangente \n";
		cout<<"21)Factorial de x (x!) \n22)Porcentaje (%%) \n23)Numero Aleatorio \n24)X^-y \n25)Derivada de Constante \n26)Derivada de Variable ";
		cout<<"\n27)Derivada de un Exponecial \n28)Derivada de un Cociente \n29)Derivada de Funciones Trigonométricas \n30)Matrices \n31)Radianes-Grados \n";
		cout<<"32)Invertir un numero o palabra \n33)Permutaciones \n34)Combinaciones \n35)Coordenadas polares a coordenadas rectangulares \n36)Cordenadas Rectangulares a coordenadas polares \n";
		cout<<"37)Calculo de una Integral \n";
			cout<<"      ---------------------------------------------------------------------\n\n";
		cout<<"[presione cualquier numero o letra para salir]"<<endl<<endl;
		cout<<"Eliga la operacion a realizar: ";cin>>op;
		system("cls");
		switch (op){
			case 1:
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
				cout<<"El resultado de la suma es: "<<r<<endl<<endl;
				r=0;
				system("pause");break;
			case 2:
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
				cout<<"El resultado de la resta es: "<<r<<endl<<endl;
				r=0;	
				system("pause");break;
			case 3:
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
				cout<<"El resultado de la multiplicación es: "<<r<<endl;
				r=0;
				system("pause");break;
			case 4:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tDivisión\n\n";
				cout<<"Escriba la cantidad de numeros a dividir: ";
				cin>>n;
				for(c=0;c<n;c++){
				  cout<<"Escriba el "<<c+1<<" numero a dividir:";
				  cin>>cadena[c].x;}
				r=cadena[0].x;
				for(c=1;c<n;c++){
				  r/=cadena[c].x;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El resultado de la división es: "<<r<<endl;	
				r=0;
				system("pause");break;
			case 5:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cuadrada\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz cuadrada : ";
				cin>>n;
				r=pow(n,(double)1/2);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
			    cout<<"\nLa raiz cuadrada de "<<n<<" es: "<<r<<endl;
				n=0;r=0;					
				system("pause");break;
			case 6:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cúbica\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz cubica : ";
				cin>>n;
				r=pow(n,(double)1/3);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa raiz cúbica de "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 7:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz a la Y\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz: ";
			    cin>>n;
				cout<<"Escriba la potencia de la raiz: ";
				cin>>y;
				r=pow(n,(double)1/y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa raiz a la "<<y<<" de "<<n<<" es: "<<r<<endl;
				y=0;n=0;r=0;
				system("pause");break;
			case 8:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^2\n\n";
				printf("Escriba el numero al cual calcularle su cuadrado: ");
				cin>>n;
				r=pow(n,2);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nEl cuadrado de "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 9:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^3\n\n";
				cout<<"Escriba el numero al cual calcularle su cubo: ";
				cin>>n;
				r=pow(n,3);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nEl cubo de "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 10:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^Y\n\n";
				cout<<"Escriba el numero al cual calcularle potencia: ";
				cin>>n;
				cout<<"Escriba la potencia: ";
				cin>>y;
				r=pow(n,y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa potencia de "<<n<<" a la "<<y<<" es: "<<r<<endl;
				n=0;y=0;r=0;
				system("pause");break;
			case 11:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t10^X\n\n";
				cout<<"Escriba la potencia: ";
				cin>>n;
				r=pow(10,n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\nLa potencia de 10 a la "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 12:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo en Base 10\n\n";
				cout<<"Escriba el numero a calcular el logaritmo en base 10: ";
				cin>>n;
				r=log10(n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El logaritmo en base 10 de "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 13:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo Natural\n\n";
				cout<<"Escriba el numero a calcular el logaritmo natural: ";
				cin>>n;
				r=log(n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El logaritmo natural de "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 14:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFunción Exponencial e^x\n\n";
				cout<<"Escriba el numero a calcular su funcion potencial: ";
				cin>>n;
				r=exp(n);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"La función potencial de "<<n<<" es: "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 15:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tSeno\n\n";
				cout<<"Escriba el ángulo en grados a calcular el seno: ";
				cin>>w;
				y=(w*pi)/180;
				r=sin(y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El valor del seno del ángulo de "<<w<<" grados es: "<<r<<endl;
				w=0;r=0;
				system("pause");break;
			case 16:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCoseno\n\n";
				cout<<"Escriba el ángulo en grados a calcular el coseno: ";
				cin>>w;
				y=(w*pi)/180;
				r=cos(y);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El valor del coseno del ángulo de "<<w<<" grados es: "<<r<<endl;
				w=0;r=0;
				system("pause");break;
			case 17:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tTangente\n\n";
				cout<<"Escriba el ángulo en grados a calcular la tangente: ";
				cin>>w;
				y=(w*pi)/180;
				r=tan(y);
				system("cls");
				 cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El valor de la tangente del ángulo de "<<w<<" grados es: "<<r<<endl<<endl;
				w=0;r=0;
				system("pause");break;
			case 18:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcoseno\n\n";	
				cout<<"Escriba la cantidad para calcular el arcoseno: ";
				cin>>w;
				y=asin(w);
				r=(y/pi)*180;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El ángulo de la cantidad  es: "<<r<< " grados"<<endl;
				w=0;r=0;
				system("pause");break;
			case 19:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcocoseno\n\n";
				cout<<"Escriba la cantidad para calcular la arcocoseno: ";
				cin>>w;
				y=acos(w);
				r=(y/pi)*180;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El ángulo de la cantidad es: "<<r<<" grados"<<endl;
				w=0;r=0;
				system("pause");break;
			case 20:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcotangente\n\n";
				cout<<"Escriba la cantidad calcular el arcontangente: ";
				cin>>w;
				y=atan(w);
				r=(y/pi)*180;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El ángulo de la cantidad es: "<<r<<" grados"<<endl;
				r=0;w=0;
				system("pause");break;
			case 21:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFactorial de X (X!)\n\n";
				cout<<"Escriba un numero: ";
				cin>>n;
				r+=1;
				for (c=1;c<=n;c++){
				r*=c;}
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El factorial de "<<n<<" es "<<r<<endl;
				n=0;r=0;
				system("pause");break;
			case 22:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tPorcentaje (%)\n\n";
				cout<<"Escriba la cantidad a calcular el porcentaje: ";
				cin>>w;
				cout<<"Escriba el porcentaje a calcular: ";
				cin>>y;
				r=(w*y)/100;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El "<<y<<" % de "<<w<<" es: "<<r<<endl;
				y=0;w=0;r=0;
				system("pause");break;
			case 23:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tNumero Aleatorio del 1 al n\n\n";
				cout<<"Escriba el maximo numero del que tomara un aletorio: ";cin>>n;
				srand (time(NULL));
				r=rand() % n;
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"El numero aletorio es: "<<r<<endl<<endl;
				n=0;r=0;
				system("pause");break;
		    case 24:
		 	    cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t X^-y \n\n";
				cout<<"Digite el valor para x: ";cin>>xel;
				cout<<"\nDigite el valor para (^-y): ";cin>>yel;
				if(xel==0){
				  cout<<"No se puede utilizar el cero, vuelve a digita el valor para x: ";cin>>xel;}
				aux=(1 / xel);
				respuesta=pow (aux,yel);
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"La respuesta del numero "<<xel<<" elevado a la potencia -"<<yel<<" es: "<<respuesta<<endl;
				xel=0;yel=0;aux=0;
				system("pause");break;
			case 25:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tDerivada de una Constante\n\n";
	            cout<<"Proporcione un numero entre el 1 al 10000"<<endl;cin>>num;
	            if (num>0 || num<10000){
		        restl=num*0;}	
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<" es "<<restl<<endl;
	            num=0;restl=0;
				system("pause");break;
	
			case 26:
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de una Variable\n\n";
	            cout<<"Proporcione un numero en el campo de los reales"<<endl;cin>>num;
	            cout<<"Proporcione la letra de la variable"<<endl;cin>>var;
	            if (num>=0 || num<10000 || num<=0){
		        restl=num;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<" es "<<restl<<endl;
	            num=0;restl=0;
			    system("pause");break;	
			case 27:
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada Exponencial \n\n";
	            cout<<"Proporcione un numero entre los reales"<<endl;cin>>num;
	            cout<<"Proporcione la letra de la variable"<<endl;cin>>var;
	            cout<<"Proporcione el valor del exponente (enteros)"<<endl;cin>>expo;
	            if(expo>0 || expo<10000){
		        restl=num*expo;
		        expo2=expo-1;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	            cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es "<<restl<<var<<"^"<<expo2<<endl;
	            num=0;expo=0;restl=0;expo2=0;
	            system("pause");break;
			case 28:
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\t\t Derivada de un Cociente \n\n";
	            cout<<"Proporcione el numero entre los reales"<<endl;cin>>num;
	            cout<<"Proporcione la letra de la variable"<<endl;cin>>var;
	            cout<<"Proporcione el valor del exponencial (negativo): ";cin>>expo;
	            cout<<endl;
	            if(n<0 || n>-10000){
		        num2=num*expo;
		        expo2=expo-1;
		        restl=num2;}
		        system("cls");
		        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es "<<restl<<"("<<num<<var<<")"<<"^"<<expo2<<endl;
                num=0;restl=0;expo=0;expo2=0;
                 system("pause");break;
			case 29:
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
	                         cout<<"La derivada de la funcion Sen("<<num<<var<<") es "<<num<<"Cos("<<num<<var<<")"<<endl;
							 num=0;
							 system("pause");break;
			           case 2:
			                cout<<"----------------------------------------------------------------------------------------------"<<endl;
		                   	cout<<"\t\tDerivar Coseno\n\n";
	                        cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
	                        cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                        restl=num*-1;
	                        system("cls");
	                        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                        cout<<"La derivada de la funcion de Cos("<<num<<var<<") es "<<restl<<"Sen("<<num<<var<<")"<<endl;
							num=0;restl=0;
							system("pause");break;
				       case 3:
						    cout<<"----------------------------------------------------------------------------------------------"<<endl;
						    cout<<"Derivar Tangente\n\n";
	                        cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
	                        cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                        system("cls");
	                        cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	                        cout<<"La derivada de la funcion de Tan("<<num<<var<<") es "<<num<<"Sec("<<num<<var<<")^2"<<endl;
							num=0;
							system("pause");break;
					  }break;
			case 30:
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
							cout<<"Ahora digite el numero de filas que tendra la matriz 2: ";cin>>z;
							system("cls");
							for(int i=0;i<z;i++){
								for(int j=0;j<c;j++){
									cout<<"Digite el valor para la fila "<<i+1<<" columna "<<j+1<<" : ";cin>>cadena[2].matriz[i][j];}}
							for(int i=0;i<n;i++){
							for(int j=0;j<z;j++){
									cadena[3].matriz[i][j]=cadena[1].matriz[i][j]+cadena[2].matriz[i][j];}}
							system("cls");
							cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
							cout<<"El resultado es: "<<endl<<endl;
							for(int i=0;i<n;i++){
							for(int j=0;j<z;j++){
							  cout<<"\t"<<cadena[3].matriz[i][j]<<"  ";	}
							  cout<<endl;}
							  n=0;c=0;z=0;
							system("pause");break;
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
					           for(int i=0;i<n;i++){
					           for(int j=0;j<c;j++){
					              cout<<cadena[0].matriz[i][j]<<"   ";}cout<<endl;}
					              n=0;c=0;z=0;
							system("pause");}break;
					
			case 31:
					cout<<"----------------------------------------------------------------------------------------------"<<endl;
					cout<<"\t\tRadianes-Grados\n\n";
					cout<<"1.Grados a radianes \n2.Radianes a grados \n\n(Digite cualquier numero que no este en este menu para volver al menu anterior) \n\n";
					cout<<"respuesta: ";cin>>opc2;
					system("cls");
						switch(opc2){
							case 1:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tGrados a radianes\n\n";
								cout<<"Digite el numero de grados a convertir : ";cin>>r;
								w=r*(pi/180);
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El angulo "<<r<<" en radianes es: "<<w<<endl;
								r=0;w=0;
								system("pause");break;
							case 2:	
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tRadianes a grados\n\n";
								cout<<"Digite el numero en radianes a convertir: ";cin>>r;
								w=r*(180/pi);
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El numero en radians "<<r<<" es en grados: "<<w<<endl;
								r=0;w=0;
								system("pause");}break;
			case 32:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tInvertir un numero o palabra \n\n ";
				fflush(stdin);
				cout<<"Digite el numero o palabra  a invertir: ";
				cin.getline(cadena[0].numero,1000,'\n');
				system("cls");
				cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
				cout<<"\n El numero o palabra  invertido es: "<<strrev(cadena[0].numero)<<endl;
			    system("pause");break;
			case 33:
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
								cout<<"La respuesta es: "<<respuesta<<endl<<endl;
								respuesta=0;n=0;c=0;num=0;sum=0;
								system("pause");break;
							case 2:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tP(n)=n!\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								system("cls");
								num=1;
								for(int i=1;i<=n;i++){
								 num*=i;}
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"El resultado es: "<<num<<endl<<endl;
								num=0;n=0;
								system("pause");break;
							case 3:
								cout<<"----------------------------------------------------------------------------------------------"<<endl;
								cout<<"\t\tPR(n,r)=n^r\n\n";
								cout<<"Digite el valor de n: ";cin>>n;
								cout<<endl<<"Digite el valor de r: ";cin>>c;
								system("cls");
								cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
								cout<<"La respuesta de PR("<<n<<","<<c<<") es: "<<pow(n,c)<<endl<<endl;
								n=0;c=0;
								system("pause");break;
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
								cout<<"La respuesta es: "<<respuesta<<endl<<endl;
								n=0;c=0;num=0;sum=0;respuesta=0;
								system("pause");}break;
			case 34:
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
							cout<<"La respuesta es: "<<respuesta<<endl<<endl;
							respuesta=0;n=0;c=0;b=0;a=0;
							system("pause");break;
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
							cout<<"La respuesta es: "<<respuesta<<endl<<endl;
							n=0;c=0;a=0;b=0;respuesta=0;
							system("pause");}break;
			case 35:
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
                cout<<"\n\tX= "<<m<<"   Y="<<y<<endl<<endl;
                m=0;y=0;ar=0;ag=0;r=0;
                system("pause");break;
            case 36:
                cout<<"----------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\tRectangular a Polar\n\n";
                cout<<"Coordenada X: ";cin>>f;
                cout<<"Coordenada Y: ";cin>>l;
                o=sqrt(pow(f,2)+pow(l,2));
                theta=atan(l/f);
                theta=theta*(180/pi);
                system("cls");
                cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
                cout<<endl<<"radio = "<<o<<"   Angulo theta = "<<theta<<" grados\n\n";
                theta=0;f=0;l=0;o=0;
				system("pause");break;
			case 37:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCalculo de una integral\n\n";
				cout<<"Digite el numero de intervalos: ";cin>>n;
				for (i=0; i<n; i++) {
                    xd= 1.0*i/n;
                    xh= 1.0*(i+1)/n;
                    sum2+=((pow(3,sqrt(5*xd+7))/sqrt(xd+7))+(pow(3,sqrt(5*xh+7))/sqrt(xh+7)))/2;}
                    system("cls");
                    cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
			        cout<<"El valor de la suma de los intervalos "<<n<<" es: "<<sum2<<endl<<endl;
			        sum2=0.0;n=0;
			        system("pause");break; 
			default:
			    cout<<"----------------------------------------------------------------------------------------------"<<endl;	
			    cout<<"Saliendo del sistema....."<<endl;system("pause"); break;}}}
