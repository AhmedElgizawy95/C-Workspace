#include<iostream>

int main()
{
  int Saturday = 1, Sunday = 2 , Monday = 3 , Tuesday = 4 , Wednesday = 5 , Thursday = 6 , Friday = 7;

  int Today ;
  int Duration ; 
  std::cout << "Enter Current Day in Numbers starting from 1 (Saturday) -> 7 (Friday) and Duration in Numbers" << std::endl;
  std::cin >> Today >> Duration ;
  int Result = ((Today + Duration)%7);

  switch(Result)
  {
    case 1:
    std::cout << "Today is " << Today << " Time to meet is on Saturday" << std::endl;
    break;
    case 2:
    std::cout << "Today is " << Today << " Time to meet is on Sunday" << std::endl;
    break;
    case 3:
    std::cout << "Today is " << Today << " Time to meet is on Monday" << std::endl;
    break;
    case 4:
    std::cout << "Today is " << Today << " Time to meet is on Tuesday" << std::endl;
    break;
    case 5:
    std::cout << "Today is " << Today << " Time to meet is on Wednesday" << std::endl;
    break;
    case 6:
    std::cout << "Today is " << Today << " Time to meet is on Thursday" << std::endl;
    break;
    case 7:
    std::cout << "Today is " << Today << " Time to meet is on Friday" << std::endl;
    break;
  }
    
    return 0;

}