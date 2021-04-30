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
#include "Line.h"
#include "LblShape.h"
using namespace std;

namespace sdds {

	Line::Line() {

		m_length = 0;
	}

	Line::Line(const char* s, int length) : LblShape(s){

		m_length = length;
	}

	void Line::getSpecs(std::istream& istr)
	{
		LblShape::getSpecs(istr);

		istr >> m_length;
		istr.ignore(m_length, '\n');

	}

	void Line::draw(std::ostream& os) const
	{
		if (m_length > 0 && LblShape::label() != nullptr)
		{
			os << LblShape::label() << endl;
			os.fill('=');
			
			os.width((int)m_length);
			os << '=';
		}
	}
}

