#include "pch.h"
#include "CppUnitTest.h"
#include "../AP.laba.5.1/AP.laba.5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t;
            t = h(0, 1);
            Assert::AreEqual(t, 1.0);
        }

        TEST_METHOD(TestMethod2)
        {
            double t;
            t = h(2, 0);
            Assert::AreEqual(t, 0.0);
        }
    };
}