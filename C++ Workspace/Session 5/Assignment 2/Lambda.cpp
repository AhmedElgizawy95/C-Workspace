#include <iostream>

// The main function
int main()
{
    // Declare a string variable called name 
    //Not best practice to leave it blank but just for this example
    std::string name;

    // Declare an unsigned 16-bit integer variable called age 
    //Not best practice to leave it blank but just for this example
    uint16_t age ;

    // Define a lambda function called introduce that takes no arguments and returns nothing
    auto introduce = [&name, &age]() -> void
    {
        // Change the value of the name variable to "Ahmed Alaa"
        name = "Ahmed Alaa";

        // Change the value of the age variable to 27
        age = 27;

        // Print the name and age variables to the console
        std::cout << "Name: " << name << "       Age: " << age << std::endl;
    };

    // Call the introduce function
    introduce();

    // Return 0 to indicate successful program execution
    return 0;
}