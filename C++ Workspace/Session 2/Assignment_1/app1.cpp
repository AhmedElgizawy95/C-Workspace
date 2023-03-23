#include<iostream>
using namespace std;
int main()
{
    uint16_t  imageWidth;

    uint16_t  imageHeight;

    std::cout << "Enter Width and Height" << std::endl;
    

    std::cin >> imageWidth >> imageHeight;


    std::cout << "Number of Pixels equals " << imageWidth*imageHeight  << " Each Pixel has 3 Channels RGB each of 8 bits so Number of bits equals imageWidth*imageHeight*8*3 " << imageWidth*imageHeight*8*3 ;
    //ofstream myfile; writing
    //ifstream myfile; reading
    //fstream myfile; reading and writing
    //myfile.open("filename");
    //myfile.close();
/*
string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";
    //create an input stream to read the file
    ifstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }
    else cout << "Unable to open file for reading";
    return 0;
*/

    return 0;
}