#include <stdio.h>
/*ingresar dos numeros, sumarlos y mostrarlos*/

int ingreso();/*prototipo de funcion*/
int suma(int C,int D);/*prototipo de funcion*/
void mostrar(int C);/*prototipo de funcion*/

main ()
{
	int A,B,C;
	A=ingreso(); /*llamado a la funcion*/
    B=ingreso();/*llamado a la funcion*/
    C=suma(A,B);/*llamado a la funcion*/
	mostrar(C);	/*llamado a la funcion*/
	
}

int ingreso() /*definicion de la funcion*/
{
	int A;
	printf("Ingrese un valor");
	scanf("%d",&A);
	return A;
}

int suma(int C,int D)/*definicion de la funcion*/
{
	int A;
	A=C+D;
	return A;
}
void mostrar(int C)/*definicion de la funcion*/
{
	printf("La suma es: %d",C);
}
