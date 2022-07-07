#include "CppUnitTest.h"

#include "../i343-native-static-library/mathematics.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace i343::static_math::tests
{
	TEST_CLASS(mathematics_tests)
	{
	public:
		TEST_METHOD(test_add)
		{
			const double sum = mathematics::add(1, 1);

			Assert::AreEqual(2.0, sum, 0.0125);
		}
	};
}
