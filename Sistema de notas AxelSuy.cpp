// Axel Suy

#include<iostream>
#include <stdlib.h>
#include<fstream>
#include<string>

using namespace std;
void agregarNotas();
void verNotas();
int main()
{
	int opcion;
	do{
		//listado de opciones
		cout<<"\n\n*******Sistema Axar*******\n";
		cout<<"----Opciones de Notas----\n";
		cout<<"\n 1. Agregar un Notas";
		cout<<"\n 2. Ver Notas Ingresados";
		cout<<"\n 3. Salir";
		cout<<"\n Elija una Opcion (1-3)";
		cin>>opcion;
		cout<<"\n\n";
		
		switch(opcion){
			case 1: system("CLS");
			cout<<"\t****** Ingrese las Notas******\n\n";
			agregarNotas();
			system("pause");
			system("CLS");
			break;
			
			case 2: system("CLS");
			cout<<"Notas Ingresadas:";
			verNotas();
			system("pause");
			system("CLS");
			break;
			
			case 3: system("CLS");
			cout<<"\t Gracias por usarme \n\n";
			exit(0);
			break;
			
		}
			
	}while (opcion != 3);
	system("pause");
	return main();
}
 void agregarNotas()
 {
 		ofstream archivo;
	string carnet;
	string nombre;
	string apellido;
	int Examen;
	int Zona;

	archivo.open("Notas.txt", ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		system("pause");
		exit(1);
	}

	cout << "\nIngrese el carnet del alumno: ";
	cin >> carnet;
	cout << "\nIngrese el nombre del alumno: ";
	cin >> nombre;
	cout << "\nIngrese el apellido del alumno: ";
	cin >> apellido;
	cout << "\nIngrese la zona del alumno:";
	cin >> Zona;
	if (Zona >= 0 && Zona <= 70) {

	}
	else {
		cout << "\nIngrese una zona del rango de 0 a 70\n";
		system("pause");
		//exit(1);
	}

	cout << "\nIngrese la nota del examen:";
	cin >> Examen;
	if (Examen >= 0 && Examen <= 30) {

	}
	else {
		cout << "\nIngrese una nota de examen del rango de 0 a 30\n";
		system("pause");
		//exit(1);
	}

	cout << endl;
	archivo << "\nCarnet: " << carnet << endl;
	archivo << "Nombre: " << nombre << endl;
	archivo << "Apellido: " << apellido << endl;
	archivo << "Zona: " << Zona << endl;
	archivo << "Examen: " << Examen << endl;
	cout << endl;
	cout << "\n .....\n";
	archivo.close();
 	
 }
 void verNotas()
 {
 		//crear la variable para abrir el documento en modo lectura
	ifstream archivo;
	string texto;
	//Abrir el archivo en modo lectura
	archivo.open("Notas.txt", ios::in);

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		system("pause");
		exit(1);
	}
	//Permitir ver si es la ultima linea de texto
	while (!archivo.eof()) {//mientras no sea la ultima linea de texto
		getline(archivo, texto);//guardar la linea en la variable
		cout << texto << endl; // mostrar la variable en pantalla
	}
	//hacer una pausa en el programa
	system("pause");
	//cerramos el archivo
	archivo.close();
 }

 
