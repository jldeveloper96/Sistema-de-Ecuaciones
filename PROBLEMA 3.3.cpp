/* 3.3 Escribe un programa que lea los coeficientes a, b, d, e, f de un sistema lineal de dos ecuaciones con
dos incógnitas y muestre la solución:

ax + by = c
dx + ey = f

*/

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]){
	
	float x, y, a, b, c, d, e, f, denominador;
	
			cout << "Escribe un valor para a:" << " " <<endl;
			cin >> a;
			cout << "Escribe un valor para b:" << " " <<endl;
			cin >> b;
			cout << "Escribe un valor para c:" << " " <<endl;
			cin >> c;
			cout << "Escribe un valor para d:" << " " <<endl;
			cin >> d;
			cout << "Escribe un valor para e:" << " " <<endl;
			cin >> e;
			cout << "Escribe un valor para f:" << " " <<endl;
			cin >> f;
	
	denominador = e * a - b * d;
	
	if (denominador == 0) 
	 cout << "No tiene solucion" << endl;
		
	else {
	
			x = (e * c - b * f) / (e * a - b * d);
			y = (c - a * x) / b;
	
			cout << "Este es el valor de x:" << " " << x << endl;
			cout << "Este es el valor de y:" << " " << y << endl;
     }
	system("PAUSE");
	return EXIT_SUCCESS;
	
	
	
	
}

