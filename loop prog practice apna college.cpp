#include<iostream>
using namespace std;

int main () {
    int savings;
    cin>>savings;
    
    if( savings>10000){
    cout<< "A \n" ;
    }
    else if(savings>500){
        cout<< "B\n" ;
    }
    else(savings > 100){
        cout<< "c\n";
    }
    return 0;
}