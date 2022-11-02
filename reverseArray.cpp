#include<iostream>
using namespace std;
int main() {
int A=0, ON=2345, R;
for (  ; ON!=0;ON=ON/10 )

{ cout<<ON<<endl;
R=ON%10;
A=A*10+R;
cout<<R<<endl;
cout<<A<<endl;
cout<<endl;
}
cout<<endl;
cout<<A<<endl;

return 0;

}