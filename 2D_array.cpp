#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column){
for(int row=0;row<3;row++){    //commenting so that i can control the layout of what value goes where
    for(int column=0; column<4; column++){
        if( arr[row][column]==target){
            return 1;
        } 
        
    }
} return 0; 
}
int main() {
//create 2D array 
int arr[3][4];


//taking input
for(int row=0;row<3;row++){    //commenting so that i can control the layout of what value goes where
    for(int column=0; column<4; column++){
        cin>>arr[row][column];
    }
} 
 //output
 
for(int row=0;row<3;+row++){
    for(int column=0; column<4; column++){
        cout<<arr[row][column]<<" ";

    }
 cout<<endl;
}  

cout<<"enter the element to be found"<<endl;
int target;
cin>>target;

if(isPresent(arr,target,3,4)) {
    cout<<"element found"<<endl;

}
else {
    cout<<"not found"<<endl;

}
return 0;}
