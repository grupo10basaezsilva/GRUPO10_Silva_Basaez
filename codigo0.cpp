#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int numero=0;
	int N=20;
	numero=rand()%(N+1);
	cout << "El numero aleatorio generado es: "<<numero<<endl;
	return 0;
}
