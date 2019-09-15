/*Solicitar que se ingresen los siguientes datos de un grupo de N alumnos que rindieron el examen de ingreso
compuesto por dos materias. Los datos son: APELLIDO, NOMBRE, DIRECCION (CALLE, NUMERO Y ORIENTACION), DNI, N° DE LEGAJO,
NOTA MATERIA MATEMATICA, NOTA MATERIA LENGUA.
Hacer un listado de los que aprobaron una materia y no la otra, incluyedo la nota que obtuvieron. 
Debe figurar APELLIDO, NOMBRE, DNI Y NUMERO DE LEGAJO.
Promediar las 2 notas en otro arreglo. El arreglo de promedios ordenarlo de mayor a menor, arrastrar el ordenamiento con el
resto de los datos.
Mostrar el listado ordenado.
Permitir que se ingrese el DNI y decir si apobó o no. Permitir realizar una nueva busqueda o salir.
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
void llenar_arreglo_nombres_apellidos (string nombre,string apellido, int n);


main(){
	int n,i,j=0,aux_int=0;
	char nom[20],ape[20],dir[30];

	cout << "Ingrese la cantidad de alumnos:" << endl;
	cin >> n;
	
	int dni[n],legajo[n];
	float matematica[n],lengua[n],promedio[n],aux_float;
	string nombres[n],apellidos[n], direcciones[n],aux_string;
	fflush(stdin);
	cout << "A continuacion ingrese nombre, apellido, direccion, dni, numero de legajo, nota de matematica y nota de lengua" << endl;
	for (i=0;i<n;++i){
		cout << "Ingrese nombre"<< endl;
			gets (nom);
			nombres[i]= nom;
				cout << "Ingrese apellido"<< endl;
				gets (ape);
				apellidos[i]= ape;
					cout << "Ingrese direccion"<< endl;
					gets (dir);
					direcciones[i]=dir;
						fflush(stdin);
						cout <<"Ingrese DNI"<<endl;
						cin>>dni[i];
							cout<<"Ingrese Numero de Legajo"<<endl;
							cin>>legajo[i];
								cout<<"Ingrese nota de matematica"<<endl;
								cin>>matematica[i];
									cout<<"Ingrese nota de lengua"<<endl;
									cin>>lengua[i];
									fflush(stdin);
														
		
	}
	for (i=0;i<n;++i){
		cout<< "Nombre:"<< nombres[i]<< "Apellido:"<<apellidos[i]<< "Direccion:"<< direcciones[i]<<"DNI:"<<dni[i]<<"Legajo:"<<legajo[i]<<"nota matematica:"<<matematica[i]<<"nota lengua:"<<lengua[i]<<endl;
		
	}
	cout<<"Aprobaron solo matematica"<<endl;
	for(i=0;i<n;++i){
		if(matematica[i]>=6 && lengua[i]<6){
			cout<<"nombre:"<<""<<nombres[i]<<"-"<<"apellido:"<<""<<apellidos[i]<<"-"<<"DNI:"<<""<<dni[i]<<"-"<<"legajo:"<<""<<legajo[i]<<"nota:"<<""<<matematica[i]<<endl;
		}
	}
	for (i=0;i<n;++i){
		promedio[i]= (matematica[i]+lengua[i])/2;
	}
	for (i=0;i<n-1;++i){
		for(j=0;j<n-i;++j){
			if(promedio[j]<promedio[j+1]){
				aux_float=promedio[j];
				promedio[j]=promedio[j+1];
				promedio[j+1]=aux_float;
				aux_string=nombres[j];
				nombres[j]=nombres[j+1];
				nombres[j+1]=aux_string;
				aux_string=apellidos[j];
				apellidos[j]=apellidos[j+1];
				apellidos[j+1]=aux_string;
				aux_int=dni[j];
				dni[j]=dni[j+1];
				dni[j+1]=aux_int;
				aux_string=direcciones[j];
				direcciones[j]=direcciones[j+1];
				direcciones[j+1]=aux_string;
				aux_int=legajo[j];
				legajo[j]=legajo[j+1];
				legajo[j+1]=aux_int;
				aux_float=matematica[j];
				matematica[j]=matematica[j+1];
				matematica[j+1]=aux_float;
				aux_float=lengua[j];
				lengua[j]=lengua[j+1];
				lengua[j+1]=aux_float;
			}
		}
	}
	for(i=0;i<n;++i){
		cout<<"nombre:"<<""<<nombres[i]<<"-"<<"apellido:"<<""<<apellidos[i]<<"-"<<"DNI:"<<""<<dni[i]<<"-"<<"legajo:"<<""<<legajo[i]<<"nota matematica:"<<""<<matematica[i]<<"nota lengua"<<""<<lengua[i]<<"promedio="<<""<<promedio[i]<<endl;
	}
	system("pause");
}


