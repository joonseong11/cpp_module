// #include <typeinfo>
#include <iostream>

class Shape {
public:
   virtual void virtualfunc() const {}
};

class Circle: public Shape {
public:
   virtual void virtualfunc() const {}
};

using namespace std;
int main() {
   Shape shape_instance;
   Shape& ref_shape = shape_instance;
   try {
      Circle& ref_circle = dynamic_cast<Circle&>(ref_shape);
   }
   catch (std::exception & b) {
      cout << "Caught: " << b.what();
   }

std::cout << "===============" << std::endl;
	Circle circle_instance2;
   Shape* shape_instance2 = &circle_instance2;
	try {
		Circle* test = dynamic_cast<Circle*>(shape_instance2);
		if (test == NULL)
			std::cout << "ptr NULL " << std::endl;
		else
			std::cout << "ptr is not NULL" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "excpetion" << std::endl;
	}
}