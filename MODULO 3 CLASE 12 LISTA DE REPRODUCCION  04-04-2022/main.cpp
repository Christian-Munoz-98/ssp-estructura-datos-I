#include "Lista.h"

int main(){
    Lista* lista = new Lista();
	int opcion_menu=0;
	do
	{
		system("cls");
		cout<<"-----Reproduciendo------"<<endl;
		if(lista->count!=0)
			lista->actual->Mostrar();
		else
			cout<<"\nNo hay canciones disponibles\n";

		cout << "\n|-------------------------------------|";
		cout << "\n|        LISTA CIRCULAR DOBLE         |";
		cout << "\n|------------------|------------------|";
		cout << "\n|1.Agregar cancion |5.Eliminar primera|";
		cout << "\n|2.Siguiente       |6.Eliminar ultima |";
		cout << "\n|3.Anterior        |7.Editar cancion  |";
		cout << "\n|4.Eliminar actual |8.Invertir lista  |";
		cout << "\n|9.Mostrar lista   |10.Salir          |";
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
			system("pause");
			break;
		case 3:
			cout << "\n\n CANCION ANTERIOR \n\n";
            lista->Anterior();
			system("pause");
			break;
		case 4:
			cout << "\n\n ELIMINAR CANCION ACTUAL \n\n";
            lista->EliminarActual();
			system("pause");
			break;
		case 5: 
			cout << "\n\n ELIMINAR PRIMERA CANCION \n\n";
			lista->EliminarPrimero();
			system("pause");
			break;
		case 6:
			cout<<"\n\n ELIMINAR ULTIMA CANCION \n\n";
			lista->EliminarUltimo();
			system("pause");
			break;
		case 7:
			cout << "\n\n EDITAR CANCION \n\n";
			lista->EditarCancion();
			system("pause");
			break;
		case 8:
			cout << "\n\n INVERTIR LISTA \n\n";
			lista->InvertirLista();
			system("pause");
			break;
		case 9:
			cout<<"\n\n COLA DE REPRODUCCION \n\n";
			lista->ImprimirLista();
			system("pause");
			break;
		case 10:
			cout<<"\n\n SALIENDO... \n\n";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
			system("pause");
			break;
		}
	} while (opcion_menu != 10);
	
	return 0;
}