#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project4.5\Project4.5\Figure.h"
#include "D:\Study\ООП\Project4.5\Project4.5\Figure.cpp"
#include "D:\Study\ООП\Project4.5\Project4.5\Rectangle.h"
#include "D:\Study\ООП\Project4.5\Project4.5\Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle r;
			int a = 2;
			int b = 3;
			int c = r.GetA() * r.GetB();
			c = r.Area();
			Assert::AreEqual(c, 6);
		}
	};
}
