/*
//---------------------------------------------
Name:              Armin Sharifiyan
Student ID:        130891203
Email:             asharifiyan1@myseneca.ca
Date:              3 / 24 / 2021
Workshop:          8
Part:              Lab
//----------------------------------------------
*/
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.



#include <iostream>
#include "Shape.h"

using namespace std;
namespace sdds {

	std::ostream& operator<<(std::ostream& ostr, const Shape& shape)
	{
		shape.draw(ostr);

		return ostr;
		// TODO: insert return statement here
	}

	std::istream& operator>>(std::istream& istr, Shape& shape)
	{
		shape.getSpecs(istr);

		return istr;
		// TODO: insert return statement here
	}

	Shape::~Shape()
	{
	}
}