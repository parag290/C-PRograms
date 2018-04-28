/*
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/

string addBinary(string a, string b) {
        int n = a.length()-1;
        int m = b.length()-1;
        int carry = 0;
        int addition = 0;
        int i =0;
        string result = "";
        std::reverse(a.begin(),a.end());
        std::reverse(b.begin(),b.end());
        
        int a_num = 0, b_num = 0; 
        
        while(i<=n || i<=m || carry==1){
            a_num = (i> n) ? 0 : (a[i]== '0') ? 0 : 1;          
            b_num = (i> m) ? 0 : (b[i]== '0') ? 0 : 1;    
            addition = a_num + b_num + carry;
            addition%2 == 0 ? result+= '0' : result+= '1';
            addition>=2 ? carry = 1 : carry = 0;
            i++;
        }
        
        std::reverse(result.begin(),result.end());
        return result;
    }


