#include <iostream>
#include "CHAR.cpp"
#include "STRING.cpp"
#include "INTEGER.cpp"

//using namespace std;

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
					titulos<<"+----------[Agregar Integer]-----------+";
					!titulos;
						titulos<<"Ingrese un numero: ";
						!titulos;
						x<<x;
						titulos<<"Ingrese un numero: ";
						!titulos;
						y<<y;
				titulos<<"+--------------------------------------+";
			   !titulos;
			
				
				
				
				titulos<<"+------------------ Menu---------------+";
				!titulos;
				titulos<<"| Suma                             [1] |";
				!titulos;
				titulos<<"| Resta                            [2] |";
				!titulos;
				titulos<<"| Multiplicacion                   [3] |";
			    !titulos;
				titulos<<"| Division                         [4] |";
				!titulos;
				titulos<<"+--------------------------------------+";
				!titulos;
				titulos<<"Elija una opcion: ";
				!titulos;
				p<<p;
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
  			letra1 << 's';
            letra2 << 'p';
            titulos << "---------[Operacion Char]---------+ ";
            !(letra1 + letra2);
            !fin_linea;
            
            palabra << letra1 + letra2;

				
				break;
			}
			case 3: {
			titulos << "---------[Agregar Char]---------+ ";
  			!titulos;
  			letra1 << 's';
            letra2 << 'p';
				
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
				titulos<<"Opcion invalida";
			    !titulos;
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
	titulos<<"+-----------Menu---------+";
	!titulos;
	titulos<<"| 1. Operacion Integer   |";
	!titulos;
	titulos<<"| 2. Operacion Char      |";
	!titulos;
	titulos<<"| 3. Operacion String    |";
	!titulos;
	titulos<<"| 4. Salir               |";
	!titulos;
	titulos<<"+------------------------+";
	!titulos;
	titulos<<"Elija una opcion: ";
	!titulos;
	opcion << opcion;
	return opcion;
}
