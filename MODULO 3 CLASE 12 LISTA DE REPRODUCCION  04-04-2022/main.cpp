#include "Lista.h"

int main(){
    Lista* lista = new Lista();
	int opcion_menu=0;
	do
	{
		cout<<"-----Reproduciendo------"<<endl;
		if(lista->count!=0)
			lista->actual->Mostrar();
		else
			cout<<"No hay informacion disponible"<<endl;
		cout<<"-----Cola de reproduccion------"<<endl;
		lista->ImprimirLista();

		cout << "\n|-------------------------------------|";
		cout << "\n|        LISTA CIRCULAR DOBLE         |";
		cout << "\n|------------------|------------------|";
		cout << "\n|1.Agregar cancion |5.Eliminar primera|";
		cout << "\n|2.Siguiente       |6.Eliminar ultima |";
		cout << "\n|3.Anterior        |7.Editar cancion  |";
		cout << "\n|4.Eliminar actual |8.Invertir lista  |";
		cout << "\n|9.Salir           |                  |";
		cout << "\n|------------------|------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu){
		case 1:
			cout << "\n\n AGREGA CANCON A LA LISTA \n\n";
			lista->Agregar();
			break;
		case 2:
			cout << "\n\n SIGUIENTE CANCION\n\n";
			lista->Siguiente();
			break;
		case 3:
			cout << "\n\n CANCION ANTERIOR \n\n";
            lista->Anterior();
			break;
		case 4:
			cout << "\n\n ELIMINAR CANCION ACTUAL \n\n";
            lista->EliminarActual();
			break;
		case 5: 
			cout << "\n\n ELIMINAR PRIMERA CANCION \n\n";
			lista->EliminarPrimero();
			break;
		case 6:
			cout<<"\n\n ELIMINAR ULTIMA CANCION \n\n";
			lista->EliminarUltimo();
		case 7:
			cout << "\n\n EDITAR CANCION \n\n";
			lista->EditarCancion();
			break;
		case 8:
			cout << "\n\n INVERTIR LISTA \n\n";
			//lista->InvertirLista();
			break;
		case 9:
			cout<<"\n\n SALIENDO \n\n";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
			break;
		}
	} while (opcion_menu != 9);
	
	return 0;
}