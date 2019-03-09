/*ejercicio ejecutado en clase
solo se le agregaria el menu
keny lisbeth chavez torres
ct18009*/

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

class Pila {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void insertar(int x);
    int extraer();
    void imprimir();
    int cantidad();
    bool vacia();
};

Pila::Pila()        //nombre de la clase :: y el comportamiento
{
    raiz = NULL;    //raiz apunta a valor nulo
}
/*nuevo seccion de info = 10, nuevo -> info accedo a 10
nodo siguiente igual a NUlo 
2-- else valor de 4 crear nuevo*/
void Pila::insertar(int x)
{
    Nodo *nuevo;    //nodo auxiliar
    nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void Pila::imprimir()
{
    Nodo *reco = raiz;      //apuntamos a la raiz con un nuevo nodo llamado reco
    cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

int Pila::extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz->info;   //esta variable obtiene la inf de la raiz
        Nodo *bor = raiz;          //  bor apunta al valor de la raiz
        raiz = raiz->sig;         //la raiz toma el valor d e raiz siguiente
        delete bor;                   //elimina la antigua raiz que es 3
        return informacion;
    }
    else
    {
        return -1;
    }
}

Pila::~Pila()      //destructor de clase
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

int Pila::cantidad()            //toma la cantidad de datos ingresados
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

bool Pila::vacia()      //se retornara valores verdaderos si la pila esta vacia
{
    if (raiz == NULL)
        return true;
    else
        return false;
}
int main()
{
	
	int opcion ;
	int num ;
	int buscar ;
	Pila *pila1;
    pila1 = new Pila();
    do 
	{
	cout << "~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~"  << endl;
	cout <<"1-Insertar" << endl ;
	cout <<"2-Imprimir" << endl ;
	cout <<"3-Exportar" << endl ;
	cout <<"4-Buscar" << endl ;
	cout <<"5-Salir" << endl ;
	cin >> opcion ;
	
		 system ( "cls" ) ;      //limpiar
		switch (opcion)
		{
			case 1:
				//caso uno creado para el ingreso de datos a la pila
				
				char resp;
				do
				{
					cout << "Ingrese un dato numerico: " ;
					cin >> num ;  //llamada de variable
					pila1 -> insertar (num);  //llamada de pila a la que se le ingresara el dato anterior
					cout<<"Desea agregar otro dato? y/n"<<endl;
					cin>>resp;       //llamada de variable
					system ( "cls" ) ;      //limpiar	
				}while (resp == 'y' || resp == 'Y');
				
				system ("cls");      //limpiar
				break ;
				
			case 2:   
				//caso para imprimir datos
				system ( "cls" ) ;      //limpiar
				pila1->imprimir ();  //dato que se ingreso se almacena en esta pila
				system ("pause");
				system ( "cls" ) ;      //limpiar
				break;
				
			case 3 :
				//caso 3 extraer pila
		 		cout << "La cantidad de nodos de la pila es:" << pila1->cantidad() << "\n";    //se marca la cantidad de datos que se agregaron
		 		//se hace un while en el que entrara mientras la pila
		 		//este vacia
     			while (pila1->vacia() == false) 
    			{
     			   cout << "Extraemos de la pila:" << pila1->extraer() << "\n";
		 		}
			  	delete pila1;   //borrar dato
				system ("pause");
				system ( "cls" ) ;      //limpiar
			  	break ;
		  	case 4:
				//caso de busqueda
				  cout << "Dato que desea buscar: " ;
				  cin >> buscar    ;
					  /*si la busqueda es distinto
					  al numero ingresado en el primer caso
					  no eciste dato*/
					if (buscar != num )
					{
						cout << "No existe ese dato" << endl ;

					}
					else
					//sino se muestra el dato almacenado en la pila insertar
					{
						cout <<"Su dato es: " << num << endl;
						pila1->insertar (num);
					}
				system ("pause");
				system ( "cls" ) ;      //limpiar
			case 5:
				return 0;
				break ;
				
					
				break ;
				
		}
	}while (opcion != 0 );
	
    cin.get();
}
