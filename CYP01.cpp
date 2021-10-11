// CYP01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int ancho; // ancho de la pantalla
	int alto; // alto de la pantalla
	int coordsupX; // coordenada X del lado superior izquierdo 
	int coordsupY; // coordenada Y del lado superior izquierdo
	int coordinfX; // coordenada X del lado inferior derecho
	int coordinfY; // coordenada Y del lado inferior derecho
	float direcX; // porcentaje que tiene X
	float direcY; // porcemtaje que tiene Y
	float porcenX; // porcentaje del ancho que tiene el objeto
	float porcenY; // porcentaje del alto que tiene el objeto
	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &direcX);
	scanf_s("%f", &direcY);
	scanf_s("%f", &porcenX);
	scanf_s("%f", &porcenY);
	coordsupX = (int)(ancho * direcX);
	coordsupY = (int)(alto * direcY);
	coordinfX = (int)(porcenX * ancho + coordsupX);
	coordinfY = (int)(porcenY * alto + coordsupY);
	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, direcX, direcY, porcenX, porcenY, coordsupX, coordsupY, coordinfX, coordinfY);
	return(0);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
