#include <iostream>
#include <cstdlib>

using namespace std;

//cabecera

void getFactorial();
void getTablaMulti();
void getParesSP();
void getDiaLaboralN();
void getContrasena();
	
main(){
	int op;
	
	do{
		system ("cls");
		cout<<"(1) Calcular la factorial de un numero "<<endl;
		cout<<"(2) Despliege de tabla de multiplicar "<<endl;
		cout<<"(3) Calcular pares, sumatoria y promedio de impar "<<endl;
		cout<<"(4) Dia laboral o no laboral "<<endl;
		cout<<"(5) Sistema bancario "<<endl;
		cout<<"(6) SALIR "<<endl;
		cout<<"seleccione su opcion: ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				cout<<"opcion 1"<<endl;
				getFactorial();
				system("pause");
			break;
			case 2:
				system("cls");
				cout<<"opcion 2"<<endl;
				getTablaMulti();
				system("pause");
			break;
			case 3:
				system("cls");
				cout<<"opcion 3"<<endl;
				getParesSP();
				system("pause");
			break;
			case 4:
				system("cls");
				cout<<"opcion 4"<<endl;
				getDiaLaboralN();
				system("pause");
			break;
			case 5:
				system("cls");
				cout<<"opcion 5"<<endl;	
				getContrasena();		
				system("pause");
			break;
			case 6:
				system("cls");
				cout<<"\n\n\tsaliendo :)";
            	break;
				system("pause");
			break;
			default:
				if(op<1 && op>6){
					cout<<"\n\terror algo malo sucedio :( "<<endl;
					system("pause");
				}
			break;
				
			
		}
	}while(op != 6); 
}

void getFactorial(){
 int i;
   int fact=1;
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   if(numero<0) fact =0;
   else if(numero==0) fact=1;
   else{
      for (i = 1; i <= numero; i++){
         fact = fact * i;
      }
   }
   cout<<"el factorial es: " <<fact;
   system("pause");
}
void getTablaMulti(){
	int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>1000));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	system("pause");
}


