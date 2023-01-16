#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "=========== given main.cpp =========" << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	std::cout << "=========== new part of main.cpp =========" << std::endl;

	Array<double> arr1;
	std::cout << "size : " << arr1.size() << std::endl;
	Array<int> arr2(3);
	arr2[0] = 1;
	arr2[1] = 3;
	arr2[2] = 5;
	std::cout << "value of [0] : " << arr2[0] << std::endl;
	std::cout << "value of [1] : " << arr2[1] << std::endl;
	std::cout << "value of [2] : " << arr2[2] << std::endl;
	
	Array<int> arr3(5);
	arr3 = arr2;
	Array<std::string> arr4(2);
	arr4[0] = "hgi";
	std::cout << arr4[0] << std::endl;
	std::cout << arr4[1] << std::endl;

	Array<std::string> arr5(arr4);
	std::cout << arr5[0] << std::endl;
	std::cout << arr5[1] << std::endl;
	arr5[0] = "convert";
	std::cout << arr4[0] << std::endl;
	std::cout << arr4[1] << std::endl;
	std::cout << arr5[0] << std::endl;
	std::cout << arr5[1] << std::endl;
    return 0;
}