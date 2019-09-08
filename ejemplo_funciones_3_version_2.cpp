/*Implementar una funcion que cargue un arreglo de datos enteros hasta que se ingrese
un dato igual a la mitad del dato que fue ingresado en la primera posicion del arreglo
y no deben superarse los 50 datos.
Implementar una segunda funcion que muestre el arreglo.
Implementar una tercer funcion que promedie todos los elementos del arreglo.
Implementar una cuarta funcion que determine el mayor elemento del arreglo que sea menor que el promedio calculado.
Implementar una quinta funcion que calcule el porcentaje de elementos con indice par mayores al promedio.
Implementar una sexta funcion que determine el valor y ubicacion en el arreglo del mayor elemento impar.
Implementar una septima funcion que determine la cantidad de elementos menores que el ultimo elemento ingresado.*/
#include <stdio.h>
int llenar_arreglo (int A[]);
void mostrar_arreglo (int A[],int n);
float sumar_arreglo (int A[],int n);
int mayor_elemento (int A[],int n,float promedio);
float prom (int A[],int n, float promedio);
int mayor_impar (int A[],int n);
int elementos_menores (int A[],int n);

main()
{
	int n,A[n],mayor,impar,cantidad;
	float promedio,porcentaje;
	n= llenar_arreglo (A);
	mostrar_arreglo(A,n);
	promedio= sumar_arreglo(A,n);
	printf("El promedio es: %f\n",promedio);
	mayor = mayor_elemento (A,n,promedio);
	printf("el mayor elemento menor al promedio es: %d \n",mayor);
	porcentaje = prom(A,n,promedio);
	printf("el porcentaje de elementos con indice par mayores que el promedio es: %f\n",porcentaje);
	impar = mayor_impar (A,n);
	printf("el mayor elemento impar es %d y esta ubicado en la posicion %d\n",A[impar],impar+1);
	cantidad = elementos_menores (A,n);
	printf("La cantidad de elementos menores que el ultimo ingresado son: %d",cantidad);

	
	
}
int llenar_arreglo (int A[]){
	int n=50,i;
	
	printf("A continuacion podra ingresar los elementos del arreglo, el primer elemento debe ser par y mayor o igual a 2 \n");
	printf("Para detener la carga ingrese un numero igual a la mitad del primer elemento ingresado \n");
	for(i=0;i<n;++i) {
		printf("Ingrese un valor \n");
		scanf("%d",&A[i]);
		if(A[i]==(A[0]/2)){
			n=i;
			break;
		}
		
	}
	return n;
}
void mostrar_arreglo (int A[],int n) {
	int i;
	printf("Los elementos del arreglo son:\n");
	for(i=0;i<n;++i){
		printf("elemento %d = %d\n",i+1,A[i]);
	}
}
float sumar_arreglo (int A[],int n) {
	int i,suma=0;
	float prom;
	for (i=0;i<n;++i){
		suma += A[i];
	}
	prom = suma/n;
	return prom;
}
int mayor_elemento (int A[],int n,float promedio){
	int i,mayor=0;
	for (i=0;i<n;++i)
	{
		if(A[i]<promedio && A[i]>mayor){
			mayor=A[i];
			
		}
	}
	return mayor;
	
}
float prom (int A[],int n, float promedio){
	int i,c=0,e=0;
	float porc;
	for (i=2;i<n;++i){
		++c;
		if(A[i]>promedio){
			++e;
		}
		++i;
	}
	porc= (e*100)/c;
	return porc;
	
}
int mayor_impar (int A[],int n){
	int i,mayor=0,d=0;
	for (i=0;i<n;++i) {
		if(A[i]%2!=0){
			if (A[i]>mayor){
				d=i;
			}
		}
	}
	return d;
}
int elementos_menores (int A[],int n){
	int i,c=0;
	for (i=0;i<n;++i) {
		if(A[i]<A[n-1]){
			++c;
		}
	}
	return c;
}




