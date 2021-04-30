/*
//---------------------------------------------
Name:              Armin Sharifiyan
Student ID:        130891203
Email:             asharifiyan1@myseneca.ca
Date:              3 / 18 / 2021
Workshop:          7
Part:              Lab
//----------------------------------------------
*/
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#include <iostream>
#include "Truck.h"

using namespace std;

namespace sdds {

	Truck::Truck(const char* plate, int year, int capacity, const char* add) : MotorVehicle(plate, year) {
		m_capacity = capacity;
		m_cargo = 0;
		MotorVehicle::moveTo(add);
	}

	bool Truck::addCargo(double cargo)
	{
		if (*this)
		{
			m_cargo += cargo;

			if (m_cargo >= cargo)
			{
				if (m_cargo > m_capacity)
				{
					m_cargo = m_capacity;
				}
				return true;
			}
		}
		m_cargo = m_capacity;
		return false;
	}

	bool Truck::unloadCargo()
	{
		if (!*this)
		{
			m_cargo = 0;

			if (m_cargo == 0)
			{
				return true;
			}
		}
		return false;
	}

	Truck::operator bool() const
	{
		return (m_cargo < m_capacity) ? true : false;
	}


	ostream& Truck::write(ostream& os)const
	{
		MotorVehicle::write(os) << " | " << m_cargo << "/" << m_capacity << "";

		return os;
		// TODO: insert return statement here
	}
	istream& Truck::read(istream& in)
	{
		MotorVehicle::read(in);
		cout << "Capacity: ";
		in >> m_capacity;

		cout << "Cargo : ";
		in >> m_cargo;

		return in;
		// TODO: insert return statement here
	}
	std::ostream& operator<<(std::ostream& ostr, const Truck& truck)
	{
		truck.write(ostr);

		return ostr;
		// TODO: insert return statement here
	}
	std::istream& operator>>(std::istream& istr, Truck& truck)
	{
		truck.read(istr);

		return istr;
		// TODO: insert return statement here
	}
}