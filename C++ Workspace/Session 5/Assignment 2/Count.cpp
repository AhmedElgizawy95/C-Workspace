#include <iostream>
#include <unordered_set>
#include <vector>
#include <array>
#include<algorithm>
#include<iomanip>
//std::vector<int> uniqueArray(int arr[], int n) {
   // std::unordered_set<int> s;
   // std::vector<int> unique_arr;

    // Traverse through the array and insert each element into the set
    //for (int i = 0; i < n; i++) {
    //    s.insert(arr[i]);
   // }

    // Traverse through the set and push each element into the vector
   // for (auto it = s.begin(); it != s.end(); it++) {
   //     unique_arr.push_back(*it);
   // }

  //  return unique_arr;
//}

int main() {
    std::array<int,13> arr= {3,3,5,8,9,8,9,10,17,10,11,17,10};
    std::array<int,7> unique_arr = {};
    std::array<int,7> frequency_arr = {};
    int j=0;
    int count = 0;
  for (int i =0;i<arr.size();i++)
  {
    count = 0;
    j=i+1;
    for(j;j<arr.size();j++)
    {
      if(arr[i] == arr[j])
      {
        //count++;
        //++frequency_arr[arr[i]];
        //unique_arr[arr[i]];
        std::cout << arr[i] << std::endl;
      }
      else
      {
        continue;
      }
    }
  }

    return 0;
}