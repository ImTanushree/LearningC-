#include<iostream>

using namespace std;

int ChangeCallbyValue( int A, int B)
{
A=A+10;
B=B+20;
cout<<"ChangeCallbyValue"<<A<<" "<<B<<endl;
return 0;
}


int ChangeCallbyReference( int &A, int &B)
{

    A=A+5;
    B=B+2;
cout<<"ChangeCallbyReference"<<A<<" "<<B<<endl;
return 0;
}

int ChangeCallbypointer( int *A, int *B)
{

    A=A+15;
    B=B+20;
cout<<"ChangeCallbypointer"<<A<<" "<<B<<endl;
return 0;
}

int ChangeCallbypointerinProperway( int *A, int *B)
{

    *A= *A + 100;
    *B= *B + 200;
    
cout<<"ChangeCallbypointerinProperway"<<A<<" "<<B<<endl;
return 0;
}


int main(){
int a=10, b=5;
ChangeCallbyValue(a,b);    // doesn't change original variables
cout<<"call by value "<<a<<" "<<b<<endl;

ChangeCallbyReference(a,b);
cout<<"call by reference"<<a<<" "<<b<<endl;

//ChangeCallbypointer(a,b);    wrong
ChangeCallbypointer(&a,&b);   // right syntax
cout<<"call by pointer "<<a<<" "<<b<<endl;

ChangeCallbypointerinProperway(&a,&b);
cout<<"call by ChangeCallbypointerinProperway "<<a<<" "<<b;




    return 0;
}