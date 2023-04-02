#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int eleccion, Numero, year, precio, total, decision;
	float impuesto;
	char Name[40], genero[40], clasificacion[40], consola[20], caracteristicas[200], descripcion[500];

	cout << "\t ***Menu de opciones***" << endl;
	cout << "1)Alta articulo" << endl << "2)Modificacion de articulo" << endl << "3)Baja de articulo" << endl;
	cout << "4)Lista de Articulos" << endl << "5)Limpiar pantalla" << endl << "6)Salir" << endl;
	cin >> eleccion;

	switch (eleccion)
	{
	case 1:

		cout << "Numero del articulo" << endl;
		cin >> Numero;

		cout << "Nombre del videojuego" << endl;
		cin >> Name;

		cout << "Fecha de lanzamiento" << endl;
		cin >> year;

		cout << "Genero" << endl;
		cin >> genero;

		cout << "Clasificacion" << endl;
		cin >> clasificacion;

		cout << "Consola" << endl;
		cin >> consola;

		cout << "Caracteristicas" << endl;
		cin >> caracteristicas;

		cout << "Descripcion" << endl;
		cin >> descripcion;

		cout << "Precio" << endl;
		cin >> precio;

		cout << "impuesto (Decimales)" << endl;
		cin >> impuesto;

		total = precio * impuesto + precio;

		cout << "Precio final:" << total << endl;

		cout << "Desea regresar al menu de opciones indique" << endl << " 1 si y 2 para no" << endl;
		cin >> decision;
		if (decision == 1)
		{
			return main();
		}
		break;

	case 2: // "Modificacion del articulo"

		cout << "Desea regresar al menu de opciones indique" << endl << " 1 si y 2 para no" << endl;
		cin >> decision;
		if (decision == 1)
		{
			return main();
		}
		break;

	case 3: // baja de articulo


		cout << "Desea regresar al menu de opciones indique" << endl << " 1 si y 2 para no" << endl;
		cin >> decision;
		if (decision == 1)
		{
			return main();
		}
		break;

	case 4: // lista de articulos


		cout << "Desea regresar al menu de opciones indique" << endl << " 1 si y 2 para no" << endl;
		cin >> decision;
		if (decision == 1)
		{
			return main();
		}
		break;

	case 5: // limpiar pantalla
		system("cls");
		return main();
		break;

	case 6: // Salir

		exit(1);
		break;
	default: //En caso de qe no elija ninguna de las opciones anteriores se regrese

		break;
	}


	system("pause");
}
