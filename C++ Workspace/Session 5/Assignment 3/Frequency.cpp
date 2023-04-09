/*
 * The purpose of this code is to count the frequency of each unique number in an array. Here's how it works:

    --First, an array of integers with 12 elements is declared and initialized with some values.

    --A set of integers called uniqueNumbers is declared to store the unique numbers in the array.

    --A counter variable called count is declared to count the number of occurrences of each unique number.

    --Two vectors called counts and uniqueNumbersVector are declared to store the counts and unique numbers, respectively.

    --A for loop is used to insert each element of the array into the set of unique numbers.

    --Another for loop is used to print out each unique number in the set.

    --The std::copy algorithm is used to copy the unique numbers from the set to the uniqueNumbersVector using the std::back_inserter iterator.

    --Another for loop is used to count the number of occurrences of each unique number in the array. For each unique number, the loop iterates through the array and increments the count variable each time it encounters the unique number.

    --The counts vector is then updated with the count for each unique number.

    --Finally, a for loop is used to print out the unique numbers and their frequencies in a table format.
 * 
  
*/



#include <iostream>
#include <array>
#include <vector>
#include <iterator>
#include <set>

int main() {
    // Declare an array of integers with 12 elements
    std::array<int,12> arr = {3,3,5,8,9,8,9,10,17,11,17,10};

    // Declare a set of integers to store unique numbers
    std::set<int> uniqueNumbers;

    // Declare a counter variable
    std::uint16_t count; 

    // Declare two vectors to store the counts and unique numbers
    std::vector<int> counts;
    std::vector<int> uniqueNumbersVector;

    // Loop through the array and insert each element into the set
    for(auto it = arr.begin() ; it != arr.end() ; ++it)
    {
        uniqueNumbers.insert(*it);
    } 

    // Loop through the set and print out each unique number
    for (auto it = uniqueNumbers.begin(); it != uniqueNumbers.end(); ++it) {
        std::cout << *it << " " << std::endl;
    }

    // Copy the unique numbers from the set to the uniqueNumbersVector using the back_inserter iterator
    std::copy(uniqueNumbers.begin(), uniqueNumbers.end(), std::back_inserter(uniqueNumbersVector));

    // Loop through the unique numbers and count the number of occurrences in the array
    for(auto element : uniqueNumbers)
    {
        count = 0;
        for (auto it = arr.begin();it != arr.end();++it)
        {
            if (*it == element)
            {
                count++;
            }
            else
            {
              continue;
            }
        }
        counts.push_back(count);
    }

    // Print out the unique numbers and their frequencies
    std::cout << "Element" << "       " << "Frequency" << std::endl;

    for(std::uint16_t i = 0; i < counts.size() ; ++i)
    {
        std::cout << uniqueNumbersVector[i] << "                " << counts[i] << std::endl;
    }

    return 0;
}