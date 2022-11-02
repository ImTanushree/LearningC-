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




  
  return 0; }