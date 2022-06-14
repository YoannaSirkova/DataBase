#include <iostream>
#include "Cell.hpp"
#include "Colum.hpp"
int main()
{
	int x,y,z;
	std::cin >> x >> y >> z;
	Cell<int> a(x);
	Cell<int> b(y);
	Cell<int> c(z);
	Cell<int> d;
	///*std::cout << a.getCellValue() << std::endl;
	//std::cout << b.getCellValue() << std::endl;
	//std::cout << c.getCellValue() << std::endl;*/


	std::vector<Cell<int>*> vec;
	vec.push_back(&a);
	vec.push_back(&b);
	vec.push_back(&c);
	vec.push_back(&d);
	Colum<int> col("int",vec);
	col.Print();

	Cell<std::string> e("\"neshto\"");
	e.Print();

	Cell<std::string> f("\\\\dve cherti\\");
	f.Print();


	return 0;

}