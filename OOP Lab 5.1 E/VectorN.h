#pragma once
#include "Object.h"
#include <string>
#include <iostream>
using namespace std;

class VectorN : public Object {
private:
	static const int MAX_SIZE = 100;
	int size;
	int vector[MAX_SIZE];
public:
	VectorN();
	VectorN(int size);
	VectorN(const VectorN& o);

	~VectorN() {}

	friend VectorN operator*(const VectorN& a, double value);

	int getElem(int value) const { return vector[value]; }
	void setElem(int index, int value) { vector[index] = value; }
	int getSize() const { return size; };
	void setSize(int value) { size = value; };

	friend ostream& operator<<(std::ostream& out, const VectorN& integer);
	friend istream& operator>>(std::istream& in, VectorN& integer);
	friend double operator~(const VectorN& vec);
	friend VectorN operator*(VectorN& vec, int value);
	friend bool operator ==(const VectorN& vector1, const VectorN& vector2);
	friend bool operator >(const VectorN& vector1, const VectorN& vector2);
	friend bool operator <(const VectorN& vector1, const VectorN& vector2);
	friend bool operator !=(const VectorN& vector1, const VectorN& vector2);
	friend bool operator >=(const VectorN& vector1, const VectorN& vector2);
	friend bool operator <=(const VectorN& vector1, const VectorN& vector2);

	operator std::string() const;
};
