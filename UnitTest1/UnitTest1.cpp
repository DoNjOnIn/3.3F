#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\kaija\source\repos\3.3F\3.3F\Angle.cpp"
#include "C:\Users\kaija\source\repos\3.3F\3.3F\Angle.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            bool c;
            Angle x;
            Assert::AreEqual(x.getG(),60.0);
        }
    };
}