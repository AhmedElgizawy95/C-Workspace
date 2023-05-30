#include<iostream>
#include<map>
#include<array>


int main ()
{
    std::array<int,11> arr = {3,3,5,8,9,8,9,10,11,17,10};
    std::map<int,int>iMap;

    for(auto i : arr)
    {

        if(iMap.find(i) != iMap.end())
        {

            iMap[i]++;
        }
        else
        {
            iMap.insert({i,1});
        }
        
    }
    
    for(auto &j :iMap)
    {
        std::cout << j.first << ":" << " " << j.second << std::endl;
    }
}