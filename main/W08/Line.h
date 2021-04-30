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

#ifndef SDDS_LINE_H_
#define SDDS_LINE_H_

#include <iostream>
#include "LblShape.h"

namespace sdds {

	class Line : public LblShape
	{
		unsigned m_length;

	public:

		Line();
		Line(const char* s, int length);
		void getSpecs(std::istream& istr);

		void draw(std::ostream& os)const;
	
	};


}
#endif // !SDDS_LINE_H_
