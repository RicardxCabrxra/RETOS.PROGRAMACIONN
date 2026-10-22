//ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
//CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
//MATERIA--PROGRAMACION ESTRUCTURADA
//NOMBRE--RICARDO SANTIAGO CABRERA
//ESTE PROGRAMA CAPTURA UNA VARIABLE Y SU DIRECCION DE MEMORIA, LUEGO CAPTURA OTRA VARIABLE Y
// SU DIRECCION DE MEMORIA, Y FINALMENTE CAPTURA UN ARREGLO DE CARACTERES Y SU DIRECCION DE MEMORIA 

#include <stdio.h>

int main()
{
    int A;
	int B;
	int* aptr=&A;
	char texto[]="Ricardo";
	*aptr = 20;
	B = 15;
	printf("El valor de A es: %d\n y su direccion de memoria es : % x\n", A, (unsigned int)aptr);
		aptr = &B;
	printf("El valor de B es: %d\n y su direccion de memoria es : % x\n", B, (unsigned int)aptr);
	for (int i = 0; i < 10; i++)
	{
		printf("%c y su direccion de memoria es : % x\n", *(texto + i), (unsigned int)(texto+i));
	}
	return 0;
}

