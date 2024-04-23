#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 5.1 E/VectorN.h"
#include "..//OOP Lab 5.1 E/VectorN.cpp"
#include "..//OOP Lab 5.1 E/Object.h"
#include "..//OOP Lab 5.1 E/Object.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			VectorN vec(3);
			Assert::AreEqual(3, vec.getSize());
		}
	};
}
