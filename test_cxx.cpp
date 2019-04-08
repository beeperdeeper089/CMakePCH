#include "precompiled.hpp"
#include "test_cxx.hpp"

#include <iostream>

void HelloWorld::sayHello()
{
	std::cout << "Hello Precompiled Headers!" << std::endl;
}

int main(int argc, char** argv)
{
	auto me = HelloWorld();

	me.sayHello();

	return 0;
}
