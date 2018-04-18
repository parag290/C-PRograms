#include <iostream>

using namespace std;

int find_substring(string str, string substr){
    int index = -1;
    int n = str.length();
    int m = substr.length();
   
   if(!n)
   return index;
   
    for(int i=0; i<=(n-m); i++){
        
        int j = 0;
            if(str[i] == substr[0]){
                for(; j<m; j++){
                    if(str[i+j] != substr[j])
                    break;
                }
            }
            if(j == m)
                return i;
        }
    
    return index;
}

int main(){
    
    cout << "Program to find index of Sub String" << endl;
    
    string str = "hello";
    string substr = "o";
    
    int index = find_substring(str,substr);
    cout << "Substring found at index : " << index << endl;
    return 0;
}

