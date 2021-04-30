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
#ifndef SDDS_MOTORVEHICLE_H_
#define SDDS_MOTORVEHICLE_H_
#include <iostream>

 namespace sdds {

class MotorVehicle
{
	char license_plate[9] = { '\0' };
	char m_adds[64] = { '\0' };
	int m_year;

public:
	MotorVehicle(const char* plate, int year);
	void moveTo(const char* address);

	std::ostream& write(std::ostream& os)const;
	std::istream& read(std::istream& in);
};
std::ostream& operator<<(std::ostream& ostr, const MotorVehicle& vehicle);
std::istream& operator>>(std::istream& istr, MotorVehicle& vehicle);

}

#endif // !SDDS_MOTORVEHICLE_H_
