#pragma once
#include <iostream>

template  <typename T>
class Cell
{
	T value;
public:
	Cell(const T other);
	T getCellValue();
	void Print();

};


template<typename T>
Cell<T>::Cell(const T other)
{
	value = other;
}

template<typename T>
T Cell<T>::getCellValue()
{
	return value;
}


template<typename T>
void Cell<T>::Print()
{
	std::cout << value << std::endl;
}


