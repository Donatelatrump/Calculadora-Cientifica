#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>
#include<time.h>
using namespace std;
float xel=0,yel=0,aux=0,respuesta=0;
int num,num2,restl,expo,expo2,expo3,opc2=1;
int inicio,op=1,n,c,i=1,z;
char var;
main(){
	float x[n],r=0,y,w;
	
	
	

	
	
while(op>0 && op<=29){
	fflush(stdin);
system("cls");
cout<<"----------------------------------------------------------------------------------------------"<<endl;
cout<<endl<<"Bienvenido  a Nuestro Proyecto Final"<<endl<<endl;
fflush(stdin);
cout<<"              _____      _            _           _\n             / ____|    | |          | |         | |\n            | |     __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _ \n";
cout<<"            | |    / _` | |/ __| | | | |/ _` |/ _` |/ _ \\| '__/ _` |\n            | |___| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| |\n             \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__,_|\\___/|_|  \\__,_|\n\n\n";
		
        
		cout<<"\tOPERACIONES:\n";
		cout<<"\n1)Suma \n2)Resta \n3)Multiplicacion \n4)Division \n";
		cout<<"5)Raiz Cuadrada \n6)Raiz Cubica \n7)Raiz a la y \n8)x^2 \n";
	    cout<<"9)x^3 \n10)x^y \n11)10^x \n12)Logaritmo en base 10 \n";
		cout<<"13)Logaritmo Natural \n14)Funcion Exponencial e^x \n15)Seno \n16)Coseno \n";
		cout<<"17)Tangente \n18)Arcoseno \n19)Arcocoseno \n20)Arcotangente \n";
		cout<<"21)Factorial de x (x!) \n22)Porcentaje (%%) \n23)Numero Aleatorio \n24)X^-y \n25)Derivada de Constante \n26)Derivada de Variable ";
		cout<<"\n27)Derivada de un Exponecial \n28)Derivada de un Cociente \n29)Derivada de Funciones Trigonometricas \n";
		cout<<"[presione cualquier numero o letra para salir]"<<endl<<endl;
			cout<<"Eliga la operacion a realizar: ";
			cin>>op;
		system("cls");
		switch (op){
			case 1:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tSuma\n\n";
				cout<<"Escriba la cantidad de numeros a sumar: ";
				cin>>n;
				for(c=0;c<n;c++)
				{
					cout<<"Escriba el "<<i<< " numero a sumar: ";
					cin>>x[c];
					r+=x[c];
					i++;
				}
				cout<<"El resultado de la suma es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 2:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tResta\n\n";
				cout<<"Escriba la cantidad de numeros a restar: ";
				cin>>n;
				for(c=0;c<n;c++)
				{
					cout<<"Escriba el "<<i<<" numero a restar: ";
					cin>>x[c];
					i++;
				}
				r=x[0];
				for(c=1;c<n;c++)
				{
					r-=x[c];
				}
				cout<<"El resultado de la resta es: "<<r<<endl;	
				system("pause");
				system("cls");break;
			case 3:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tMultiplicacion\n\n";
				cout<<"Escriba la cantidad de numeros a multiplicar: ";
				cin>>n;
				r+=1;
				for(c=0;c<n;c++)
				{
					cout<<"Escriba el "<<i<<" numero a multiplicar: ";
					cin>>x[c];
					r*=x[c];
					i++;
				}
				cout<<"El resultado de la multiplicacion es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 4:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\tDivision\n\n";
				cout<<"Escriba la cantidad de numeros a dividir: ";
				cin>>n;
				for(c=0;c<n;c++)
				{
					cout<<"Escriba el "<<i<<" numero a dividir:";
					cin>>x[c];
					i++;
				}
				r=x[0];
				for(c=1;c<n;c++)
				{
					r/=x[c];
				}
				cout<<"El resultado de la division es: "<<r<<endl;	
				system("pause");
				system("cls");break;
			case 5:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cuadrada\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz cuadrada : ";
				cin>>n;
				r=pow(n,(double)1/2);
			     cout<<"\nLa raiz cuadrada de "<<n<<" es: "<<r<<endl;					
				system("pause");
				system("cls");break;
			case 6:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz Cubica\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz cubica : ";
				cin>>n;
				r=pow(n,(double)1/3);
				cout<<"\nLa raiz cubica de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 7:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tRaiz a la Y\n\n";
				cout<<"Escriba el numero al cual calcularle su raiz: ";
			    cin>>n;
				cout<<"Escriba la potencia de la raiz: ";
				cin>>y;
				r=pow(n,(double)1/y);
				cout<<"\nLa raiz a la "<<y<<" de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 8:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^2\n\n";
				printf("Escriba el numero al cual calcularle su cuadrado: ");
				cin>>n;
				r=pow(n,2);
				cout<<"\nEl cuadrado de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 9:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^3\n\n";
				cout<<"Escriba el numero al cual calcularle su cubo: ";
				cin>>n;
				r=pow(n,3);
				cout<<"\nEl cubo de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 10:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tX^Y\n\n";
				cout<<"Escriba el numero al cual calcularle potencia: ";
				cin>>n;
				cout<<"Escriba la potencia: ";
				cin>>y;
				r=pow(n,y);
				cout<<"\nLa potencia de "<<n<<" a la "<<y<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 11:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t10^X\n\n";
				cout<<"Escriba la potencia: ";
				cin>>n;
				r=pow(10,n);
				cout<<"\nLa potencia de 10 a la "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 12:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo en Base 10\n\n";
				cout<<"Escriba el numero a calcular el logaritmo en base 10: ";
				cin>>n;
				r=log10(n);
				cout<<"El logaritmo en base 10 de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 13:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tLogaritmo Natural\n\n";
				cout<<"Escriba el numero a calcular el logaritmo natural: ";
				cin>>n;
				r=log(n);
				cout<<"El logaritmo natural de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 14:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFuncion Exponencial e^x\n\n";
				cout<<"Escriba el numero a calcular su funcion potencial: ";
				cin>>n;
				r=exp(n);
				cout<<"La funcion potencial de "<<n<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 15:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tSeno\n\n";
				cout<<"Escriba el angulo en grados a calcular el seno: ";
				cin>>w;
				y=(w*M_PI)/180;
				r=sin(y);
				cout<<"El valor del seno del angulo de "<<w<<" grados es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 16:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tCoseno\n\n";
				cout<<"Escriba el angulo en grados a calcular el coseno: ";
				cin>>w;
				y=(w*M_PI)/180;
				r=cos(y);
				cout<<"El valor del coseno del angulo de "<<w<<" grados es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 17:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tTangente\n\n";
				cout<<"Escriba el angulo en grados a calcular la tangente: ";
				cin>>w;
				y=(w*M_PI)/180;
				r=tan(y);
				cout<<"El valor de la tangente del angulo de "<<w<<" grados es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 18:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcoseno\n\n";	
				cout<<"Escriba la cantidad para calcular el arcoseno: ";
				cin>>w;
				y=asin(w);
				r=(y/M_PI)*180;
				cout<<"El angulo de la cantidad  es: "<<r<< " grados"<<endl;
				system("pause");
				system("cls");break;
			case 19:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcocoseno\n\n";
				cout<<"Escriba la cantidad para calcular la arcocoseno: ";
				cin>>w;
				y=acos(w);
				r=(y/M_PI)*180;
				cout<<"El angulo de la cantidad es: "<<r<<" grados"<<endl;
				system("pause");
				system("cls");break;
			case 20:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tArcotangente\n\n";
				cout<<"Escriba la cantidad calcular el arcontangente: ";
				cin>>w;
				y=atan(w);
				r=(y/M_PI)*180;
				cout<<"El angulo de la cantidad es: "<<r<<" grados"<<endl;
				system("pause");
				system("cls");break;
			case 21:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tFactorial de X (X!)\n\n";
				cout<<"Escribe un numero: ";
				cin>>n;
				r+=1;
				for (c=1;c<=n;c++)
				{
					r*=c;
				}
				cout<<"El factorial de "<<n<<" es "<<r<<endl;
				system("pause");
				system("cls");break;
			case 22:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tPorcentaje (%)\n\n";
				cout<<"Escriba la cantidad a calcular el porcentaje: ";
				cin>>w;
				cout<<"Escriba el porcentaje a calcular: ";
				cin>>y;
				r=(w*y)/100;
				cout<<"El "<<y<<" % de "<<w<<" es: "<<r<<endl;
				system("pause");
				system("cls");break;
			case 23:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\tNumero Aleatorio del 1 al 100\n\n";
				srand (time(NULL));
				r=rand() % 101;
				cout<<r;
				system("pause");
				system("cls");break;
		 case 24:
		 	cout<<"----------------------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t X^-y \n\n";
				cout<<"Digite el valor para x: ";cin>>xel;
				cout<<"\nDigite el valor para (^-y): ";cin>>yel;
				if(xel==0){
					cout<<"No se puede utilizar el cero, vuelve a digita el valor para x: ";cin>>xel;
				}
				aux=(1 / xel);
				respuesta=pow (aux,yel);
				cout<<"La respuesta del numero "<<xel<<" elevado a la potencia -"<<yel<<" es: "<<respuesta<<endl;
				system("pause");
				system("cls");
				break;
			case 25:
				system("cls");
	            cout<<"Proporcione un numero entre el 1 al 10000"<<endl;cin>>num;
	                 if (num>0 || num<10000){
		                restl=num*0;
	                                }	
	                        cout<<"La derivada de "<<num<<" es "<<restl<<endl;
							system("pause");
							system("cls");
							break;
	
			case 26:
			
			cout<<"----------------------------------------------------------------------------------------------"<<endl;
	         cout<<"Proporcione un numero en el campo de los reales"<<endl;cin>>num;
	            cout<<"Proporcione la letra de la variable"<<endl;cin>>var;
	                      if (num>=0 || num<10000 || num<=0){
		                 restl=num;}
	            cout<<"La derivada de "<<num<<var<<" es "<<restl<<endl;
				system("pause");
				system("cls");break;	
			case 27:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
	      cout<<"Proporcione un numero entre los reales"<<endl;cin>>num;
	      cout<<"Proporcione la letra de la variable"<<endl;cin>>var;
	         cout<<"Proporcione el valor del exponente (enteros)"<<endl;cin>>expo;
	          if(expo>0 || expo<10000){
		         restl=num*expo;
		         expo2=expo-1;}
	              cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es "<<restl<<var<<"^"<<expo2<<endl;
	             system("pause");
	           system("cls");break;
			case 28:
			cout<<"----------------------------------------------------------------------------------------------"<<endl;
	              cout<<"Proporcione el numero entre los reales"<<endl;cin>>num;
	                  cout<<"Proporcione la letra de la variable"<<endl;cin>>var;
	                   cout<<"Proporcione el valor del exponencial (negativo): ";cin>>expo;
	                   cout<<endl;
	                       if(n<0 || n>-10000){
		                       num2=num*expo;
		                       expo3=expo-1;
		                       restl=num2;}
cout<<"La derivada de "<<num<<var<<"^"<<expo<<" es "<<restl<<"("<<num<<var<<")"<<"^"<<expo3<<endl;
system("pause");
system("cls");break;
			case 29:
				cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<"1) Seno"<<endl;cout<<"2) Coseno"<<endl;cout<<"3) Tangente"<<endl;
	cout<<"¿Qué funcion quieres derivar?"<<endl;cin>>opc2;
	switch (opc2){
		case 1:
			system("cls");
			cout<<"----------------------------------------------------------------------------------------------"<<endl;
                 	cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
                  	cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                cout<<"La derivada de la funcion Sen("<<num<<var<<") es "<<num<<"Cos("<<num<<var<<")"<<endl;break;
			case 2:
				system("cls");
			cout<<"----------------------------------------------------------------------------------------------"<<endl;
	              cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
	              cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	              restl=num*-1;
	                   cout<<"La derivada de la funcion de Cos("<<num<<var<<") es "<<restl<<"Sen("<<num<<var<<")"<<endl;break;
				case 3:
					system("cls");
						cout<<"----------------------------------------------------------------------------------------------"<<endl;
	                   cout<<"Proporciona el numero entre los reales"<<endl;cin>>num;
	                  cout<<"Proporciona la letra de la variable"<<endl;cin>>var;
	                   cout<<"La derivada de la funcion de Tan("<<num<<var<<") es "<<num<<"Sec("<<num<<var<<")^2"<<endl;break;
					   default:
		cout<<"Esta opcion no esta disponible....saliendo";break;				
	}
	system("pause");
	system("cls");break;
				
			default:
			cout<<"----------------------------------------------------------------------------------------------"<<endl;	
			cout<<"Saliendo del sistema....."<<endl;
			break;}}}



