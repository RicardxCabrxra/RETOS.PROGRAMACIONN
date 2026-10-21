//ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
//CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
//MATERIA--PROGRAMACION ESTRUCTURADA
//NOMBRE--RICARDO SANTIAGO CABRERA
//ESTE PROGRAMA LEE UNA CADENA DE CARACTERES  Y LOS LEE, SELECCIONA UNA LETRA Y CUENTA CUANTAS VECES SE REPITE ESA LETRA EN LA CADENA

#include <stdio.h>

int main()
{
	char cadena[100], letra;
	int i, contador = 0;
	printf("Ingrese una cadena de caracteres: ");
	fgets(cadena, sizeof(cadena), stdin);
	printf("Ingrese la letra a buscar: ");
	scanf_s("%c", &letra);
	for (i = 0; cadena[i] != '\0'; i++)
	{
		if (cadena[i] == letra)
		{
			contador++;
		}
	}
	printf("La letra '%c' se repite %d veces en la cadena.\n", letra, contador);
	return 0;
}

