#pragma once 

#include <iostream>
#include <vector>
#include "Cell.hpp"

template <class T>
class Colum
{
	std::string type;
	std::vector<Cell<T>*> colum;
public:
	Colum(const std::string input_type,const std::vector<Cell<T>*>& input_colum);
	Cell<T>& GetCell(size_t i);
	void AddCell(const Cell<T>& cell);
	void AddCellInPosition(const Cell<T>& cell, size_t position);
	void Print();

};

template<class T>
inline Colum<T>::Colum(const std::string input_type, const std::vector<Cell<T>*>& input_colum)
{
	type = input_type;
	for (size_t i = 0; i < input_colum.size(); i++)
		colum.push_back(input_colum[i]);
}

template<class T>
inline Cell<T>& Colum<T>::GetCell(size_t i)
{
	return *colum[i];
}

template<class T>
inline void Colum<T>::AddCell(const Cell<T>& cell)
{
	colum.push_back(cell);
}

template<class T>
inline void Colum<T>::AddCellInPosition(const Cell<T>& cell, size_t position)
{
	while (position < 0 && position >= colum.size())
	{
		std::cout << "Please enter valid position for adding cell: ";
		std::cin >> position;
	}
	colum.insert(position, cell);
}

template<class T>
inline void Colum<T>::Print()
{
	for (size_t i = 0; i < colum.size(); i++)
		this->GetCell(i).Print();
}
