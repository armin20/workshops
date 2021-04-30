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

#pragma once

#ifndef SDDS_SHAPE_H_
#define SDDS_SHAPE_H_

#include <iostream>

namespace sdds {

class Shape{

public:
	virtual void draw(std::ostream& os)const = 0;
	virtual void getSpecs(std::istream& istr) = 0;

	virtual ~Shape();
};

std::ostream& operator<<(std::ostream& ostr, const Shape& shape);
std::istream& operator>>(std::istream& istr, Shape& shape);

}

#endif // !SDDS_SHAPE_H_
