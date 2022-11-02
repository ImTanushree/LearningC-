#include<iostream>
using namespace std;
char toUpperCase(char ch){
    if(ch >='A' && ch<='Z')
    return ch;
    else {
        char temp= ch - 32;
        return temp;
    }
}
bool checkpalindrome(char a[], int n) {
    int s=0;
    int e= n-1;
    while(s<=e){
       if (toUpperCase(a[s])!= toUpperCase(a[e]))
      { return 0;
    }
    else {
        s++;
        e--;
    } } return 1 ; } 

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!= '\0' ; i++){
        count++; 
    }
    return count;
}

int main(){
    char name[20];
cout<<"enter name"<<endl;
cin>>name;
int len= getLength(name);
cout<<checkpalindrome(name,len)<<endl;
cout<<toUpperCase('c')<<endl;
cout<<toUpperCase('B')<<endl;
return 0;
}