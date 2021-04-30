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
#include "LblShape.h"

using namespace std;

namespace sdds {

	LblShape::LblShape()
	{
	}

	LblShape::LblShape(const char* label) {

		delete[] m_label;
		m_label = nullptr;

		m_label = new char[strlen(label) + 1];

		strcpy(m_label, label);

	}
	LblShape::~LblShape()
	{
			delete[] m_label;
			m_label = nullptr;
	}

	void LblShape::getSpecs(std::istream& istr)
	{

		string label;

		getline(istr, label, ',');

		delete[] m_label;
		m_label = nullptr;
		m_label = new char[strlen(label.c_str()) + 1];

		strcpy(m_label, label.c_str());
	}
}
