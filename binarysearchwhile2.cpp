#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key) {

int start = 0;
int end = (size -1) ;
int mid = (start+end ) / 2 ;

while   (start  <= end) {  // mid, start , end are positions of array not value or variables holding value
if (arr[mid]==key) {
    return mid;
}
if (arr[mid]<key) //key is in left 
{start = mid + 1; } 

else 
{end = mid - 1; }


cout<<"Start="<<start<<" mid"<<mid<<" end="<<end<<endl;
mid=(start+end)/2;
}
return -1; 

}

int main() {
    
int even[6] = {3,6,7,9,6,6};


int odd[8]= {3,5,7,9,7,5,3,1};


int index= binarysearch(even, 6, 9) ;
cout<<"index of 9 is " <<index<<endl; 
return 0 ; }