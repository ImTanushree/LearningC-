#include<iostream>
using namespace std;

void merge(int num1[], int n, int num2[], int m, int num3[] )
{
    

     int i=0,j=0,k=0;
    
     while (i<n && j<m)
{ if (num1[i]<num2[j]) {
    num3[k]=num1[i];
    cout<<num3[k]<<" k "<<k<<endl;
    cout<<num1[i]<<" i "<<i<<endl;
    i++;
}
else { 
    num3[k]=num2[j];
    
j++;
}

k++;}

cout<<endl;


while(i<n)
{num3[k++]=num1[i++];}


while(j<m)
{num3[k++]=num2[j++];}

}

void print(int ans[],int n){
    cout<<"running print";
    for(int i =0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
}

int main() {
int num1[5]={1,3,5,7,9} ;
int num2[3]= {2,4,6};
int num3[8]={0};



merge (num1,5,num2,3,num3);
print (num3,8);
return 0; }