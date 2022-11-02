#include<iostream> //WAAP TO FIND THAT GIVEN ARRAY HAS 1 AS A ELEMENT IN IT OR NOT 
using namespace std;

int main() {
    int a=0; //initialise with 0 to avoid garbage values ; int searchflag will tell search is successful or not
    int searchflag=0, position=0; //position is just a  variable will directly tell position it could be named doremon as well\\searchflag =0, means we r assuming it is not found ye searchflag=1 means found 
    int num[5] = {0} ;
    for (int i = 0; i < 5; i++)
    { 
        cout<<"enter element"<<endl;
        cin>>num[i] ;
    }
    cout<<"enter number to search";
    cin>>a;
    for (int i =0; i<5; i++) {
     if(num[i]==a) { searchflag=1; position=i;  //i wil tell position of the element we are looking for here
     break;

         } 
    
    } 
    if(searchflag) cout<<"found"<<position;
    else
    cout<<"not found";

return 0; }