#pragma once
#include <iostream>
using namespace std;

class Cpoint {
	int x, y;
public:
	Cpoint(int abs = 0, int ord = 0) { x = abs; y = ord; }
	~Cpoint() { cout << "destruction du point adresse :" << this << endl; }
	// la méthode coincide
};
// ********* PROGRAMME PRINCIPAL ***********
int main() {
	Cpoint a(1, 0), b(1), c;
	// appel de la fonction coincide pour comparer a et b puis a et c
	return 0;
}