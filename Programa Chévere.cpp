/*utilizar funciones,menu,estructuras				int main

  pedir datos de alumnos							opción 1
  almacenar datos en estructuras					opción 1

  pedir notas de los alumnos						opción 1
  almacenar las notas en estructuras				opción 1

  calcular el promedio de notas de cada alumno		opción 2

  calcular el promedio de notas de la sección	 	opción 3  */

#include"iostream"
#include"windows.h"
#include"conio.h"
#include"string.h"

using namespace std;

void agregar_datos();
void prom_global();
void calcular_prom();
void cantidad_notas();
void listar_alum();


int a,b,c,d,e;
struct persona{
	int cedula;
	char nombre [20];
	/*char seccion [20];*/
	char materia [12];
};

int auxg;
float nota1[50];
persona cliente[5];
int nro_clientes;
int nro_notas;

											int main()	/*FUNCIÒN PRINCIPAL*/
{
	setlocale(LC_CTYPE, "Spanish");
	cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN";cout<<"\n\n\n"<<"\t\t\t"<<" PRIMERO LO PRIMERO";
	cout<<"\n\n\t\t Ingrese el Número de Alumnos: "; cin>>nro_clientes;
	cout<<"\n\n\t\t Ingrese la Cantidad de Notas: "; cin>>nro_notas;
	
	int mientras = 1,f=0;
	int opcion_principal;
	
	if (nro_clientes == 0){ mientras = 0;
	}
	if (nro_notas == 0){ mientras = 0;
	}
	
	system("cls");

	for (f = 0;mientras != 0;f)
	{
	cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN";
	cout<<"\n\n\n"<<"\t\t\t"<<" NOTAS DE ALUMNOS";cout<<"\n\t\t\t==================";
	
	cout<<"\n"<<"\n"<<"\t\t"<<"Agregar Datos y Notas del Alumno	= 1";
	cout<<"\n"<<"\n"<<"\t\t"<<"Calcular el Promedio de Notas		= 2";
	cout<<"\n"<<"\n"<<"\t\t"<<"Promedio de Notas de la Sección		= 3";
	cout<<"\n"<<"\n"<<"\t\t"<<"Listar Datos de Alumnos			= 4";
	cout<<"\n"<<"\n"<<"\t\t"<<"Salir					= 5";
	cout<<"\n\n\n\n\n\t";
	
	cout<<"\n\n\t\t Opción: "; cin>>opcion_principal;cout<<"\t";

		switch(opcion_principal)
		{
		case 1: agregar_datos();break;
		case 2: calcular_prom();break;
		case 3: prom_global();break;
		case 4: listar_alum();break;
		case 5: cout<<"\t Has seleccionado salir del sistema!!!";mientras = 0;break;
		default: cout<<"\t Error en la opción seleccionada!!!";
		}
		getch(); system("cls");
	}
	return 0;
}
	
										void agregar_datos()	/*CASO 1*/
{
	int contador_alum = 1;
	if(cliente[0].cedula != 0)
		{
		cout<<"\t Ya hay datos registrados!!!";
		}
		else 
		{
		
		int f; system("cls");
	cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN"<<"\n\n\t\t\t MODULO DE CARGA DE DATOS"<<"\n\t\t\t==========================";
	
			for(f = 0;f < nro_clientes;f++)
			{
		cout<<"\n\n\t\tAlumno : "<<contador_alum++;
		cout<<"\n\t\t\tIngrese su Materia: "; cin>>cliente[f].materia;
		cout<<"\n\t\t\tIngrese su Nombre: "; cin>>cliente[f].nombre;
		cout<<"\n\t\t\tIngrese su Cedula: "; cin>>cliente[f].cedula;
		auxg = f;
		cantidad_notas();
			}
		cout<<"\n\n\t\tPresione una tecla para continuar";
		}
}

										void calcular_prom()	/*CASO 2*/
{
	float a, promedio = 0;
	int f, existe = 0, cicliente;
	
	if (cliente[0].cedula == 0)
	{
		cout<<"\t No hay datos registrados!!!";
	}
		else
		{
		system("cls");
		cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN"<<"\n\n\t\t\t PROMEDIO DE NOTAS"<<"\n\t\t\t===================";
		
		cout<<"\n\nEscriba la Cedula del Alumno: "; cin>>cicliente; cout<<"\n";
		
			for (f = 0;f < nro_clientes; f++)
			{
				if (cliente[f].cedula == cicliente)
				{
				cout<<"\nMateria: "<<"\t"<<cliente[f].materia;
				cout<<"\nNombre: "<<"\t"<<cliente[f].nombre;
				cout<<"\nCedula: "<<"\t"<<cliente[f].cedula;
				
				promedio = promedio + nota1[f];
				
				cout<<"\n\nEl Promedio es: "<<"\t"<< promedio / nro_notas ;
				cout<<"\n\n";
				existe = 1;
				}
			
			}
		if (existe == 0)
			{
			cout<<"\t\t No hay datos registrados para este Alumno!!!";
			}
		}
}

										void prom_global()	/*CASO 3*/
{
	float promedio_total,suma_nota = 0;
	int f;
	if(cliente[0].cedula == 0)
	{
		cout<<"\t No hay datos registrados!!!";
	}
	else
	{
	system("cls");	
		cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN"<<"\n\n\t\t\t PROMEDIO DE LA SECCION"<<"\n\t\t\t========================";
		
		cout<<"\n\n";
		
		for(f  =0 ;f < nro_clientes;f++)
		{	
		 suma_nota = suma_nota + nota1[f];
		}
		promedio_total = suma_nota / nro_notas * nro_clientes;
		promedio_total = promedio_total / nro_clientes;
		promedio_total = promedio_total / nro_clientes;
	cout<<"El Promedio de la Sección es: "<<promedio_total;	
	}
}

										void listar_alum()	/*CASO 4*/
{
	char materia[50];
	int opcion = 0,f;
	
	if(cliente[0].cedula == 0)
	{
		cout<<"\t No hay datos registrados!!!";
	}
	else
	{
	system("cls");	
		cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN"<<"\n\n\t\t\t LISTA DE ALUMNOS"<<"\n\t\t\t==================";
		cout<<"\n\n";
		cout<<"\t\tListar Datos de Alumnos			= 1";
		cout<<"\n\n\t\tListar Datos por Materia		= 2 ";
		cout<<"\n\n\n\t\tOpción: "; cin>>opcion;
		switch (opcion)
		{
		case 1: cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN"; cout<<"\n";system("cls");
			for (f = 0;f < nro_clientes; f++)
			{	
			cout<<"\n\tMateria: "<<"\t"<<cliente[f].materia;
			cout<<"\n\tNombre: "<<"\t"<<cliente[f].nombre;
			cout<<"\n\tCedula: "<<"\t"<<cliente[f].cedula;
			cout<<"\n";
			}
			cout<<"\n\nPresione una tecla para continuar";
			break;
		case 2: cout<<"\n\n\tEscriba la Materia en Curso: "; cin>>materia;system("cls");cout<<"SISTEMAS CHÉVERES C.A"<<"\nGERENCIA DE ADMINISTRACIÓN";
		cout<<"\n";
		
			for (f = 0;f < nro_clientes; f++)
			{
				if (strcmp(cliente[f].materia, materia) == 0)
				{
				cout<<"\n\tMateria: "<<"\t"<<cliente[f].materia;
				cout<<"\n\tNombre: "<<"\t"<<cliente[f].nombre;
				cout<<"\n\tCedula: "<<"\t"<<cliente[f].cedula;
				cout<<"\n";
				}
			}
			break;
		default: cout<<"\n\n\t Error en la opción seleccionada!!!";break;
		}
	}	
}

										void cantidad_notas()	/*AUXILIAR*/
{
	int f = 0; int nota[200]; int aux = 0;
	
	for (f = 0; f < nro_notas; f++)
	{
	cout<<"\n\t\t\tIngrese la Nota "<< f + 1 <<": ";cin>>nota[f];
	aux = aux + nota[f];
	}
	nota1[auxg] = nota1[auxg] + aux;
		
}

/*

	int nota2;
	int nota3;
	int nota4;
	int nota5;
	
	suma_nota = suma_nota + cliente[f].nota2;
		suma_nota = suma_nota + cliente[f].nota3;
		suma_nota = suma_nota + cliente[f].nota4;
		suma_nota = suma_nota + cliente[f].nota5;
	
	promedio = promedio + cliente[f].nota2;
				promedio = promedio + cliente[f].nota3;
				promedio = promedio + cliente[f].nota4;
				promedio = promedio + cliente[f].nota5;
		
*/
