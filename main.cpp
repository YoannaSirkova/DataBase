#include <iostream>
#include "Cell.hpp"
int main()
{
	int x;
	std::cin >> x;
	Cell<int> a(x);
	std::cout << a.getCellValue() << std::endl;
	return 0;

}