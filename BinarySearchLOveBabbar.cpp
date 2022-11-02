#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key) {

int start = 0;
int end = (size -1) ;
int mid = (start+end ) / 2 ;
cout<<"mid="<<mid<<endl;
while   (start  <= end) { 
cout<<"mid="<<arr[mid]<<" key="<<key<<endl; // mid, start , end are positions of array not value or variables holding value
if (arr[mid]==key) {
    return mid;
    
}
else if (arr[mid]>key) //key is in left 
{end= mid-1; } 

else if(arr[mid]<key) //key is in right 
{start = mid + 1; }


cout<<"Start="<<start<<" mid"<<mid<<" end="<<end<<endl;
mid=(start+end)/2;
}
return -1; 

}

int main() {
    
int even[6] = {3,6,7,9,10,12};


int odd[8]= {3,5,7,9,7,5,3,1};


int index= binarysearch(even, 6, 9) ;
cout<<"index of 9 is " <<index<<endl; 
return 0 ; }