#pragma once 

#include <iostream>
#include <vector>
#include "Cell.hpp"

template <class T>
class Colum
{
	std::vector<*Cell<T>> colum;
public:
	Colum(const Cell<T>& cell);
	Cell<T>* GetCell(size_t i);


};