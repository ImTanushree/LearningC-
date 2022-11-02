#include<iostream>

using namespace std;

int ChangeCallbyValue( char A[])
{
for(int i=0; i<3; i++){ 
    A[i]=A[i]+3; }
cout<<"ChangeCallbyValue"<<A<<" "<<endl;
return 0;
}


/*int ChangeCallbyReference( int &A, int &B)
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
} */ 


int main(){
char a[]={'a','b','c'};
ChangeCallbyValue(a);    // doesn't change original variables
cout<<"call by value "<<a<<" "<<endl;

/*ChangeCallbyReference(a,b);
cout<<"call by reference"<<a<<" "<<b<<endl;

//ChangeCallbypointer(a,b);    wrong
ChangeCallbypointer(&a,&b);   // right syntax
cout<<"call by pointer "<<a<<" "<<b<<endl;

ChangeCallbypointerinProperway(&a,&b);
cout<<"call by ChangeCallbypointerinProperway "<<a<<" "<<b;
*/



    return 0;
}