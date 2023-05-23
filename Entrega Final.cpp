#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>
#include <fstream>
#include<stdlib.h>// funcione new y delete
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

struct datos
{
	string nombre, genero, consola, clasificacion, caracteristicas, descripcion, status;
	int year, numero;
	float impuesto, precio, total;
};

string nombreBusqueda;

int Alta1;

datos* Videojuego; //estructura con puntero para guardar los datos

void alta();
void modificacion();
void baja();
void lista();
void salir();

int main()
{
	int decision;

	printf("\t\t\t\t\t %c %c %c %c %c MEN%c DE OPCIONES %c %c %c %c %c  \n", 01, 31, 02, 31, 01, 233, 02, 31, 01, 31, 02);
	printf("%c 1.-Alta %c \n", 16, 17);
	printf("%c 2.-Modificaci%cn %c\n", 16, 162, 17);
	printf("%c 3.-Baja %c\n", 16, 17);
	printf("%c 4.-Lista %c\n", 16, 17);
	printf("%c 5.-Limpiar Pantalla %c\n", 16, 17);
	printf("%c 6.-Salir %c\n", 16, 17);
	scanf_s("%d", &decision);

	switch (decision)
	{
	case 1:

		alta();
		return main();
		break;

	case 2:

		modificacion();
		return main();
		break;


	case 3:
		baja();
		return main();
		break;
	case 4:

		lista();
		return main();
	case 5:

		system("cls");
		return main();
		break;

	case 6:

		salir();

		exit(1);
		break;

	default:

		break;
	}

	system("pause");
}

void alta()
{
	printf("Digite el n%cmero de registros que desea dar de alta\n", 163);
	scanf_s("%d", &Alta1);

	Videojuego = new datos[Alta1];

	//ciclo para la estructura con el arreglo
	for (int i = 0; i < Alta1; i++)
	{
		printf("Ingrese N%cmero del art%cculo: \n", 163, 161); //printf
		scanf_s("%d", &Videojuego[i].numero); //scanf %d

		while (getchar() != '\n');  //se vacia el buffer o el espacio o cin.ignore

		printf("Ingrese nombre del videojuego: \n");
		getline(cin, Videojuego[i].nombre); //permite los espacios en el nombre

		printf("Ingrese A%co de lanzamiento:\n", 164);
		scanf_s("%d", &Videojuego[i].year);

		while (getchar() != '\n');
		printf("Ingrese g%cnero: \n", 130); // 130 en codigo ascci es la é
		getline(cin, Videojuego[i].genero);

		printf("Ingrese Clasificaci%cn: \n", 162); // 162 es en codigo ascci la ó 
		getline(cin, Videojuego[i].clasificacion);

		printf("Ingrese consola: \n");
		getline(cin, Videojuego[i].consola);

		printf("Ingrese caracter%csticas: \n", 161);
		getline(cin, Videojuego[i].caracteristicas);

		printf("Ingrese descripci%cn: \n", 162);
		getline(cin, Videojuego[i].descripcion);

		printf("Ingrese precio unitario: \n");
		scanf_s("%f", &Videojuego[i].precio);

		Videojuego[i].total = Videojuego[i].precio + (Videojuego[i].precio *.16);
	}
}


void modificacion()
{
	int j, opcion, op2;
	do
	{
		printf("ingrese el numero registro a modificar \n");
		scanf_s("%d", &j);
		j = j - 1; // esto debido a que i inicia en 0

		for (int i = j; i == j; i++)
		{
			if ((Videojuego[i].status == "ELIMINADO"))
			{
				printf("REGISTRO ELIMINADO %d \n", i + 1);
				printf("ingrese un registro valido \n");
				op2 = 1;
			}
			else
			{
				op2 = 2;
			}
		}
	} while (op2 == 1);
	printf("ingrese que desea modificar 1.-Nombre, 2.-Clasificaci%cn, 3.- descripci%cn, 4.- G%cnero, 5.- Consola, 6.- caracter%cstica, 7.-Precio, 8.-impuesto, 9.- numero de art%cculo \n", 162, 162, 130, 161, 161);
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese Nombre del videojuego \n");
			getline(cin, Videojuego[i].nombre);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n'); //se vacia el buffer o el espacio
			printf("Ingrese clasificaci%cn \n", 162);
			getline(cin, Videojuego[i].clasificacion);
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese descripci%cn \n", 162);
			getline(cin, Videojuego[i].descripcion);
		}
		break;
	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese g%cnero\n", 130);
			getline(cin, Videojuego[i].genero);
		}
		break;
	case 5:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese consola \n");
			getline(cin, Videojuego[i].consola);
		}
		break;
	case 6:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese caracter%csticas \n", 161);
			getline(cin, Videojuego[i].caracteristicas);
		}
		break;
	case 7:
		for (int i = j; i == j; i++)
		{
			printf("Ingrese Precio unitario \n");
			scanf_s("%f", &Videojuego[i].precio);
		}

		break;
	case 8:

		for (int i = j; i == j; i++)
		{
			printf("Ingrese Impuesto \n");
			scanf_s("%f", &Videojuego[i].impuesto);
		}

		break;
	case 9:

		for (int i = j; i == j; i++)
		{
			printf("Ingrese art%cculo \n", 161);
			scanf_s("%d", &Videojuego[i].numero);
		}
		break;
	}



}


void lista()
{
	int Respuesta, Respuesta2;

	printf("%cDesea buscar por caracter%cstica en especifico%c   1.- Si   2.- No \n", 168, 161, 63);
	scanf_s("%d", &Respuesta);
	if (Respuesta == 1)
	{
		printf("Indique lo que desea buscar: 1.-G%cnero,  2.-Consola, 3.-Clasificaci%cn \n", 130, 162);
		scanf_s("%d", &Respuesta2);
		if (Respuesta2 == 1)
		{
			while (getchar() != '\n');

			//Pide el genero a buscar
			printf("\nIngrese G%cnero a buscar: \n", 130);
			getline(cin, nombreBusqueda);

			printf("%c Lista de Art%cculos %c \n", 31, 161, 31);

			for (int i = 0; i < Alta1; i++)
			{
				//compara las cadenas de genero de manera que sean la misma
				if (strcmp(nombreBusqueda.c_str(), Videojuego[i].genero.c_str()) == 0)
				{
					//Si el estatus de un registro fue eliminado aqui se confirma E IMPRIME que dicho registro fue eliminado
					if (Videojuego[i].status == "ELIMINADO")
					{
						printf("REGISTRO %d ELIMINADO \n", i + 1);
					}
					else 
					{
						printf(" Registro %d \n", i + 1);

						printf("Numero de Art%cculo: %d \n", 161, Videojuego[i].numero);

						printf("Nombre del Videojuego: %s \n", Videojuego[i].nombre.c_str());

						printf("A%co de lanzamiento: %d \n", 164, Videojuego[i].year);

						printf("G%cnero: %s \n", 130, Videojuego[i].genero.c_str());

						printf("Clasificaci%cn: %s \n", 162, Videojuego[i].clasificacion.c_str());

						printf("Consola: %s \n", Videojuego[i].consola.c_str());

						printf("Caracter%csticas: %s \n", 161, Videojuego[i].caracteristicas.c_str());

						printf("Descripci%cn: %s \n", 162, Videojuego[i].descripcion.c_str());

						printf("Precio: %.2f \n", Videojuego[i].precio);

						printf("Precio final: %.2f \n\n", Videojuego[i].total);
					}
				}
			}
		}
		if (Respuesta2 == 2)
		{
			while (getchar() != '\n');

			//Pide Consola a buscar
			printf("Ingrese Consola a buscar: \n", 130);
			getline(cin, nombreBusqueda);

			printf("%c Lista de Art%cculos %c \n", 31, 161, 31); printf("Lista de Art%cculos \n", 161);

			for (int i = 0; i < Alta1; i++)
			{
				if (strcmp(nombreBusqueda.c_str(), Videojuego[i].consola.c_str()) == 0)
				{
					if (Videojuego[i].status == "ELIMINADO")
					{
						printf("REGISTRO %d ELIMINADO \n", i + 1);
					}
					else
					{
						printf(" Registro %d \n", i + 1);

						printf("Numero de Art%cculo: %d \n", 161, Videojuego[i].numero);

						printf("Nombre del Videojuego: %s \n", Videojuego[i].nombre.c_str());

						printf("A%co de lanzamiento: %d \n", 164, Videojuego[i].year);

						printf("G%cnero: %s \n", 130, Videojuego[i].genero.c_str());

						printf("Clasificaci%cn: %s \n", 162, Videojuego[i].clasificacion.c_str());

						printf("Consola: %s \n", Videojuego[i].consola.c_str());

						printf("Caracter%csticas: %s \n", 161, Videojuego[i].caracteristicas.c_str());

						printf("Descripci%cn: %s \n", 162, Videojuego[i].descripcion.c_str());

						printf("Precio: %.2f \n", Videojuego[i].precio);

						printf("Precio final: %.2f \n\n", Videojuego[i].total);
					}
				}
			}
		}
		if (Respuesta2 == 3)
		{
			while (getchar() != '\n');

			//Pide el genero a buscar
			printf("\nIngrese Clasificaci%cn a buscar: \n", 162);
			getline(cin, nombreBusqueda);

			printf("%c Lista de Art%cculos %c \n", 31, 161, 31);

			for (int i = 0; i < Alta1; i++)
			{
				//compara las cadenas de genero de manera que sean la misma
				if (strcmp(nombreBusqueda.c_str(), Videojuego[i].clasificacion.c_str()) == 0)
				{
					//Si el estatus de un registro fue eliminado aqui se confirma E IMPRIME que dicho registro fue eliminado
					if (Videojuego[i].status == "ELIMINADO")
					{
						printf("REGISTRO %d ELIMINADO \n", i + 1);
					}
					else
					{
						printf(" Registro %d \n", i + 1);

						printf("Numero de Art%cculo: %d \n", 161, Videojuego[i].numero);

						printf("Nombre del Videojuego: %s \n", Videojuego[i].nombre.c_str());

						printf("A%co de lanzamiento: %d \n", 164, Videojuego[i].year);

						printf("G%cnero: %s \n", 130, Videojuego[i].genero.c_str());

						printf("Clasificaci%cn: %s \n", 162, Videojuego[i].clasificacion.c_str());

						printf("Consola: %s \n", Videojuego[i].consola.c_str());

						printf("Caracter%csticas: %s \n", 161, Videojuego[i].caracteristicas.c_str());

						printf("Descripci%cn: %s \n", 162, Videojuego[i].descripcion.c_str());

						printf("Precio: %.2f \n", Videojuego[i].precio);

						printf("Precio final: %.2f \n\n", Videojuego[i].total);
					}
				}
			}
		}
	}
	else
	{
		printf("%c Lista de Art%cculos %c \n", 31, 161, 31);
		for (int i = 0; i < Alta1; i++)
		{
			if (Videojuego[i].status == "ELIMINADO")
			{
				printf("REGISTRO %d ELIMINADO \n", i + 1);
			}
			else
			{
				printf(" Registro %d \n", i + 1);

				printf("Numero de Art%cculo: %d \n", 161, Videojuego[i].numero);

				printf("Nombre del Videojuego: %s \n", Videojuego[i].nombre.c_str());

				printf("A%co de lanzamiento: %d \n", 164, Videojuego[i].year);

				printf("G%cnero: %s \n", 130, Videojuego[i].genero.c_str());

				printf("Clasificaci%cn: %s \n", 162, Videojuego[i].clasificacion.c_str());

				printf("Consola: %s \n", Videojuego[i].consola.c_str());

				printf("Caracter%csticas: %s \n", 161, Videojuego[i].caracteristicas.c_str());

				printf("Descripci%cn: %s \n", 162, Videojuego[i].descripcion.c_str());

				printf("Precio: %.2f \n", Videojuego[i].precio);

				printf("Precio final: %.2f \n\n", Videojuego[i].total);
			}
		}
	}
}


void baja()
{
	int j;
	printf("ingrese el registro a eliminar: ");
	scanf_s("%d", &j);
	j = j - 1; // como empieza en cero se tiene que quitar 1 a la numeracion
	for (int i = j; i == j; i++)
	{
		printf("Eliminando registro %d \n", j + 1);
		Videojuego[i].status = "ELIMINADO";

	}
}


void salir()
{
	ofstream archivo; //clase ifstream para leer archivos
	string nombrearchivo;
	int texto;
	float texto3;
	string texto2;

	nombrearchivo = "Lista de Videojuegos.txt";

	//El archivo se envia a la carpeta de Debug

	archivo.open(nombrearchivo.c_str(), ios::out);
	// si el archivo al no se crea o ocurre algun imprevisto que afecte a la creacion del archivo imprime lo siguiente
	if (archivo.fail())
	{
		printf("ERROR NO SE PUDO CREAR EL ARCHIVO");

		exit(1);
	}
	archivo << " \t\t\t\t\t\t\t\t\tGamesandChill \n\n";
	archivo << "Articulo" << "\t\t";
	archivo << "Nombre" << "\t\t";
	archivo << "Genero" << "\t\t";
	archivo << "Consola" << "\t\t";
	archivo << "Clasificacion" << "\t\t";
	archivo << "Descripcion" << "\t\t";
	archivo << "Precio Final" << "\n";

	for (int i = 0; i < Alta1; i++)
	{
		if (Videojuego[i].status == "ELIMINADO")
		{
			texto2 = "\n REGISTRO ELIMINADO";
			texto = i;
			archivo << texto2 << texto << "\n";
		}
		else
		{
			// Imprime en el archivo los registros hechos por el usuario
			texto = Videojuego[i].numero;
			archivo << texto << "\t" << "\t" << "\t";
			texto2 = Videojuego[i].nombre.c_str();
			archivo << texto2 << "\t" << "\t" << "\t";
			texto2 = Videojuego[i].genero.c_str();
			archivo << texto2 << "\t " << "\t" << "\t" << "\t";
			texto2 = Videojuego[i].consola.c_str();
			archivo << texto2 << "\t " << "\t" << "\t";
			texto2 = Videojuego[i].clasificacion.c_str();
			archivo << texto2 << "\t " << "\t" << "\t";
			texto2 = Videojuego[i].descripcion.c_str();
			archivo << texto2 << "\t " << "\t" << "\t";
			texto3 = Videojuego[i].total;
			archivo << texto3 << "\t " << "\t" << "\t" << "\n";
		}
	}
	archivo.close();

}