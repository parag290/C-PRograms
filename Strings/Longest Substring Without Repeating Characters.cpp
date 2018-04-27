/*
Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, 
"pwke" is a subsequence and not a substring.
*/

int lengthOfLongestSubstring(string s) {
     
        int res = 0;
        string temp = "";          
        
        for(int i = 0; i<s.length(); i++){
            auto pos = temp.find(s[i]);
            if(pos == string::npos){
                temp += s[i];
            }    
            else{
                temp = temp.substr(pos+1);                
                temp += s[i];
            }
            if(res<temp.length()){
                    res = temp.length();
            }
            
        }
        return res;
        
    }
