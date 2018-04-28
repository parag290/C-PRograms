/*

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this 
pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I

*/

 string convert(string s, int numRows) {
       
        vector<string> store(numRows, "");
        int index = 0;
        int n = s.length();
        
        
        while(index < n){
            
            for(int i =0; index<n && i<numRows; i++){
                store[i] += s[index++];
            }
            
            
            for(int i=numRows-2; index<n && i>0; i--){
                store[i] += s[index++];
            }            
        }
        
        string res = "";
        
        for(string i : store){
            res += i;
        }

        return res;
    } 
