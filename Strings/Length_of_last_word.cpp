/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5
*/

int lengthOfLastWord(string s) {
        
        // if string is empty return 0
        if (s.length() == 0){
            return 0;
        }
        
        int count = 0;
        
        for(int i = (s.length()-1) ; i >= 0; i--){
            
            if(s[i] != ' '){     // comparison must be done with ' '   and not " " ..... else it will give error
                count++;
            }
            else{
                if(i > 0 &&count != 0){
                    return count;
                }
            }
        }
        return count;
    }
