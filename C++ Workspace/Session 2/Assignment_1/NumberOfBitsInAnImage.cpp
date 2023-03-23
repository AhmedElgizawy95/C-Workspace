#include <iostream>
using namespace std;

//Preprocessor MACRO for Number of Bits in a signle Channel of RGB
#define NUMBER_OF_BITS 8

//Preprocessor MACRO for Number of channels for RGB
#define NUMBER_OF_RGB_CHANNELS 3 

//Main Function (Entry Point to the Program)
int main()
{
    //imageWidth --> variable to store Image Width Read from User
    uint16_t  imageWidth;

    //imageHeight --> variable to store Image Height Read from User
    uint16_t  imageHeight;


    //Asking user to enter Width and Height of the image
    cout << "Enter Width and Height" << std::endl;
    
    //Reading Width and Height From User imageWidth * imageHeight * NUMBER_OF_BITS * NUMBER_OF_RGB_CHANNELS
    cin >> imageWidth >> imageHeight;

    //Calculating and Printing the number of bits in an image by using the formula  
    cout << "Number of Pixels equals " << imageWidth*imageHeight  << " Each Pixel has 3 Channels RGB each of 8 bits so Number of bits equals imageWidth*imageHeight*8*3 " << imageWidth*imageHeight*NUMBER_OF_BITS *NUMBER_OF_RGB_CHANNELS ;

   //Return 0 for successful program execution 
    return 0;
}