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

#pragma once

#ifndef SDDS_TRUCK_H_
#define SDDS_TRUCK_H_
#include <iostream>
#include "MotorVehicle.h"

namespace sdds {

	class Truck : public MotorVehicle
	{
		double m_capacity;
		double m_cargo;

	public:
		Truck(const char* plate, int year, int capacity, const char* add);
		bool addCargo(double cargo);
		bool unloadCargo();
		operator bool()const;
		std::ostream& write(std::ostream& os)const;
		std::istream& read(std::istream& in);


	};
	std::ostream& operator<<(std::ostream& ostr, const Truck& truck);
	std::istream& operator>>(std::istream& istr, Truck& truck);
}

#endif // !SDDS_TRUCK_H_