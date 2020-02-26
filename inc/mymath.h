#include <server.h>

int add(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return x-y;
}

int mult(int x, int y){
	return x*y;
}

int dvd(int x, int y){
	return x/y;
}

int rvd(int x, int y){
	return x%y;
}

ucm::json division(int x, int y){
	int div = x/y;
	int rem = x%y;
	ucm::json ans;
	ans["div"] = div;
	ans["rem"] = rem;

	return ans;
}