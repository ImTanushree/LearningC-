#include <iostream>
#include <string>
using namespace std;

string CodelandUsernameValidation(string str) {

    int flag=2; 
  
  if((str.length()>=4 ) && (str.length() <= 25)) {
    if ((str[0]>='A'&& str[0]<= 'Z')|| (str[0]>= 'a' && str[0]<='z')) {
      if (str[str.length()-1]!= '_'){
      for(int i= 0; i<str.length();i++){
         if ((str[i]>='A'&& str[i]<= 'Z')|| (str[i]>= 'a' && str[i]<='z') || ((str[i]>='1')&& (str[i]<='9')) ||(str[i]=='_'))
         continue;

         else{ //cout<<"rule 3 FAILED"<<endl;
            flag= 0;}

      }
      
    } else{ //cout<<"rule 4 FAILED"<<endl;
         flag= 0;}

    
    
    } else{  //cout<<"rule 2 FAILED"<<endl;
        flag= 0;}


   } else{ // cout<<"rule 1 FAILED"<<endl;
        flag= 0;}


if (flag==0){
    return "false";
    
}
else { return "true"; }
  
  
  }



int main(void) { 
   
  // keep this function call here
  cout << CodelandUsernameValidation("u__hello_world123");
  return 0;
    
}