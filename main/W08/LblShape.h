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
#ifndef SDDS_LBLSHAPE_H_
#define SDDS_LBLSHAPE_H_

#include <iostream>
#include "Shape.h"

namespace sdds {

class LblShape : public Shape {
	char* m_label = nullptr;

public:
	LblShape();
	LblShape(const char* label);
	~LblShape();

	void getSpecs(std::istream& istr);

	LblShape(const LblShape& source) = delete;
	LblShape& operator=(const LblShape& soucre) = delete;

protected:

	char* label() const { return m_label; };
};

}
#endif // !SDDS_LBLSHAPE_H_
