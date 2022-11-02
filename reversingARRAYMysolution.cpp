 #include<iostream>
using namespace std;
int main() {
    int size,a;
    cout<<"enter size"<<endl;
    cin>>size;
    int num[1000]= {0};
    cout<<"enter num"<<endl;
   for(int i=0; i<size;i++) {
    cin>>num[i]; }


for(int i=0; i<size; i++)
{
    cout<<num[i]<<" " ;
}

 cout<<endl; 




    for(int i=0;i<size/2;i++)
/*a=num[0];
num[0]=num[size-1-0]
num [size-1-0]=a; */
/*a=num[1];
num[1]=num[size-1-1]
num [size-1-1]=a; */
/*a=num[2];
num[2]=num[size-1-2]
num [size-1-2]=a; */

{
a=num[i];                                  
num[i]=num[size-1-i] ;
num[size-1-i]=a;
}
for(int i=0; i<size; i++)
{
    cout<<num[i]<<" " ;
}
return 0; 
}