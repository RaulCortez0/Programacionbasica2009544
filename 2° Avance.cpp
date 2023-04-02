#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

struct datos
{
	string nombre, genero, consola, clasificacion, caracteristicas, descripcion;
	int year, numero;
	float impuesto, precio, total;
};

datos Videojuego[3]; //estructura con arreglo para guardar los datos

int main()
{
	
		int decision;
	do
	{
		printf("\t ***MENU DE OPCIONES*** \n");
		printf("1.-Alta \n");
		printf("2.-Modificacion \n");
		printf("3-Baja \n");
		printf("4.-Lista \n");
		printf("5.-Limpiar Pantalla \n");
		printf("6.-Salir\n");
		scanf_s("%d", &decision);

		switch (decision)
		{
		case 1: //alta del articulo

			system("cls");
				printf("Dar de alta Articulo")
			//ciclo para la estructura con el arreglo
			for (int i = 0; i < 3; i++)
			{
				

				printf("Numero del articulo \n");
				scanf_s("%d", &Videojuego[i].numero);

				cin.ignore();

				printf("Nombre del Videojuego \n");
				getline(cin, Videojuego[i].nombre);

				printf("Fecha de lanzamiento \n");
				scanf_s("%d", &Videojuego[i].year);
				
				cin.ignore();

				printf("Genero \n");
				getline(cin, Videojuego[i].genero);

				cin.ignore();

				printf("Clasificacion \n");
				getline(cin, Videojuego[i].clasificacion);

				cin.ignore();

				printf("Consola \n");
				getline(cin, Videojuego[i].consola);

				cin.ignore();

				printf("caracteristicas \n");
				getline(cin, Videojuego[i].caracteristicas);

				cin.ignore();

				printf("Descripcion \n");
				getline(cin, Videojuego[i].descripcion);

				printf("Precio \n");
				scanf_s("%f", &Videojuego[i].precio);

				printf("Impuesto \n");
				scanf_s("%f", &Videojuego[i].impuesto);

				Videojuego[i].total = Videojuego[i].precio * Videojuego[i].impuesto + Videojuego[i].precio;

				/*el % .2f es para indicar la cantidad de decimales que quieres que aparezcan en este caso 
				son 2 pero se puede aumentar o disminuir a 1 si asi lo prefieres*/

				printf("El precio final es: %.2f \n", Videojuego[i].total);
			}
			// Nos permite regrasar al menu de opciones si ya se completó o termino el ciclo


			printf("Desea regresar al menu de opciones indique \n 1.- si y 2.- no");
			scanf_s("%d \n", &decision);

			if (decision == 1)
			{
				return main();
			}
			else
			{
				exit(1);
			}

			break;


		case 2: // "Modificacion del articulo"

			printf("Desea regresar al menu de opciones indique \n 1.- si y 2.- no");
			scanf_s("%d \n", &decision);

			if (decision == 1)
			{
				return main();
			}
			break;


		case 3: // baja de articulo

			system("cls");
			printf("Desea regresar al menu de opciones indique \n 1.- si y 2.- no");
			scanf_s("%d \n", &decision);

			if (decision == 1)
			{
				return main();
			}
			break;


		case 4: // lista de articulos

			system("cls");

			printf("Lista de Articulos \n")
			for (int i = 0; i < 3; i++)
			{
				printf("Numero de Articulo: %d \n", Videojuego[i].numero);

				printf("Nombre del Videojuego: %s \n", Videojuego[i].nombre.c_str());

				printf("Fecha de lanzamiento: %d \n", Videojuego[i].year);

				printf("Genero: %s \n", Videojuego[i].genero.c_str());

				printf("Clasificacion: %s \n", Videojuego[i].clasificacion.c_str());

				printf("Consola: %s \n", Videojuego[i].consola.c_str());

				printf("Caracteristicas: %s \n", Videojuego[i].caracteristicas.c_str());

				printf("Descripcion: %s \n", Videojuego[i].descripcion.c_str());

				printf("Precio: %.2f \n", Videojuego[i].precio);

				printf("Impuesto: %.2f \n", Videojuego[i].impuesto);

				printf("Precio final: %.2f \n\n", Videojuego[i].total);
			}

			printf("Desea regresar al menu de opciones indique \n 1.- si y 2.- no");
			scanf_s("%d \n", &decision);

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
		default: //En caso de que no elija ninguna de las opciones anteriores se regrese

			break;
		}
	} while (decision != 6);

	system("pause");
}