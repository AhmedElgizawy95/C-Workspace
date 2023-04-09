#include<iostream>

// Declare a function called PrintString that takes a string as input and prints the string using std::cout
void PrintString(std::string stringFromUser);

// The main function
int main()
{
    // Declare a function pointer called ptrToFunction that takes a string as input and returns nothing
    void (*ptrToFunction) (std::string) ;//= &PrintString;
ptrToFunction = &PrintString;
    // Call the function pointed to by ptrToFunction with the string "Hello World" as an argument
    ptrToFunction("Hello World");

    // Return 0 to indicate successful program execution
    return 0;
}

// Define the PrintString function
void PrintString(std::string stringFromUser)
{
    // Print the input string to the console
    std::cout << stringFromUser << std::endl;
}