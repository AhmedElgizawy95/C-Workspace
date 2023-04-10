#include<iostream>

#include"employees.h" // Include the header file for the Employee class

void Employee::display()
{
    // Display the information of the employee
    std::cout << "ID: "<< mEmployeeID << " First Name: " << mFirstName << " LastName: " << mLastName << " Salary: " << mSalary << " " << " Hired Status: " << mHired << std::endl; 
}

void Employee::setFirstName(std::string name)
{
    // Set the first name of the employee
    mFirstName = name;
}

void Employee::setLastName(std::string name)
{
    // Set the last name of the employee
    mLastName = name;
}

void Employee::setID(std::uint16_t id)
{
    // Set the ID of the employee
    mEmployeeID = id;
}

void Employee::setSalary(std::uint16_t salary)
{
    // Set the salary of the employee
    mSalary = salary;
}

void Employee::setHire(bool hired)
{
    // Set the hire status of the employee
    mHired = hired;
}

std::string Employee::getFirstName()
{
    // Get the first name of the employee
    return mFirstName;
}

std::string Employee::getLastName()
{
    // Get the last name of the employee
    return mLastName;
}

std::uint16_t Employee::getID()
{
    // Get the ID of the employee
    return mEmployeeID;
}

std::uint16_t Employee::getSalary()
{
    // Get the salary of the employee
    return mSalary;
}

bool Employee::getHire()
{
    // Get the hire status of the employee
    return mHired;
}