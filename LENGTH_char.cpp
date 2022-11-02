#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i= 0; name[i]!= '\0'; i++ ){    //name!= '\0';       name is pointer, hence integer   error msg :5:23: error: ISO C++ forbids comparison between pointer and integer
        count++ ;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name" ;
    cin>>name ;

    cout<<"your name is"<<endl; 
    cout<<name<<endl;


     cout<<"your name is"<<getlength(name)<<endl; 
     return 0; 
}