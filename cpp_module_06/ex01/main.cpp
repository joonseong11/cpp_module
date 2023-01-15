#include "Data.hpp"

int main() {
	Data var1;
	var1.data = 10;
	var1.description = "test1";
	
	COUT << "var1 of Data Struct" << ENL <<
		"address of var1 : " << &var1 << ENL <<
		"data : " << var1.data << ENL <<
		"description :" << var1.description << ENL << ENL;

	Data* fac = deserialize(serialize(&var1));

	COUT << ENL << "after factoring..." << ENL 
		<< "var1 of Data Struct" << ENL <<
		"address of var1 : " << fac << ENL <<
		"data : " << fac->data << ENL <<
		"description :" << fac->description << ENL << ENL;

	return 0;
}