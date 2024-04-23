#include <iostream>
#include "VectorN.h"

using namespace std;

int main() {
	VectorN vector;
	VectorN vector1;


	try{
		cin >> vector;
		cout << vector;
	}
	catch(int)
	{
		cout << "Vector size cannot be 0!";
		exit(0);
	}
	try{
		cin >> vector1;
		cout << vector1;
	}
	catch (int) {
		cout << "Vector size cannot be 0!";
		exit(0);
	}

	try{
		cout << "Vector length: " << ~vector << endl;
	}
	catch (int) {
		cout << "Vector size cannot be 0!";
		exit(0);
	}

	cout << "Are vectors equal?: ";
	if (vector == vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 > vector2: ";
	if (vector > vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 < vector2: ";
	if (vector < vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vectors length equal?: ";
	if (vector != vector1) { cout << "no" << endl; }
	else cout << "yes" << endl;
	cout << "Are vector1 length > vector2 length: ";
	if (vector >= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 length < vector2 length: ";
	if (vector <= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	int x = 0;
	cout << "Enter scalar: "; cin >> x;
	try { 
		vector * x; 
	}
	catch (int) {
		cout << "Scalar cannot be 0";
		exit(0);
	}
	cout << "After scal" << vector;


	cout << "VectorCount: " << VectorN::Count() << endl;
	cout << "ObjectCount: " << Object::Count() << endl;
}