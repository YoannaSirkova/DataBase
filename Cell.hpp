#pragma once
#include <iostream>

template  <typename T>
class Cell
{
	
	T value;
public:
	Cell();
	Cell(const T other);
	T getCellValue();

	friend bool operator== (Cell<T>& other_cell, Cell<T>& cell)
	{
		return other_cell.getCellValue() == cell.getCellValue();
	}
	void Print();
	

};


template<typename T>
inline Cell<T>::Cell()
{
	value = T();           
}

template<typename T>
inline Cell<T>::Cell(const T other)
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
	Cell<T> helper;
	if (value == helper.getCellValue()) std::cout << "NULL" << std::endl;
	else std::cout << value << std::endl;
}




