#include<iostream>
using namespace std;
//making function
void printarray(int arr[] , int size ) {  //using void because we dont have to return a value, instead just print
                                         //structure of function is - 
                                         // data type function (int arr[], x) { for(){}}
cout<<"printing array"<<endl;
for(int i=0 ; i<size ; i++ )
{ cout<<arr[i]<<endl;
}
cout<<"printing done"<<endl;

}
int main() {                                   //program starts from here , main()
    
    char ch[5] = { 'a' , 'b' , 'c' , 'd' , 'e' } ;
    for ( int i= 0; i< 5 ; i++ )
    {cout<<ch[i]<<endl; 
    }
    
  /*double  firstDouble[5];
  float fistfloat[6];
  bool firstbool[9];*/ 

 return 0;   
    
    
    
 }