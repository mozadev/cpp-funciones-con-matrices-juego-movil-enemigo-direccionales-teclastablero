#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

#define  filas 20
#define  columnas 23

using namespace std;
using namespace System;


//
//int mapa1[filas][columnas] =
//{
//
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//};
//
//void ingresodatosmatriz(int **matriz)
//{
//
//	for (int i = 0; i < filas; i++)
//		for (int j = 0; j < columnas; j++)
//			matriz[i][j] = mapa1[i][j];
//}
//
//void salidadatosmatriz(int **matriz)
//{
//	for (int i = 0; i < filas; i++)
//	{
//		for (int j = 0; j < columnas; j++)
//		{
//			Console::SetCursorPosition(j, i);
//			cout << matriz[i][j];
//		}
//		cout << endl;
//	}
//
//}
//void pintamatriz(int**matriz)
//{
//	for (int i = 0; i < filas; i++)
//		for (int j = 0; j < columnas; j++)
//		{
//			Console::SetCursorPosition(j, i);
//			Console::BackgroundColor = ConsoleColor::Cyan;
//			if (matriz[i][j] == 1)
//			{
//				Console::ForegroundColor = ConsoleColor::Green;
//				cout << char(219);
//			}
//			if (matriz[i][j] == 2)
//			{
//				Console::ForegroundColor = ConsoleColor::Gray;
//				cout << char(219);
//			}
//
//		}
//}




void dibujarjugador(int &x, int &y)
{
	Console::SetCursorPosition(x, y);
	Console::BackgroundColor = ConsoleColor::Gray;
	Console::ForegroundColor = ConsoleColor::Black;
	cout << "*";

}
void dibujarenemigo(int &xe, int &ye)
{
	Console::SetCursorPosition(xe, ye);
	Console::BackgroundColor = ConsoleColor::Gray;
	Console::ForegroundColor = ConsoleColor::Black;
	cout << char(64);

}
void eliminarjugador(int &x, int &y)
{
	Console::SetCursorPosition(x, y);
	cout << " ";

}
void eliminarenemigo(int&xe, int &ye)
{

	Console::SetCursorPosition(xe, ye);
	cout << " ";
}
void moverenemigo(int &ye, int&dye)
{

	ye = ye + dye;
	if (ye == 3 || ye == 8)
		dye = dye*-1;
}

void genera_y_muestra_matriz(int**matriz)
{
	int mapa1[filas][columnas] =
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	};
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; j++)
		{
			matriz[i][j] = mapa1[i][j];


			Console::SetCursorPosition(j, i);
			Console::BackgroundColor = ConsoleColor::Cyan;
			if (matriz[i][j] == 1)
			{
				Console::ForegroundColor = ConsoleColor::Blue;
				cout << char(219);
			}
			if (matriz[i][j] == 2)
			{
				Console::ForegroundColor = ConsoleColor::Gray;
				cout << char(219);
			}
		}
}

void desplaza_movil_y_enemigo(int &x, int &y, int &xe, int &ye, int &dye, int**matriz)
{
	dibujarjugador(x, y);
	dibujarenemigo(xe, ye);

	char tecla;
	while (true)
	{

		_sleep(100);
		eliminarenemigo(xe, ye);

		if (kbhit())
		{
			eliminarjugador(x, y);
			tecla = _getch();
			if (tecla == 72)//arriba
			{
				y--;
				if (matriz[y][x] == 1)
				{
					x = 10; y = 8;
					dibujarjugador(x, y);
				}
			}
			if (tecla == 75)//izquierda
			{
				x--;
				if (matriz[y][x] == 1)
				{
					x = 10; y = 8;
					dibujarjugador(x, y);
				}

			}
			if (tecla == 77)//derecha
			{
				x++;
				if (matriz[y][x] == 1)
				{
					x = 10; y = 8;
					dibujarjugador(x, y);
				}

			}
			if (tecla == 80)//abajo
			{
				y++;
				if (matriz[y][x] == 1)
				{
					x = 10; y = 8;
					dibujarjugador(x, y);
				}

			}
		}
		dibujarjugador(x, y);
		moverenemigo(ye, dye);
		dibujarenemigo(xe, ye);
		if (xe == x&&ye == y)
		{
			x = 10; y = 8;
			dibujarjugador(x, y);
		}
	}
}


int main()
{
	Console::CursorVisible = false;
	int x, y;
	cout << "ingrese posicion inicial x del jugador: "; cin >> x; cout << endl;
	cout << "ingrese posicion inicial y del jugador: "; cin >> y; cout << endl;
	int xe = 19, ye = 3, dye = 1;


	int **matriz = new int*[filas];
	for (int i = 0; i < filas; i++)
		matriz[i] = new int[columnas];
	/*ingresodatosmatriz(matriz);
	salidadatosmatriz(matriz);
	pintamatriz(matriz);*/
	genera_y_muestra_matriz(matriz);
	desplaza_movil_y_enemigo(x, y, xe, ye, dye, matriz);
	for (int i = 0; i < filas; i++)
		delete[]matriz[i];
	delete[]matriz;


	_getch();


}