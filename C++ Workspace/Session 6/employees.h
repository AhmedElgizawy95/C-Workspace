#ifndef     EMPLOYEE_H
#define     EMPLOYEE_H

#include<iostream>

class Employee
{
public:

void display();

void setFirstName(std::string name);

void setLastName(std::string name);

void setID(std::uint16_t id);

void setSalary(std::uint16_t salary);

void setHire(bool hired);

std::string getFirstName();


std::string getLastName();

std::uint16_t getID();

std::uint16_t getSalary();

bool getHire();

private:

std::uint16_t mEmployeeID;

std::string mFirstName;

std::string mLastName;

std::uint16_t mSalary;

bool mHired;

};


#endif