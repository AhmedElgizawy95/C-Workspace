#include<iostream>


// This is a namespace called evaluations
namespace evaluations
{
    // This function takes in a grade as a uint16_t and returns a string representing the grade evaluation
    std::string getEvaluation(uint16_t grade)
    {
        // If the grade is between 90 and 100, return an "A+"
        if( grade >= 90 && grade <= 100 )
        {
           return "A+"; 

        } 
        // If the grade is between 80 and 89, return an "A"
        else if (grade >= 80 && grade < 90)
        {
            return "A"; 
        }

        // If the grade is between 70 and 79, return a "B"
        else if (grade >= 70 && grade < 80)
        {
            return "B";
        }

        // If the grade is between 60 and 69, return a "C"
        else if (grade >= 60 && grade < 70)
        {
           return  "C";
        }
        // If the grade is between 50 and 59, return a "D"
        else if  (grade >= 50 && grade < 60)
        {
            return "D";
        }
        // If the grade is less than 50, print an "F" to the console
        else if  (grade < 50 )
        {
            std::cout<< "F" << std::endl;
        }
        // If the grade is not within the range of 50 to 100, return an error message
        else
        {
              return "Enter a value between 50 and 100";
        }
    } 
}

// This is the main function
int main ()
{
    // This is an infinite loop that will keep asking the user for a grade and printing the evaluation
    while(1)
    {
        uint16_t gradeFromUser;

        // Ask the user for their grade
        std::cout << "Enter your grade" << std::endl;

        // Get the grade from the user
        std::cin >> gradeFromUser;

        // Print the evaluation for the grade
        std::cout << evaluations::getEvaluation(gradeFromUser) << std::endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
