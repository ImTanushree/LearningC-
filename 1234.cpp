#include <bits/stdc++.h> 
class solution{
private:
bool valid(char ch ){
    if ( (ch>='a'&& ch<= 'z') || (ch>='A'&& ch<= 'Z') || (ch>='0'&& ch<= '9')){
        return 1;
    } else {return 0;  }      
} 
char toLowerCase(char ch){
    if((ch >='a' && ch<='z')|| (ch >='0' && ch<='9'))
    return ch;
    else {
        char temp= ch + 32;
        return temp;
    }
}

bool checkPalindrome( string a) {
    int s=0;
    int e= a.length()-1;
    while(s<=e) {
      if (a[s] != a[e]){ 
      
            return 0;
        }
else {
s++;
e--; }}
    return 1; }
public:
bool isPalindrome(string s)
{
//remove faltu character    
string temp= "";
    for (int j= 0; j< s.length(); j++){
        if (valid(s[j])) {
            temp.push_back(s[j]);
        }
    }
    //lower case me krdo
    for(int j=0; j<=temp.length(); j++){
        temp[j]= toLowerCase(temp[j]);
    }
    //check palindrome
    return checkPalindrome(temp); }
};