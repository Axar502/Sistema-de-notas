#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
//libreria para archivos planos
#include<fstream>
#include<string>

using namespace std;
void agregarAlumno();
void buscarAlumno();
void modificarAlumno();
int main(){
	int opcion;
//listado de opciones
cout<<"\n*******Sistema de Alumnos*******\n";
cout<<"----Opciones de Alumnos----\n";
cout<<"\n 1. Añadir un Alumno";
cout<<"\n 2. Ver Alumnos Ingresados";
cout<<"\n 3. Buscar Alumno";
cout<<"\n 4. Modificar un Alumno";
cout<<"\n 5. Eliminar un Alumno";
cout<<"\n 6. Salir";

cout<<"\n Elija una Opcion (1-6)";
cin>>opcion;

switch(opcion){
	case 1: system("CLS");
		cout<<"****** Ingrese los Datos del Alumno ******";
		agregarAlumno();
	break;
	case 2: system("CLS");
		cout<<"****** Listado de Alumnos Inscritos ******";
		buscarAlumno();
	break;
	case 3: system("CLS");
		cout<<"****** Buscar Alumnos Inscritos ******";
		
	break;
	case 4: system("CLS");
		cout<<"****** Modificar los Datos del Alumno ******";
	break;
	case 5: system("CLS");
		cout<<"****** Eliminar los Datos del Alumno ******";
	break;
	case 6: system("CLS");
		cout<<"\n Gracias por su Tiempo";
		Sleep(2000);
		exit(0);
	break;
}

system("pause");


}
//-----Funciones Para alumnos
//Crear la funcion que permita añadir un Alumno
void agregarAlumno(){
	//crear archivo y variables
	//permita guardar informacion
	ofstream archivo;
	string carnet;
	string nombre;
	string apellido;
	string direccion;
	string telefono;
	
	//Abrir o crear el archivo Estudiante.txt
	//dentro de la carpeta estudiante
	archivo.open("Estudiante/Estudiante.txt", ios::app);
	 //validar la creacion del archivo
	 
	if(archivo.fail())
	{
		
		cout<<"No se pudo abrir el archivo";
		system("pause");
		exit(1);
	}
	
	cout<<"\n Ingrese su Carnet";
	cin>> carnet;
	cout<<"\n Ingrese su nombre";
	cin>>nombre;
	cout<<"\n Ingrese su apellido";
	cin>>apellido;
	cout<<"\n Ingrese su direccion";
	cin>>direccion;
	cout<<"\n Ingrese su telefono";
	cin>>telefono;
	
	//Ingresar los datos al documento Estudiante.txt
	
	archivo<<"Carnet:" <<carnet <<endl;
	archivo<<"Nombre:" <<nombre <<endl;
	archivo<<"Apellido:" <<apellido <<endl;
	archivo<<"Direccion:" <<direccion <<endl;
	archivo<<"Telefono:" <<telefono <<endl;
	
	cout<<"Guardando archivos";
	Sleep(2000);
	archivo.close();
//Funciones
//Variables
//Ciclos (For, While, Do While)

}
void verAlumno(){
	//Crear la variable para abrir el 
	//Documento en modo lectura
	ifstream archivo;
	//Abrir o crear el archivo Estudiante.txt
	//dentro de la carpeta estudiante
	archivo.open("Estudiante/Estudiante.txt", ios::in);
	 //validar la creacion del archivo
	 
	if(archivo.fail())
	{
		
		cout<<"No se pudo abrir el archivo";
		system("pause");
		exit(1);
	}
}
void buscarAlumno(){
	// declarar tipo archivo
	fstream archivo;
	string carnet, linea1, linea2 linea3, linea4, linea5;
	int noencontrado = 0;
	// solicitar carnet
	cout<<"\n Escriba la carnet a buscar: "
	cin>> carnet;
	
	//abrir archivo de texto	
	if(!archivo.is_open()){
		archivo.open("Estudiante/Estudiante.txt", ios::in);
		
		
	}
	cout<< endl;
	while(getline(archivo, linea1)){
		if(line1.find(carnet)!= string::npos){
			cout<< linea1 << endl;
			getline(archivo, linea2);
			cout<< linea2 << endl;
			getline(archivo linea3);
			cout<< linea3 << endl;
			getline(archivo linea4);
			cout<< linea4 << endl;
			getline(archivo linea5);
			cout<< linea5 << endl;
			noencontrado = 1;
		}
		
	}
	if(noencontrado == 0){
	cout<< "\n No se encontro el carnet \n"
    }
	archivo.close();
	system("pause");
}
void modificarAlumno
{
	ifstream lectura;
	string carnet, nombre, apellido, direccion, telefono;
	string carnetMod, nombreMod, apellidoMod, direccionMod, telefonoMod;
	
	if(!lectura.is_open()){
		lectura.open("Estudiante/Estudiante.txt", ios::in);
		
		ofstream temporal("estudiante/auxiliar.txt", ios::out);
		if(lectura.is_open()){
			cout<<"Escriba el carnert a Modificar:";
			cin>> carnetMod;
			
			
			while(lectura.eof()){
				lectura<<nombre;
				lectura<<apellido;
				lectura<<direccion;
				lectura<<telefono;
				
				if (carnet==carnetMod){
					cout<<"Nuevo nombre";
					cin>> nombreMod;
					cout<<"\n Nuevo apellido";
					cin>> apellidoMod;
					cout<<"Nuevo direccion";
					cin>> direccionMod;
					cout<<"\n Nuevo telefono";
					cin>> telelfonoMod;
					
					temporal<<nombreMod<<" "<<apelidosMod<<" "<<direccionMod<<" "<<telefonoMod<< carnet<<"\n";
					
				}else
			// si no se encuentra el carnet
			// pasamos los datos originales
				{
					temporal<<nombre<<" "<<apelidos<<" "<<direccion<<" "<<telefono<< carnet<<"\n";
					
				}
				
			}
			
		}
		
	lectura.close();
	temporal.close();	
	}else{
		remove("estudiante/Estudiante.txt");
		rename("estudiante/auxiliar.txt","estudiante/Estudiante.txt");
		system("pause");
		
		
	}
}
