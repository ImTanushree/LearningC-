#include<iostream> //WAP TO FIND OUT AREA FOR MULTIPLE SHAPES
using namespace std;

float square( float l){
float area=l*l;





    return area;
}

float rectanglearea(){
float area;





    return area;
}

float trianglearea(){
float area;





    return area;
}

int main() {

    int sides=0;


cout<<"enter number of sides /n 1-square /n2-rectangle /n3-triangle " <<endl;
cin>>sides;
float lengths[10]={0};

for(int i=0; i<sides ; i++)
{
cout<<"enter length "<<i+1<<" ";
cin>>lengths[i];
}

switch (sides){
case 1: 
cout<<"area of sq is " <<square()







}



return 0;
}