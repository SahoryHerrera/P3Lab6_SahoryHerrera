#include <iostream>
#include "CHAR.cpp"
#include "STRING.cpp"
#include "INTEGER.cpp"

using namespace std;

    STRING titulos;
    STRING palabra;
    STRING fin_linea;
    CHAR letra1;
    CHAR letra2;
    INTEGER x;
    INTEGER y;
    //fin_linea << "";


int menu();
int main(int argc, char** argv) {
	int op = menu();
	while(op != 4){
		switch(op){
			case 1:{
				int p;
				cout<<"+----------[Agregar Integer]-----------+"<<endl;
						cout<<"Ingrese un numero: ";
						cin>>x;
						cout<<"Ingrese un numero: ";
						cin>>y;
				cout<<"+--------------------------------------+"<<endl;
				cout<<endl;
				
				
				
				cout<<"+------------------ Menu---------------+"<<endl;
				cout<<"| Suma                             [1] |"<<endl;
				cout<<"| Resta                            [2] |"<<endl;
				cout<<"| Multiplicacion                   [3] |"<<endl;
				cout<<"| Division                         [4] |"<<endl;
				cout<<"+--------------------------------------+"<<endl;
				cout<<"Elija una opcion: "<<endl;
				cin>>p;
				switch(p){
					case 1:{
						titulos<<"+----------[Suma]-----------+";
						 !(x + y);
                         !fin_linea;
		
						break;
					}//fin case 1 
					
					case 2:{
						titulos<<"+----------[Resta]-----------+";
						!(x - y);
                        !fin_linea;
						
						break;
					}//fin case 2
					
					case 3:{
						titulos<<"+------[Multiplicacion]-----+";
						!(x * y);
                        !fin_linea;
						
						break;
					}
					case 4:{
						titulos<<"+----------[Suma]-----------+";
						!(x / y);
                        !fin_linea;
						break;
					}
					default: {
						cout<<"Opcion invalida"<< endl;
						break;
					}
				}
				break;

			}
					
			case 2:{
			titulos << "---------[Agregar Char]---------+ ";
  			!titulos;
  			letra1 << 'n';
            letra2 << 'w';
            titulos << "---------[Operacion Char]---------+ ";
            !(letra1 + letra2);
            !fin_linea;
            
            palabra << letra1 + letra2;

				
				break;
			}
			case 3: {
			titulos << "---------[Agregar Char]---------+ ";
  			!titulos;
  			letra1 << 'n';
            letra2 << 'w';
				
		    titulos << "palabra*5: ";
            !titulos;
            !(palabra * 5);
            !fin_linea;

            titulos << "Imprimir letra: ";
            !titulos;
            letra1 << letra2;
            !letra2;
				
				break;
			}

			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"********** Menu **********"<<endl;
	cout<<"* 1. Operacion Integer   *"<<endl;
	cout<<"* 2. Operacion Char      *"<<endl;
	cout<<"* 3. Operacion String    *"<<endl;
	cout<<"* 4. Salir               *"<<endl;
	cout<<"**************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}
