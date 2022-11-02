
#include<iostream>
using namespace std;

int binarysearch (int N){ //sqrt of an integer N 
    long long int s=0;                       //https://www.codingninjas.com/codestudio/problems/square-root_893351
    long long  int e= N;
  long long  int mid= s+ (e-s)/2;
  long long  int ans = -1;
    while (s<=e){
     long long  int square = mid*mid;
        
        if (square==N){
            return mid;
        }
        if (square<N){
            ans=mid;
            s=mid+1;
        }
        else {
            e= mid-1;
        }
         mid= s+ (e-s)/2;
        
    }
    return ans;
}


double moreprecision(int n, int precision , int tempsol) {
double ans= tempsol;
double factor = 1;
for(int i= 0; i<precision; i++)
{ factor= factor/10;

for(double j= ans; j*j<n; j= j + factor ) {
ans = j;

} }
return ans; } 

int main (){
int n;
cout<<"enter value of n"<<endl;
cin>>n;
int tempsol= binarysearch(n) ;
cout<<"ans is"<<moreprecision( n, 3 ,tempsol) ;
return 0;
}

