#include<iostream>


// This function swaps the values of two integers
void Swap(int &firstNum , int &secondNum)
{
    int temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;
}

int main()
{
    int firstNumber = 5;

    int secondNumber = 7;

    // Call the Swap function to swap the values of firstNumber and secondNumber
    Swap(firstNumber, secondNumber);

    // Print the values of firstNumber and secondNumber after the swap
    std::cout << "FirstNumber is " << firstNumber << " SecondNumber is " << secondNumber << std::endl;  

    return 0;
}
