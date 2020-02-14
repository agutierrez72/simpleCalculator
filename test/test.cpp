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
Context(DivisionFunction){
	Spec(FiveDivThree){
		Assert::That(dvd(5,3), Equals(1));
	};
	Spec(ThreeDivThree){
		Assert::That(dvd(3,3), Equals(1));
	};
};

Context(RemFunction){
	Spec(TwoRemTwo){
		Assert::That(rvd(2,2), Equals(0));
	};
	Spec(FiveRemThree){
		Assert::That(rvd(5,3), Equals(2));
	};
};

Context(DivJsonFunction){

	Spec(FiveDivTwo){
		ucm::json ans;
		ans["div"] = 2;
		ans["rem"] = 1;

		Assert::That(div(5,2), Equals(ans));
	};
};


int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}
