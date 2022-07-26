#include<iostream> // print name of people with age greater than 20
#include<string.h>
using namespace std;
int main () {

int total;
cout<<"enter number of people ";
cin>>total;
string name[total];
int age[total];
for (int i=0; i<total ; i++)
{ cout<< " enter name of "<<i+1<<"st person is and their age is" ;

cin>>name[i]>>age[i];

}

for (int i=0 ; i<total; i++ )
{
if(age[i]>20) {
    cout<<" name is "<<name[i]<<endl  ; } 
}






    return 0;
}