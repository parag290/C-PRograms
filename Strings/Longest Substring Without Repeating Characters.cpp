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


/*
Using Hash-map
Though following answer could not pass all cases - 
usefull to learn use of hashmap

int lengthOfLongestSubstring(string s) {
     
        int start = 0, end = 0, res = 0;
        map<char, int>n_map;        
        map<char, int>:: iterator it;
        
        for(int i = 0; i<s.length(); i++){
            it = n_map.find(s[i]);
            if(it == n_map.end()){
                n_map.insert(pair<char, int>(s[i],i));
                end = i;
            }    
            else{
                start = n_map[s[i]] + 1;
                n_map[s[i]] = i;
                end = i;
            }
        
            if(res < (end-start)){
                cout << s[start] << " " << start << " "<< s[end] << " " << end << endl;
                res = end-start;
        }
        }
        return res+1;
        
    }
  */
