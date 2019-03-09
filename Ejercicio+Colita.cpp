/*keny lisbeth chavez torres
ct18009*/

#include <iostream>
#include <windows.h>
#include <queue>
#include  <conio.h>  
#include <string.h>
using namespace std;
/*creo una estructura
con los datos necesario
 de nuestro programa*/
struct dato 
{
	string tick;   //tickets
	int cuenta ;    //numero de cuenta
	int edad ;      //edad
};


int main ()
{
	queue<dato> cola ;     //declaramos nuestra cola
	dato a ;           //auxiliar de nuestra estructura
	dato *puntero ;     //puntero

	int opcion ;        //opcion de menu
	char resp ;         //opcion de repetir
	/*este do while, nos permitira
	retornar al menu*/
	do 
	{
			system ("color a9" ) ; //color
		cout << "**************MENU**************"<< endl ;
		cout <<"1-Almacenar" << endl ;
		cout <<"2-Eliminar" << endl ;
		cout <<"3-Mostrar" << endl ;
		cout << "4-Salir" << endl ;
		cin >> opcion ;   //lectura de varibale
	
		//menu
		system ( "cls" ) ;      //limpiar
		switch (opcion)	
		{   
			//caso uno  (ingreso de datos)
			case 1:
				system ("color b5" ) ; //color
				/*do while creado por si desea 
				seguir agregando*/
				 do 
				 {
					cout <<"Ingrese numero de tickets: "  ;
					cin >> a.tick ;  //llamada de structura
				
					/*if creado para uqe no permita
					el ingreso de mas de 4 numeros
					ni menos*/
					if   (a.tick.size () !=4 )  //si es mayor o menor a cero volvera a pedir numero
					{
						cout << "El numero de digitos tiene que ser de 4" << endl ;
						cout << "Intente nuevamente: " ;
						cin >> a.tick ; //llamada de structura
					}
		
					cout << "Ingrese numero de cuenta: " ;
					cin >> a.cuenta ;   //llamada de structura
					cout << "Ingrese edad: " ;
					cin>> a.edad;       //llamada de structura
					cola.push (a) ;//muestra de cola
						
					cout<<"Desesa agregar otro nodo? y/n"<<endl;
					cin>>resp;       //llamada de variable
					system ( "cls" ) ;      //limpiar	
				
				}while (resp == 'y' || resp == 'Y');			
				system ("cls");
		
				break;
				
				//caso dos (eliminar)
				case 2 :
				
				 	system ("color 0e" ) ; //color	
			  		cola.pop ();    //eliminar cola anterior
	 				// punt = &pila_alumno.top();
		  			cout << "Eliminado con exito!!!" << endl ;
		  			system ("pause"); //pausa
				 	system ("cls") ; //limpiar 
				 	break;
				 	
				//caso tres (mostrar)
			 	case 3 :
					//aqui se muestran las colas disponibles
					system ("color 70" ) ; //color
					system ( "cls" ) ;      //limpiar
					cout << endl;
					/*creaos una condicional
					si la cola esta vacia */
					if(cola.empty() == true)
					{
					//si no tiene datos va a entrar aqui y dira esto
					cout<<"La lista esta vacia..."<<endl;
					}
					/*sino
					nos moestrara en orden los datos
					almacenados*/
					else
					{
						puntero = &cola.front();//primero hacemos que un puntero apunte al primer dato de la cola
						
						for(int i=1; i<=cola.size(); i++)     //se crea para que automaticamene nos de el numero de dato
						{
							a = *puntero;     //igualamos aux que es nuestra variable que maneja la pila, a el puntero
							cout<<"Dato #"<<i<<endl;
							cout << a.tick << endl;    
	 						cout << a.cuenta << endl ;
							cout << a.edad << endl;
							cout << "===============" << endl ;
							puntero ++ ;         //aumenta
						}
					}
					
					system ( "pause");   //pausa
					system ( "cls" ) ;      //limpiar
					
				break ;
				
				//caso cuatro (salir)
				case 4 :
					return 0;
					break;
		}
		
	}while (opcion != 0 ) ;
	return 0;	
}
