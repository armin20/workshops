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

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include "Rectangle.h"

using namespace std;
namespace sdds {

	Rectangle::Rectangle() : LblShape()
	{
		m_height = 0;
		m_width = 0;
	}

	Rectangle::Rectangle(const char* label, int width, int length) : LblShape(label)
	{
		m_width = width;
		m_height = length;

		if (m_height < 3 || ((int)m_width < (int)(strlen(label) + 2)))
		{
			m_height = 0;
			m_width = 0;
		}
	}

	void Rectangle::getSpecs(std::istream& istr)
	{
		string line;
		
		 LblShape::getSpecs(istr);
		 istr >> m_width;

		 getline(istr, line, ',');

		 istr >> m_height;

		istr.ignore(1000, '\n');

	}

	void Rectangle::draw(std::ostream& os) const
	{
		if (m_height != 0 && m_width != 0)
		{
			//Line 1

			os << '+';
			os.fill('-');
			os.width((int)m_width - 2);
			os << '-';
			os << '+' << endl;


			//Line 2 with Label content

			os.setf(ios::left);
			os << "|";
			os.fill(' ');
			os.width(((int)m_width - 2));
			os << LblShape::label();
			os << "|" << endl;
			os.unsetf(ios::left);


			//Line m_height - 3, I create a loop for each of the line that needs to be printed. The reason I use loop is that the height of the label is depend on what the user give to the program

			for (int i = 0; i < (int)m_height - 3; i++)
			{
				os << "|";
				os.width((int)m_width - 2);
				os.fill(' ');
				os << ' ';
				os << "|" << endl;
			}





			//Last Line
			os << '+';
			os.fill('-');
			os.width((int)m_width - 2);
			os << '-';
			os << '+';
		}
	}
}