#include <iostream>

// This is a namespace that contains functions for performing basic math operations
namespace Calculate {
    // This function adds two numbers and returns the result
    float add(float firstNumber, float secondNumber)
     {
        return firstNumber + secondNumber;
    }
    
    // This function subtracts two numbers and returns the result
    float subtract(float firstNumber, float secondNumber) 
    {
        return firstNumber - secondNumber;
    }

    // This function divides two numbers and returns the result
    // If the second number is zero, it throws an exception
    float divide(float firstNumber, float secondNumber) 
    {
        if (secondNumber == 0) {
            throw "Division by zero error!";
        }
        return firstNumber / secondNumber ;
    }

    // This function multiplies two numbers and returns the result
    float multiply(float firstNumber, float secondNumber) 
    {
        return firstNumber * secondNumber ;
    }
}

// This is the main function that runs when the program is executed
int main()
{
    // This while loop keeps running until the program is terminated
    while(1)
    {
        // These variables store the numbers and operator entered by the user
        float firstNumberFromUser = 0;
        float secondNumberFromUser = 0;
        char operatorFromUser ;

        // Prompt the user to enter the first number
        std::cout << "Enter first Number" << std::endl;
        std::cin >> firstNumberFromUser ;

        // Prompt the user to enter the second number
        std::cout << "Enter second Number" << std::endl;
        std::cin >> secondNumberFromUser ;

        // Prompt the user to enter the operator
        std::cout << "Enter Operator you want to perform  ( + , - , / , *)" << std::endl;
        std::cin >>  operatorFromUser ;

        // Call the appropriate function from the Calculate namespace based on the operator entered by the user
        switch (operatorFromUser)
        {
            case '+':
                std::cout << Calculate::add(firstNumberFromUser,secondNumberFromUser)<<std::endl;
                break;

            case '-':
                std::cout << Calculate::subtract(firstNumberFromUser,secondNumberFromUser)<<std::endl; 
                break;

            case '*':
                std::cout << Calculate::multiply(firstNumberFromUser,secondNumberFromUser) <<std::endl; 
                break;

            case '/':
                std::cout << Calculate::divide(firstNumberFromUser,secondNumberFromUser) << std::endl; 
                break;

            default:
                std::cout << "To add enter + , To subtract enter - , To multiply enter * , To divide enter /"<<std::endl;
                break;
        }
    }
    return 0;
}

