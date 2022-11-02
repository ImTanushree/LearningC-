#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key) {

int start = 0;
int end = (size -1) ;
int mid = (start+end ) / 2 ;

while (start<= end) {     // mid, start , end are positions of array not value or variables holding value
if (arr[mid]==key) {
    return mid;
}
else if (arr[mid]>key) //key is in left 
{start= mid-1; } 

else if(arr[mid]<key) //key is in right 
{start = mid + 1; }


}

return -1; 










}











int main () {
    
int even[6] = {0};


int odd[8]= {0};

cout<<"enter even digits"<<endl;
for(int i=0; i<6; i++){
    cin>>even[i] ;
}
cout<<"enter odd digits"<<endl;
for (int i=0; i<8; i++) {
    cin>>odd[i] ;
}
int key ; 
cout<<"enter key"<<endl;
cin>>key;
int found=binarysearch(even, 6 , key); // 0 not found , 1 found

if ( found != -1) {
cout<<key<<" is found in even list at "<<found<<endl; }
else {
     found= binarysearch (odd, 8, key) ; // 0 not found , 1 found
    if (found!= -1) {
        cout<<key << " found in odd list"<< endl;
    }
}

return 0 ; }