#include<iostream>
using namespace std;
int main() {
int a=1,b=2,c=10;

if((c+a+b)<(a+b+c))
{c=3+a;
if((c+a+b)>(b+c))
c=(a+a)+a;
else  a=c+a;

c=(3+3)+a;
}
else{
c=(a+b)+a;
if((a-b)<(b-a))
c=7+c;
else c=b+a;

}

cout<<a+b+c;





return 0;

}