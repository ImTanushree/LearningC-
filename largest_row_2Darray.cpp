#include<iostream>
using namespace std;


void printSum(int arr[][3], int row, int col){
cout<<"printing Sum"<< endl;
for(int row=0; row<3; row++){
    int sum=0;
    for(int col=0; col<3; col++){
        sum +=arr[row][col];
    }
    cout<<sum<<" ";
} 
cout<<endl;
}

int LargestRowSum(int arr[][3], int row, int col){
int max= INT_MIN ;
    int rowIndex= -1;
for(int row=0; row<3; row++){
    int sum=0;
    for(int col=0; col<3; col++){
        sum += arr[row][col];
    }
 



if (sum> max)
{max= sum;
rowIndex = row; 
}  }
cout<<max<<endl;
return rowIndex;
}

int main(){
    int arr[3][3];

    //taking input

    cout<<"enter the elements"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3;col++){
            cin>>arr[row][col] ;  
        }
        
    }

   // output
    for(int row=0; row<3; row++){
        for(int col=0; col<3;col++){
            cout<<arr[row][col]<<" ";
        }
    cout<< endl;
} 
int ansindex = LargestRowSum(arr, 3,3) ;

 cout<<ansindex<<endl;

return 0;


}