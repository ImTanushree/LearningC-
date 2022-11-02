#include<iostream>
using namespace std;
int main() {

    int size,a;
    int arr[100];
    cout<<"enter size"<< endl;
    cin>>size;
     cout<<"enter numbers"<< endl;
    for(int i=0;i<size; i++)
    {cin>>arr[i] ;} 
     for(int i=0;i<size; i++)
    {cout<<arr[i]<<" " ;
    
    }
    cout<< endl;

    for(int i=0; i<size;i=i+4) // 1 with 3 , 2 with 4 , thus after completing 1234, it will start from 5678, thus it works in multiple of 4
    {  
        a=arr[i];
        arr[i]= arr[i+2] ; 
        arr[i+2]=a;
        a=arr[i+1];
        arr[i+1]= arr[i+3] ;
        arr[i+3]=a; }

  for(int i=0; i<size; i++)
  { cout<<arr[i]<<" " ;
  
  
  
  }
  return 0;
}