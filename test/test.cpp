#include <igloo/igloo.h>
#include <mymath.h>

using namespace igloo;


Context(AdditionFunction){
	Spec(NegOnePlusOneIsZero){
		Assert::That(add(-1, 1), Equals(0));
	};

	Spec(TwoPlusOneIsThree){
		Assert::That(add(2, 1), Equals(3));
	};
};
Context(SubtractionFunction){
	Spec(ThreeMinusThree){
		Assert::That(sub(3,3), Equals(0));
	};
	Spec(FourMinusTwo){
		Assert::That(sub(4,2), Equals(2));
	};
};

Context(MultiplicationFunction){
	Spec(ThreeTimesThree){
		Assert::That(mult(3,3), Equals(9));
	};
	Spec(FourTimesTwo){
		Assert::That(mult(4,2), Equals(8));
	};
	Spec(NegOneTimesFive){
		Assert::That(mult(-1,5), Equals(-5));
	};
};

int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}
