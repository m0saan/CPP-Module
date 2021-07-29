#include <iostream>

int main()
{
	int* value ( new (std::nothrow) int ); // value will be set to a null pointer if the integer allocation fails

	return 0;
}