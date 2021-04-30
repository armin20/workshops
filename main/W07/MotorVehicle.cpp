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


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MotorVehicle.h"
#include "cstring.h"

using namespace std;

namespace sdds {

    MotorVehicle::MotorVehicle(const char* plate, int year)
    {
        strCpy(license_plate, plate);
        strCpy(m_adds, "Factory");
        m_year = year;
    }

    void MotorVehicle::moveTo(const char* address)
    {

        if (strCmp(address, m_adds))
        {
            cout << "|";
            cout.setf(ios::right);
            cout.width(8);
            cout << license_plate;
            cout << "| |";
            cout.width(20);
            cout << m_adds;
            cout.unsetf(ios::right);
            cout << " ---> ";
            cout.setf(ios::left);
            cout.width(20);
            cout << address;
            cout.unsetf(ios::left);
            cout << " |" << endl;
        }
        strCpy(m_adds, address);
    }

    ostream& MotorVehicle::write(ostream& os)const
    {
        os << "| " << m_year << " | " << license_plate << " | " << m_adds << "";
        
        return os;
        // TODO: insert return statement here
    }

    istream& MotorVehicle::read(istream& in)
    {
        cout << "Built year: ";
        in >> m_year;
        cout << "License plate: ";
        in >> license_plate;
        cout << "Current location: ";
        in >> m_adds;

        return in;
        // TODO: insert return statement here
    }

    std::ostream& operator<<(std::ostream& ostr, const MotorVehicle& vehicle)
    {
        vehicle.write(ostr);

        return ostr;
        // TODO: insert return statement here
    }
    std::istream& operator>>(std::istream& istr, MotorVehicle& vehicle)
    {
        vehicle.read(istr);

        return istr;
        // TODO: insert return statement here
    }
}