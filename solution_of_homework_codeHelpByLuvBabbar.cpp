//WAP TO ADD ALL ELEMENT OF ARRAY , SIZE =5 , ELEMENT 2 7 1 -4 11
/* #include<iostream> 
using namespace std;

/*int main() {
    int sum=0;
    
    int num[] = {2,7,1,-4,11} ;
    for (int i =0; i<5; i++) {
     
      
      sum=sum+num[i] ; 
      } cout<<sum<<endl;


return 0; } */


//______________________________________________________________________________________________________________________________________________

/*
//WAP TO SWAP ALTERNATE NUMBERS

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

    for(int i=0; i<size;i=i+4)
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
*/
//______________________________________________________________________________________________________________________________________________________________________________
/*
//WAP TO FIND UNIQUE ELEMENT IN A GIVEN ARRAY 
#include<iostream>
using namespace std;
int main() {

  int unique =1; // UNIQUE is FLAG VARIABLE
  int n; // n is size of Array , usually just said SIZE 
  int arr[100]= {0}; 
  cout<<"size of array"<<endl  ;
  cin>> n ;
  for (int i=0; i<n ; i++ ) {
  cin>>arr[i] ;
  }
  for (int i=0; i<n; i++)  // i and j are different position of same array
  {
    for (int j=0; j<n; j++)
{  
if (i==j) {
continue; }
 else { if (arr[i]== arr[j] ) {
    unique = 0; 
 } } }

 if (unique == 1) {
cout<< arr[i]<<"is unique" <<endl ; }

else 
{cout<<arr[i]<<"is not unique" <<endl ; } } 




  
  return 0; } */
  //___________________________________________________________________________________________________________________________________________________