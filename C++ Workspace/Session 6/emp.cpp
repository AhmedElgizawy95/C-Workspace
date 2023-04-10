#include <iostream> // Include the necessary header file for input/output operations

#include "employees.h" // Include the header file for the Employee class

int main()
{
    Employee emp; // Create an instance of the Employee class

    emp.setFirstName("Ahmed"); // Set the first name of the employee
    emp.setLastName("Alaa"); // Set the last name of the employee

    emp.setID(1310); // Set the ID of the employee
    emp.setSalary(12000); // Set the salary of the employee
    emp.setHire(true); // Set the hire status of the employee

    emp.display(); // Display the information of the employee

    return 0; // Return 0 to indicate successful program execution
}