#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> find_pair(vector<int> arr, int target){
    vector<int> result;
    vector<int>::iterator it;
    
    for(int i =0; i< arr.size()-1; i++){
        int diff1 = arr[i] + target;
        int diff2 = arr[i] - target;
        
        it = std::find(arr.begin()+i,arr.end(),diff1);
        if(it != arr.end()){
            int index = it - arr.begin();
            result.push_back(i);
            result.push_back(index);
        }
        it = std::find(arr.begin()+i,arr.end(),diff2);
        if(it != arr.end()){
            int index = it - arr.begin();
            result.push_back(i);
            result.push_back(index);
            }
        }
    
    return result;
}

int main()
{
    cout<<"Program to find Pair of given difference" << endl;
    std::vector<int> arr{2,16,7,3,11};
    int target = 5;
   
    vector<int> result = find_pair(arr, target);
    for(int i : result){
        cout << i << endl;
    }
   return 0;
}