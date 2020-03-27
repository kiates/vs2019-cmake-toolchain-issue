#include <iostream>
#include <custom-header.h>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	cout << sdk_arch_function() << endl;
	return 0;
}
