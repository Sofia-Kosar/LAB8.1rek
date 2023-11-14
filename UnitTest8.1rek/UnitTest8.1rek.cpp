#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS 
#include "CppUnitTest.h"
#include "../LAB8.1rek/LAB8.1rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rek
{
	TEST_CLASS(UnitTest81rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[] = "aabbcc"; 
			int result1 = Count(str1, 0);

			Assert::AreEqual(3, result1); 
			
		}
	};
}
