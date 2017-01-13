#include <iostream>
#include "../Example.hpp"
#include "../Second.hpp"

int main()
{
	std::cout << "Hello world" << std::endl;
    Example example("dupa");

    std::cout << example.getName() << std::endl;
    Second sec(65);
    std::cout << sec.getCount() << std::endl;
    

	return 0;
}