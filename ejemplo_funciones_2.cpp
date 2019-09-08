#include <stdio.h>
void ingreso(int A[]);
void suma(int B[]);
void mostrar(int C[]);
void mostrar1(int A);

main()
{
	int A[3];
	
	ingreso(A);
	suma(A);
	mostrar(A);/*le envio todo el arreglo*/
	mostrar1(A[2]);/*le envio el valor guardado en A[2]*/
	
}

void ingreso(int A[])
{
	printf("Ingrese un valor \n");
	scanf("%d",&A[0]);
	printf("Ingrese un valor \n");
	scanf("%d",&A[1]);

	
}
void suma(int B[]) /*el nombre de la variable B no modifica el hecho de que estoy trabajando con el arreglo A declarado en main*/
{
	B[2]=B[0]+B[1];
}
void mostrar(int C[])
{
	printf("La suma es: %d /n",C[2]);/*el nombre de la variable C no modifica el hecho de que estoy trabajando con el arreglo A declarado en main*/
}
void mostrar1(int A)
{
	printf("La suma es:%d",A);
}
