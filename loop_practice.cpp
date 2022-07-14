#include<iostream>
using namespace std;

int main () {
    int savings;
    cout<<"enter \n";
    cin>>savings;
    
    if( savings>10000){
    cout<< "karcha kro \n" ;
    }
    else if(savings>500){
        cout<< "kharcha mt kro\n" ;
    }
    else  {
        cout<< "bheek maango\n";
    }
    return 0;
    
}