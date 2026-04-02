/*Tarea 2
Laboratorio de Introducción a la Programación

La compañía Churumusco desea un programa para calcular el sueldo a pagar a sus trabajadores.
La forma como calculan el sueldo es la siguiente:

1) Cada trabajador tiene un sueldo base.
2) A los trabajadores se les descuenta un 3.5% del salario base para la seguridad social.
3) A los trabajadores se les descuenta un 5% del salario base para fines de ahorro en la Cooperativa.
4) Cada trabajador aporta 100 pesos mensuales para celebraciones de cumpleaños.

Ejemplo: El programa deberá hacer lo siguiente:

		Digite el nombre del empleado.      : Juaniquito Trucupey
		Digite el sueldo base del empleado  : 35000.00

		Descuento Seguridad Social	    	: (1225.00)
		Descuento Cooperativa				: (1750.00)
		Aporte Celebraciones				: (100.00)

		Sueldo Despues de descuentos		: 31925.00

 Escriba ese programa en c++
*/

#include <iostream>
#include <esconu.h>
#include <string>

using namespace std;

string empleado;

float sueldoBruto;
float sueldoNeto;

const float SEGURIDAD_SOCIAL = 0.035;
const float DESCUENTO_COOPERATIVA = 0.05;
const float APORTE_CELEBRACIONES = 100;

float menosSegSocial;
float menosDescCoop;
float menosAporCeleb;

void Centralizar (string, int);


int main()
{
    BorraPantalla();

    ColorTexto(ROJOCLARO);
    cout <<
            "      CCCCC  H   H  U   U  RRRR   U   U  M   M  U   U  SSSS  CCCCC  OOOO";
    ColorTexto(CIANCLARO);
    cout <<
         "\n       C      H   H  U   U  R   R  U   U  MM MM  U   U S      C      O  O"
         "\n       C      HHHHH  U   U  RRRR   U   U  M M M  U   U  SSS   C      O  O"
         "\n       C      H   H  U   U  R R    U   U  M   M  U   U     S  C      O  O";
    ColorTexto(AMARILLOCLARO);
    cout <<
         "\n       CCCCC  H   H   UUU   R  R    UUU   M   M   UUU  SSSS   CCCCC  OOOO";

    ColorTexto(ROJOCLARO);
    Centralizar ("^___^", 10);
    ColorTexto(CIANCLARO);
    Centralizar ("( o.o )", 11);
    ColorTexto(AMARILLOCLARO);
    Centralizar ("> ^ <", 12);

    ColorTexto(PREESTABLECIDO);
    CoordenadaXY(1, 18);
    TeclaPresionada ("\n\nPresionar ENTER para entrar");

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    BorraPantalla();

    ColorTexto(CIANCLARO);
    Centralizar ("Este programa calcula el sueldo neto para empleados", 3);
    Centralizar ("de la empresa Churumusco", 4);

    Centralizar ("^___^", 6);
    Centralizar ("( o.o )", 7);
    Centralizar ("> ^ <", 8);

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(2,1);
    cout << "^___^";
    CoordenadaXY(1,2);
    cout << "( o.o )";
    CoordenadaXY(2,3);
    cout << "> ^ <";

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(73,1);
    cout << "^___^";
    CoordenadaXY(72,2);
    cout << "( o.o )";
    CoordenadaXY(73,3);
    cout << "> ^ <";

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(2,21);
    cout << "^___^";
    CoordenadaXY(1, 22);
    cout << "( o.o )";
    CoordenadaXY(2,23);
    cout << "> ^ <";

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(73,21);
    cout << "^___^";
    CoordenadaXY(72,22);
    cout << "( o.o )";
    CoordenadaXY(73,23);
    cout << "> ^ <";

    ColorTexto(VERDECLARO);

    CoordenadaXY (5, 10);
    cout << "Digite nombre de empleado: ";
    cin >> empleado;

    CoordenadaXY(5, 12);
    cout << "Digite el sueldo base de empleado: ";
    cin >> sueldoBruto;

    menosSegSocial = sueldoBruto * SEGURIDAD_SOCIAL;
    menosDescCoop = sueldoBruto * DESCUENTO_COOPERATIVA;

    sueldoNeto = sueldoBruto - (sueldoBruto * SEGURIDAD_SOCIAL);
    sueldoNeto = sueldoNeto - (sueldoNeto * DESCUENTO_COOPERATIVA);
    sueldoNeto = sueldoNeto - APORTE_CELEBRACIONES;

    ColorTexto(PREESTABLECIDO);
    CoordenadaXY(1, 18);
    TeclaPresionada ("\nPresionar ENTER para generar informe detallado");

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    BorraPantalla();

    ColorTexto(MAGENTACLARO);
    Centralizar ("^___^", 2);
    Centralizar ("( o.o )", 3);
    Centralizar ("> ^ <", 4);

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(2,1);
    cout << "^___^";
    CoordenadaXY(1,2);
    cout << "( o.o )";
    CoordenadaXY(2,3);
    cout << "> ^ <";

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(73,1);
    cout << "^___^";
    CoordenadaXY(72,2);
    cout << "( o.o )";
    CoordenadaXY(73,3);
    cout << "> ^ <";

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(2,21);
    cout << "^___^";
    CoordenadaXY(1, 22);
    cout << "( o.o )";
    CoordenadaXY(2,23);
    cout << "> ^ <";

    ColorTexto(AMARILLOCLARO);
    CoordenadaXY(73,21);
    cout << "^___^";
    CoordenadaXY(72,22);
    cout << "( o.o )";
    CoordenadaXY(73,23);
    cout << "> ^ <";

    ColorTexto(CIANCLARO);
    CoordenadaXY(5, 6);
    cout << "El sueldo bruto de " << empleado;
    CoordenadaXY(5, 7);
    cout << "es de:............................ " << sueldoBruto;

    ColorTexto(ROJOCLARO);
    CoordenadaXY(5, 9);
    cout << "Descuento Seguridad Social:....... " << menosSegSocial;

    CoordenadaXY(5, 11);
    cout << "Descuento Cooperativa:............ " << menosDescCoop;

    CoordenadaXY(5, 13);
    cout << "Aporte Celebraciones:............. " << APORTE_CELEBRACIONES;

    ColorTexto(VERDECLARO);
    CoordenadaXY(5, 15);
    cout << "El sueldo neto de " << empleado;
    CoordenadaXY(5, 16);
    cout << "es de:............................ " << sueldoNeto;

    ColorTexto(PREESTABLECIDO);
    CoordenadaXY(1, 16);
    TeclaPresionada ("\n\nPresionar ENTER para conocer a Churumusco ;)");
    BorraPantalla();

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Aqui dibujamos a Churumusco

    ColorFondoTexto(BLANCOCLARO);

    CoordenadaXY(21, 2);
    cout << "    ";
    CoordenadaXY(57, 2);
    cout << "    ";

    CoordenadaXY(21, 3);
    cout << "      ";
    CoordenadaXY(55, 3);
    cout << "      ";

    CoordenadaXY(21, 4);
    cout << "  ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(23, 4);
    cout << "  ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(25, 4);
    cout << "    ";

    CoordenadaXY(55, 4);
    cout << "  ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(57, 4);
    cout << "  ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(53, 4);
    cout << "  ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(59, 4);
    cout << "  ";

    CoordenadaXY(21, 5);
    cout << "  ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(23, 5);
    cout << "    ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(27, 5);
    cout << "    ";

    CoordenadaXY(35, 5);
    cout << "            ";

    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(55, 5);
    cout << "    ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(51, 5);
    cout << "    ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(59, 5);
    cout << "  ";

    CoordenadaXY(21, 6);
    cout << "  ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(23, 6);
    cout << "      ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(29, 6);
    cout << "                             ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(53, 6);
    cout << "      ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(59, 6);
    cout << "  ";

    CoordenadaXY(21,7);
    cout << "  ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(23, 7);
    cout << "  ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(25, 7);
    cout << "                                ";
    CoordenadaXY(47, 7);
    cout << "      ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(57, 7);
    cout << "  ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(59, 7);
    cout << "  ";

    CoordenadaXY(21, 8);
    cout << "        ";
    CoordenadaXY(38, 8);
    cout << "      ";
    CoordenadaXY(53, 8);
    cout << "        ";

    CoordenadaXY(21, 9);
    cout << "          ";
    CoordenadaXY(37, 9);
    cout << "        ";
    CoordenadaXY(51, 9);
    cout << "          ";

    CoordenadaXY(21, 10);
    cout << "          ";
    CoordenadaXY(37, 10);
    cout << "        ";
    CoordenadaXY(51, 10);
    cout << "          ";

    CoordenadaXY(23, 11);
    cout << "                                    ";

    CoordenadaXY(25, 12);
    cout << "               ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(40, 12);
    cout << "  ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(42, 12);
    cout << "               ";

    CoordenadaXY(25, 13);
    cout << "             ";
    ColorFondoTexto(MAGENTACLARO);
    CoordenadaXY(38, 13);
    cout << "      ";
    ColorFondoTexto(BLANCOCLARO);
    CoordenadaXY(44, 13);
    cout << "             ";

    CoordenadaXY(25, 14);
    cout << "                                ";

    CoordenadaXY(27, 15);
    cout << "        ";
    CoordenadaXY(37, 15);
    cout << "   ";
    CoordenadaXY(42, 15);
    cout << "   ";
    CoordenadaXY(47, 15);
    cout << "        ";

    CoordenadaXY(29, 16);
    cout << "        ";
    CoordenadaXY(40, 16);
    cout << "  ";
    CoordenadaXY(45, 16);
    cout << "   ";
    CoordenadaXY(47, 16);
    cout << "      ";

    CoordenadaXY(31, 17);
    cout << "                    ";

    CoordenadaXY(33, 18);
    cout << "                ";

    ColorFondoTexto(PREESTABLECIDO);
    cout << "\nGracias por su consulta :D";
    TeclaPresionada ("\nPresionar ENTER para salir\n");


    return 0;
}

void Centralizar (string texto, int linea)
{
    int x;

    x =  (80 - texto.length()) / 2;

    CoordenadaXY (x, linea);
    cout << texto;
}
