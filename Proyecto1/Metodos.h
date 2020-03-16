//------------------------------------------------------------------------------

	#ifndef MetodosH
	#define MetodosH

//------------------------------Librerias---------------------------------------

	#include <iostream>
	#include <stdio.h>
	#include <conio.h>
	#include <string>
	#include <windows.h>
	#include <fstream>
	#include <algorithm>
	#include <functional>
	#include <cctype>
	#include <locale>
	#include <cstring>
	using namespace std;
//------------------------------------------------------------------------------

	#endif

//-------------------------Definición Variables---------------------------------

	namespace Variables
	{
		extern int AnchoPantalla;
		extern int AltoPantalla;
		extern int OpcionMenu;
		extern string RutaArchivo;
	} ;

//--------------------------Definición Métodos----------------------------------

	void Color(int Background, int Text);

	void Fullscreen();

	void Resolucion();

	void Menu();

	void gotoxy(int x, int y);

	void MarcoMenu(int Col1, int Col2, int Fil1, int Fil2);

	void MarcoArchivo(int Col1, int Col2, int Fil1, int Fil2);

	void MarcoSalir(int Col1, int Col2, int Fil1, int Fil2);

    void LeerArchivo(string RutaArchivo);


	struct Diccionario
	{
		string Palabra;
		struct Diccionario* sgte;
		struct Diccionario* ante;
	};

	typedef struct Diccionario* ListaDLDC;


	//-----------------------------Métodos------------------------------------------

	void InsertarPrimeroPalabraDLDC(ListaDLDC& Lista, string Palabra);

	void InsertarUltimoPalabraDLDC(ListaDLDC& Lista, string Palabra);

	bool EstaVaciaDLDC(ListaDLDC& Lista);

	void ImprimirDLDC(ListaDLDC& Lista);

	int CantidadDLDC(ListaDLDC& Lista);

	void EliminarPalabraDLDC(ListaDLDC& Lista, int Posicion);

