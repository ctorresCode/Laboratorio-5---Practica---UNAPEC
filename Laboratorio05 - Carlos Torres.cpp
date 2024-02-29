#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

// ................................................................................
//Nombre del programa......................... Laboratorio 5
//Objetivo.................................... El objetivo de este programa es tener varios programas dentro de un menu
//Fecha....................................... 27/2/2024
//Programado por.............................. Carlos Rafael Torres Graciano 
//Modificado por..............................
//Fecha de modificacion.......................
// ...............................................................................


using namespace std;

void CalcularCoeficienteBinomial(int respuesta,int n, int p, int factorialN, int factorialP, int formula, int factorialn_p, int resultadoResta) {
	factorialN = 1;
	factorialP = 1;
	factorialn_p = 1;
	cout << "Ingrese los valores de n y p para obtener el coeficiente binomial" << endl;
	cin >> n;
	cin >> p;
	resultadoResta = n - p;

	for (int i = 1; i <= n; i++) {
		factorialN *= i;
	}

	for (int i = 1; i <= p; i++) {
		factorialP *= i;
	}
	
	for (int i = 1; i <= n - p; i++) {
		factorialn_p *= i;
	}

	formula = factorialN / (factorialP * factorialn_p);
	cout << "\nEl coeficiente binomial de los 2 numeros ingresados es: " << formula << endl;

	cout << "Ingrese 1 si desea obtener el coeficiente binomial de lo contrario pulse cualquier tecla si desea finalizar" << endl;
	cin >> respuesta;
	if (respuesta == 1) {
		CalcularCoeficienteBinomial(0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void CalcularAreaTriangulo(int respuesta,double ladoA, double ladoB, double ladoC, double area, double perimetro) {
	cout << "Ingrese los lados a, b y c del triangulo" << endl;
	cin >> ladoA;
	cin >> ladoB;
	cin >> ladoC;
	perimetro = (ladoA + ladoB + ladoC) / 2;
	area = sqrt(perimetro * (perimetro - ladoA) * (perimetro - ladoB) * (perimetro - ladoC));
	cout << fixed << setprecision(2);
	cout << "\n\nEl area del triangulo de acuerdo a sus lados es: " << area << endl;

	cout << "\n\nIngrese 1 si desea obtener el area del triagulo de acuerdo a sus lados de lo contrario pulse cualquier tecla si desea finalizar el programa" << endl;
	cin >> respuesta;
	if (respuesta == 1) {
		CalcularAreaTriangulo(0, 0, 0,0,0,0);
	}

}


void ObtenerNumerosPrimos(int respuesta, int creciente, int numeroIngresado, bool esPrimo, int resultado) {
	cout << " \n\nIngrese un numero para obtener todos lo numeros primos menores al ingresado" << endl;
	cin >> numeroIngresado;

	for (int i = 2; i <= numeroIngresado; i++) {
		creciente = 2;
		esPrimo = true;
		while (esPrimo && creciente < i) {
			if (i % creciente == 0) {
				esPrimo = false;
			}
			else {
				creciente++;
			}
		}

		if (esPrimo) {
			cout << i << " Es un numero primo" << endl;
		}
	}

	cout << "\n\nIngrese 1 si desea obtener los numeros primos de lo contrario pulse cualquier tecla si desea finalizar el programa" << endl;
	cin >> respuesta;
	if (respuesta == 1) {
		ObtenerNumerosPrimos(0, 0, 0, 0, 0);
	}
}


void MultiplicarArreglos(int respuesta,int numeroIngresado, int resultado) {
	int arreglo[4]{};
	cout << "Ingrese 4 valores para el arreglo para que se multipliquen con su numero ingresado" << endl;
	for (int i = 0; i <= 3; i++) {
		cin >> arreglo[i];
	}

	cout << "Ingrese un valor para que se multiplique con los valores del arreglo" << endl;
	cin >> numeroIngresado;

	cout << "\n\nEl resultado de " << numeroIngresado << " X " << arreglo[0] << " = " << numeroIngresado * arreglo[0] << endl;
	cout << "\n\nEl resultado de " << numeroIngresado << " X " << arreglo[1] << " = " << numeroIngresado * arreglo[1] << endl;
	cout << "\n\nEl resultado de " << numeroIngresado << " X " << arreglo[2] << " = " << numeroIngresado * arreglo[2] << endl;
	cout << "\n\nEl resultado de " << numeroIngresado << " X " << arreglo[3] << " = " << numeroIngresado * arreglo[3] << endl;

	cout << "\n\nIngrese 1 si desea obtener la multiplicacion del arreglo de lo contrario pulse cualquier tecla si desea finalizar el programa" << endl;
	cin >> respuesta;
	if (respuesta == 1) {
		MultiplicarArreglos(0, 0, 0);
	}

}

void ObtenerMediaMatriz(int respuesta,int n, int m, int suma, int media) {
	int matriz[10][10]{};

	cout << "\nIngrese el numero de filas de la matriz" << endl;
	cin >> n;
	cout << "\nIngrese el numero de columnas de la matriz" << endl;
	cin >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "\nDigite el valor en la posicion [" << i << "][" << j << "]" << endl;
			cin >> matriz[i][j];
		}
	}

	int sumaGeneral = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			suma += matriz[i][j];
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

	media = suma / (n * m);
	cout << "La suma general de la matriz es: " << suma << endl;
	cout << "La media de la matriz es: " << media << endl;
}

void MenuOpciones(int respuesta) {
	cout << "\n\nIngrese que programa desea correr de acuerdo al numero" << endl;
	cout << "\n\n1 - Obtener coeficiente binomial " << endl;
	cout << "2 - Obtener area del triangulo " << endl;
	cout << "3 - Obtener numeros primos " << endl;
	cout << "4 - Obtener la multiplicacion de los valores de un arreglo " << endl;
	cout << "5 - Obtener la multiplicacion de una matriz " << endl;
	cout << endl;
	cin >> respuesta;

	switch (respuesta)
	{
		case (1):
			CalcularCoeficienteBinomial(0, 0, 0, 0, 0, 0, 0, 0);
			break;


		case (2):
			CalcularAreaTriangulo(0, 0, 0, 0, 0, 0);
			break;

		case (3):
			ObtenerNumerosPrimos( 0, 0, 0, 0, 0);
			break;


		case (4):
			MultiplicarArreglos(0, 0, 0);
			break;

		case (5):
			ObtenerMediaMatriz(0, 0, 0, 0, 0);
			break;

		default:
			cout << "\n\nHa ingresado un valor no valido, intentelo de nuevo" << endl;
			MenuOpciones(0);
		}
}



int main()
{
	MenuOpciones(0);
	system("pause");
}

