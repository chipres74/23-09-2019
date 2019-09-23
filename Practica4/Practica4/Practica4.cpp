// Practica4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

using namespace std;

int main()
{
	printf("==============\n");
	printf("Bienvenido, este programa te permite calcular el area de un triangulo");
	printf("==============\n");

	float altura, area, base;

	printf("Introduzca base: " );
	scanf("%f", &base);
	printf("Introduzca altura: " );
	scanf("%f", &altura);

	area = base * altura / 2;


	printf("El area del triangulo es: %f", area );
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln











