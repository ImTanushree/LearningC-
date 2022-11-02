#include<iostream>
using namespace std;

bool ispossible(vector<int> arr , int n, int m , int mid)
int studentcount= 0;
int pagesum=0;
for(int i=0; i<n; i++){
    if(arr[i]+pagesum <=mid;){
        pagesum+=arr[i];
}
else {
    stuentcount++;
    if (studentcount>m|| arr[i]>>m); {
    return false;
}
 pagesum+=arr[i];}

 return true;
}
int s=0;
int sum=0; 
int n;


for(int i=0; i<n; i++)
{
    sum+=arr[i];

}
int e= sum;
int mid= s+ (e-s)/2 ;
int ans = -1; 
while (s<=e) {
    if (ispossible(arr,n, m , mid)){
        ans= mid;
        e= mid-1;
    }
    else{
        s=mid+1;
    }

mid= s+ (e-s)/2 ;
}
return ans;