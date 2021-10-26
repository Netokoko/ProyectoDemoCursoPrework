#include <cstdlib>
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
int SolicitarNumero (string nombre){
	int x;
	cout<<"Ingresa el " << nombre << endl;
	cin>>x;
	return x;
}
float SolicitarNumeroFloat (string nombre){
	float x;
	cout<<"Ingresa el " << nombre << endl;
	cin>>x;
	return x;
}

void division (){
	float OpcionDivision,x,y,count;
	system("cls");
	do{count=0;
		cout<<"Division"<<endl;
			x = SolicitarNumeroFloat("Primer Numero: ");
			y = SolicitarNumeroFloat("Segundo Numero: ");
			cout << "La Division es: "<< x/y <<endl;
			cout<<endl;
			cout<<"Desea Ingresar una nueva operacion?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getwchar();	
	}while(count==0);
}
void multiplicacion (){
	float OpcionMultiplicacion,x,y,count;
	system("cls");
	do{	count=0;
		cout<<"Multiplicacion"<<endl;
			x = SolicitarNumeroFloat("Primer Numero: ");
			y = SolicitarNumeroFloat("Segundo Numero: ");
			cout << "La Multiplicacion es: "<< x*y <<endl;
			cout<<"Desea Ingresar una nueva operacion?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getwchar();
	}while(count==0);
}
void resta (){
	float OpcionResta, x, y, count;
	system("cls");
	do{	count=0;
		cout<<"Resta"<<endl;
			x = SolicitarNumero("Primer Numero: ");
			y = SolicitarNumero("Segundo Numero: ");
			cout << "La Resta es: "<< x-y <<endl;
			cout<<"Desea Ingresar una nueva operacion?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getwchar();
	}while(count==0);
}
void suma (){
	int OpcionSuma, x, y, count;
	system("cls");
	do{	count=0;
		cout<<"Suma"<<endl;
			x = SolicitarNumero("Primer Numero: ");
			y = SolicitarNumero("Segundo Numero: ");
			cout<<"La suma es: "<< x + y <<endl;
			cout<<endl;
			cout<<"Desea Ingresar una nueva operacion?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getwchar();
	}while(count==0);
}
void OpcionOperacionesBasicas (){
	int opcionOperacionesBasicas;
	do{	
		system("cls");				
		cout<<"Menu Operaciones Basicas"<<endl;
		cout<< "1.- Suma"<<endl;
		cout<< "2.- Resta"<<endl;
		cout<< "3.- Multiplicacion"<<endl;
		cout<< "4.- Division"<<endl;
		cout<< "5.- Regresar"<<endl;
		cout<< "Ingresar Opcion"<<endl;
		cin>> opcionOperacionesBasicas;
		switch (opcionOperacionesBasicas){
					int x, y;
		system("cls");
			case 1:					
				suma();
				break;
		system("cls");
			case 2:								
				resta();				
				break;
		system("cls");
			case 3:							
				multiplicacion();
				break;
		system("cls");
			case 4:							
				division();	
				break;
		system("cls");
			case 5:							
				cout<<"Regresar"<<endl;
				while (opcionOperacionesBasicas !=5);
				getwchar();		
				break;
		}
		system("cls");
	}while(opcionOperacionesBasicas!=5);
}

void Cuadratica (){
	float Opcioncuadratica, count;
	float a, b, c;
	float x1, x2;
	system("cls");
	do{	count=0;
		cout<<"Operacion Cuadratica"<<endl;
			a = SolicitarNumero("Introduce A ");
			b = SolicitarNumero("Introduce B ");
			c = SolicitarNumero("Introduce C ");
				if (a!=0){
					x1=(+b+sqrt(b*b-4*a*c))/(2*a);
					x2=(-b-sqrt(b*b-4*a*c))/(2*a);
				}
			cout<<"Las raices son: " << "\n" << "X1: " <<x1 << "\n" << "X2: " << x2 <<endl;
			cout<<endl;
			cout<<"Desea Ingresar una nueva operacion?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getwchar();
	}while(count==0);
}

void Potencia (){
	double OpcionPotencia, x=0,y=2, result=0, count;
	system("cls");
	do{	count=0;
		cout<<"Potencia"<<endl;
		x = 0;
		y = 0;
		cout<<"Ingresa el numero a elevar: ";
		cin>>x;
		cout<<"Ingresa la potencia: ";
		cin>>y;
		result = pow(x,y);
		cout<<"La potencia al cuadrado es: " << result ;
		cout<<endl;
			cout<<"Desea Ingresar una nueva operacion?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getchar();
	}while(count==0);
}

void Raiz (){
	float OpcionRaiz, x=0, y=2, result =0,count;
	system("cls");
	do{	count=0;
		cout<<"Raiz cuadrada"<<endl;
		x=0;
		y=0;
		cout<<"Ingresa el numero: ";
		cin>>x;
		cout<<"Ingresa el numero de Raiz: ";
		cin>>y;
		result = pow(x,1/y);
		cout<<"La raiz es: " << result ;
			cout<<endl;
			cout<<"Desea Ingresar una nueva suma?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			getwchar();
	}while(count==0);
}

void Fibonacci (){
	
			cout<<"Fibonacci"<<endl;
			cout<<endl;
			cout<<"Desea Ingresar una nueva suma?, Presione 0 para ingresar nueva operacion, Presione 1 para finalizar ";
			cin>>count;
			system("cls");
			system("pause");
			getwchar();
	}while(count==0);
}

void OpcionOperacionesComplejas (){
	int opcionOperacionesComplejas;
	do{	
		system("cls");				
		cout<<"Menu Operaciones Complejas" <<endl;
		cout<< "1.- Cuadraticas"<<endl;
		cout<< "2.- Potencias"<<endl;
		cout<< "3.- Raiz"<<endl;
		cout<< "4.- Fibonacci"<<endl;
		cout<< "5.- Regresar"<<endl;
		cout<< "Ingresar Opcion"<<endl;
		cin>> opcionOperacionesComplejas;
		switch (opcionOperacionesComplejas){
					float x, y;
		system("cls");
			case 1:					
				Cuadratica();
				break;
		system("cls");
			case 2:								
				Potencia();				
				break;
		system("cls");
			case 3:							
				Raiz();
				break;
		system("cls");
			case 4:							
				Fibonacci();	
				break;
		system("cls");
			case 5:							
				cout<<"Regresar"<<endl;
				while (opcionOperacionesComplejas !=5);
				getwchar();		
				break;
		}
		system("cls");
	}while(opcionOperacionesComplejas!=5);
}

int main(){
	int opcion=0;
	do {		
		system("cls");
		cout<<"Menu Principal"<<endl;
		cout<<"1.- Operaciones Basicas"<<endl;
		cout<<"2.- Operaciones Complejas"<<endl;
		cout<<"3.- Extra"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<"Ingresar Opcion"<<endl;
		cin >> opcion;
		system("cls");
		switch (opcion){	
		system("cls");
		case 1:
			OpcionOperacionesBasicas();
			break;
		system("cls");		
		case 2:
			OpcionOperacionesComplejas();
			break;
		system("cls");	
		case 3:
			int Menuextra;
			cout<<"Menu Extra"<<endl;
			break;
		system("cls");	
		case 4:
			cout<<"Saliendo..."<<endl;
			break;
		}
				
		}while(opcion !=4);
	
	
	system ("pause");	
	return 0;
	}
	

