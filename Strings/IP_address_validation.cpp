#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

bool isnumber(string str){
           return !str.empty() && (str.find_first_not_of("1234567890") == std::string::npos);
}

vector <string> split(string str, char delim){
    vector <string> split_vect;
    
    auto pos = str.find(delim);
    auto i = 0;
    
    while(pos != std::string::npos){
        split_vect.push_back(str.substr(i, pos-i));
        i = ++pos;
          pos = str.find(delim,pos);
    }
    split_vect.push_back(str.substr(i));
    return split_vect;
}

bool valid_ipv4(string ip){
        vector<string> split_vect = split(ip , '.');
    if(split_vect.size() != 4){
        return false;
    }
    
    for(string str : split_vect){
        cout << str << endl;
        if( !(isnumber(str)) || std::stoi(str) > 255 || std::stoi(str) < 0)
        return false;
    }
    return true;
}
int main() {
  
  string ipaddress = "10.240.23.45";
  
  if(valid_ipv4(ipaddress)){
      cout << "Valid IP address" ;
  }
  else{
      cout << "Not valid IP address";
  }
  
    return 0;
}
