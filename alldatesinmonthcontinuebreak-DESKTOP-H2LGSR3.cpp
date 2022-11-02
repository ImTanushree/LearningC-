// WAP TO PRINT ALL THE DATES IN A MONTH THAT RAHUL CAN GO OUT GIVEN; 
//HE CAN GO OUT ONLY ON ODD DAYS & UNTIL HE HAS POCKET MONEY LEFT; INITIAL POCKET MONEY =3000 evertytime it is deducted by 300
#include <iostream>
using namespace std;

int main() {
    

int pocket_money=3000; 

for (int date =1; date<=30 ; date++ )
{ 
if(date%2==0 ) {
    continue; //continue means ki waps date++ pe chle jao apna kaam kro, thus it wont go further to print anything
}

cout<<date<<endl; 
pocket_money= (pocket_money - 300);
if (pocket_money == 0) {
    break; }
    cout<<"go ghummi "<< endl;
}
return 0; }


//__________________________________________________________________________________________________________________________________________________________________
/*#include<iostream> //dates of odd days
                    //unti 3000rs exhausted
                    // current pocket money of each day
using namespace std;
int main() {
    int date;
    int pocket_money=3000;
   
   
    for(date=1 ; date<=31; date++)
    {
        if (date%2==0) { 
            continue;}

           
           pocket_money-=300 ;
           
           
            if (pocket_money ==0 ) {
            break;} 
            cout<<"ghummi allowed on "<<date<<"current pocket money is " <<pocket_money<<endl; 
   } 
    return 0;
    } */

//____________________________________________________________________________________________________________________________













    //_________________________________________________________________________________________________________________
     /*
     #include<iostream> //dates of odd days
                    //unti 3000rs exhausted
using namespace std;
int main() {
    int date;
    int pocket_money=3000;
   
   for(date=1;((date<=31) && (pocket_money>0));date++){
       
       if((date%2)==0){continue;}
       
       else  { 
           pocket_money-=300;
           cout<<"Date is "<<date<<" pocket money is "<<pocket_money<<endl;
           
           //if(pocket_money<=0) break;
           //((date<=31)&&(pocket_money>0))
           //deduct pocket money print date  
           }
       
       }
   
    return 0;
    }*/
    //__________________________________________________________________________________