/*keny lisbeth chavez torres
ct18009*/
#include <iostream>
#include <stack>
#include <windows.h>

using namespace std ;

/*estructura creada para la 
un tipo de dato alumno*/
struct alumno 
{
	char due [7] ;  
	char nombre [30] ;   
	char apellido [30] ;
	int edad ;
};

//Cuerpo del programa
int main ()           
{
	
	stack <alumno> pila_alumno ; //creacion de pilapara el tipo de dato alumno
	int opcion ; //opcion del menu
	alumno a ;      //variable para el tipo de dato creada
	alumno *punt ;   //puntero
	char resp ;  
		do 
	/*do while creado por si se ingresa
	una opcion del menu no registrada*/
	{ 
	/*Creamos un menu para la distintas 
	funciones de nuestro programa*/
	
	system ("color a9" ) ; //color
	cout << "*****///Menu///*****" << endl ;
	cout << "1-Agregar alumno" << endl ;
	cout << "2-Eliminar alumno" << endl ;
	cout << "3-Mostrar alumno" << endl ;
	cout << "4-Salir" << endl ;
	cin >> opcion ;    //lectura de variable
	
	
			system ( "cls" ) ;      //limpiar
		/*creacion para las funciones del menu*/
		switch (opcion)
		{  
			 /*el caso uno sera para agregar el alumno*/
			case 1 :
				system ("color b5" ) ; //color
				do 
				/*do while creado por si el usuario
				si desea crear otro nodo*/
				{   
					 
					cout << endl << "Due del alumno: " ;
					cin >> a.due ;      //lectura de variable
					cout << endl << "Nombre del alumno: " ;	
					cin >> a.nombre ;     //lectura de variable
					cout << endl << "Apellido del alumno: " ;	
					cin >> a.apellido ;   //lectura de variable
					cout << endl << "Edad del alumno: " ;	
					cin >> a.edad ;   //lectura de variable 
					
					pila_alumno.push(a);
					punt = &pila_alumno.top();
					
					/*se crea una nueva variable para saber
					si el usuario deesea seguir agregando
					mas nodos (alumnos)*/
					
					cout<<"Desesa agregar otro nodo? y/n"<<endl;
					cin>>resp;
					system ( "cls" ) ;      //limpiar	
				}while(resp == 'y' || resp == 'Y');    
					system ( "cls" ) ;      //limpiar
				
				break ;
				
				 /*el caso dos sera para eliminar el alumno*/
				case 2 :
			      system ("color 0e" ) ; //color	
				  pila_alumno.pop ();
				  punt = &pila_alumno.top();
				  cout << "Eliminado con exito!!!" << endl ;
				  system ("pause"); //pausa
				  system ("cls") ; //limpiar
				  
				  break ;
		  		 /*el caso tres sera para mostrar el alumno*/
		  		case 3 :
					system ("color 70" ) ; //color
					/*se crea un for para la muestra continua
					de los datos almacenados o el numero
					de nodos almacenados*/
					system ( "cls" ) ;      //limpiar
		 		  for ( int i = 1 ; i <= pila_alumno.size() ; i ++  )
		 		  {
						a = *punt ;
						cout << a.due << endl ;
						cout << a.nombre << endl ;
						cout << a.apellido << endl ;
						cout << a.edad << endl ;
						cout << "=================" << endl ;
						punt -- ;
				  }
				  punt = &pila_alumno.top();
  				 	  system ( "pause" ) ; //pause
					  system ( "cls" ) ;      //limpiar
					  
				  break ;
				  
				  /*caso cuatro sera para salir del menu*/
				case 4 :
		  		    system ("color f4" ) ; //color
					cout << "Gracias por su visita!!!!!!" << endl ;
					system ( "pause" ) ; //pause
					return 0 ;
					
					break ;	
				  
		}
	} while (opcion != 0 ) ;
	
	system ("pause");
	return 0 ;
}
		
