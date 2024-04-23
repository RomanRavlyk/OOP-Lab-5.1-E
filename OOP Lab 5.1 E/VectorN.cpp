#include "VectorN.h"
#include <iostream>
#include <sstream>
using namespace std;

VectorN::VectorN() {
	for (int i = 0; i < getSize(); i++) {
		setElem(i, 0);
	}
}

VectorN::VectorN(int size) : size(size) {
	try {
		if (size == 0) {
			throw size;
		};
	}
	catch (int) {
		cout << "Vector size cannot be 0!";
	}
	for (int i = 0; i < size; i++) {
		vector[i] = 0;
	}
}

VectorN::VectorN(const VectorN& vec) : size(vec.size) {
	try{
		if (size == 0) {
			throw size;
		};
	}
	catch (int) {
		cout << "Vector size cannot be 0!";
	}
	for (int i = 0; i < size; i++) {
		vector[i] = vec.vector[i];
	}
}


bool operator==(const VectorN& vector1, const VectorN& vector2) {
	if (vector1.getSize() != vector2.getSize()) {
		return false;
	}

	for (int i = 0; i < vector1.getSize(); ++i) {
		if (vector1.getElem(i) != vector2.getElem(i)) {
			return false;
		}
	}

	return true;
}

bool operator<(const VectorN& vector1, const VectorN& vector2) {
	return vector1.getSize() < vector2.getSize();
}

bool operator>(const VectorN& vector1, const VectorN& vector2) {
	return vector1.getSize() > vector2.getSize();
}

double operator~(const VectorN& vec) {
	double length = 0.0;
	if (vec.size == 0) {
		throw vec.size;
	}
	for (int i = 0; i < vec.getSize(); i++) {
		length += vec.getElem(i) * vec.getElem(i);
	}
	return sqrt(length);
}

VectorN operator*(VectorN& vector, int value) {
	int somenum;
	if (value == 0) {
		throw value;
	}
	for (int j = 0; j < vector.getSize(); j++) {
		somenum = vector.getElem(j) * value;
		vector.setElem(j, somenum);
	}
	return vector;
}

bool operator >=(const VectorN& vec1, const VectorN& vec2) {
	return ~vec1 > ~vec2;
}
bool operator <=(const VectorN& vec1, const VectorN& vec2) {
	return ~vec1 < ~vec2;
}
bool operator !=(const VectorN& vec1, const VectorN& vec2) {
	return ~vec1 != ~vec2;
}

ostream& operator << (ostream& out, const VectorN& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, VectorN& r)
{
	cout << " Enter size = "; in >> r.size;
	if (r.size == 0) {
		throw r.size;
	}
	for (int i = 0; i < r.size; i++) {
		cout << "Enter vector Elements: ";
		in >> r.vector[i];
	}

	cout << endl;
	return in;
}

VectorN::operator string() const {
	stringstream ss;
	ss << "Your array: ";
	for (int i = 0; i < size; i++) {
		ss << vector[i] << " ";
	}
	ss << endl;
	return ss.str();
}
