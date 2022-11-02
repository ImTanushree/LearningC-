#include<iostream> //WAP TO PRINT PRIME NUMBERS BETWEEN A and B

using namespace std;
int main() {
    int a;
    int b;
    cin>>a>>b;

    for(int num=a; num<=b; num++) 
    {
        int i; //pehle nested forloop k wjhsww andr initialise hue the lekin bahr ho ab kyuki bahr wali loop se comparision krenge tmhara
        for(i= 2; i<num; i++ )// n se pehle tk k for eg 17; 17/16 isnilie <n, divide hogya konno chutke se matlb non prime 
        {
            if (num%i==0) {
            break; }
        }
        if (i==num) { // min would be a max would be b a to b ke andar sare numb check horhe h, if i k barabar mtlb khud hise div ho skte h chutke se nhi mtlb prime numb
cout<<num<<endl;

        }
    }
    return 0;
}