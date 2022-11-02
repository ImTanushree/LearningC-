#include<iostream>
#include<vector>           
using namespace std;
vector<int>reverse (vector<int> v){
   int s= 0;
   int e= v.size()-1 ;
   while(s<=e){
   swap(v[s++], v[e--]); 

}
return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.


    
//case 1 : 1|2|3|4 + [6] second array is small value, when 4+6 ; 1 would be carried on 3
// case 2 : [6]+1|2|3|4 first array is small value , when 6+4 ; now we are left to deal with 123
//case 3 : 9|9|9+9|9|9  when  9|9|9+9|9|9 ; 9+9= 18; thus carry digit (1) given from index 0 will go beyond 0th index
//sum= 1+ 1
//carry = sum/10 ; fpr eg , 19+9= _8
// to find the number to be written on one's place , sum= sum%10 ; for eg 19+9= _8, one's place will have 8,  1 9+9= at one's place _9+9=18 , we will write 8 and carry 1 to 10's place , find this by 18%10=8
int i= n-1;  //last element of first array , of 'n' length , length = size 
int j= m-1 ; //last element of second array , of 'm' length 
int carry= 0; // initially considering carry to be zero
vector<int>ans;
while(i>=0 && j>=0) {
int val1 = a[i];
int val2 = b[j];
int sum = val1 + val2 + carry; 

carry = sum/10;
sum= sum%10;
ans.push_back(sum);
i-- ;
j-- ; 
}
//first case , here [j] work is done by 2 indexes 
while(i>=0){
    int sum= a[i]+ carry;
    carry= sum/10;
    sum= sum%10;
    ans.push_back(sum);
    i--;
}

//second case , here [i] work is done by 2 indexes 
while(j>=0){
    int sum= a[j]+ carry;
    carry= sum/10;
    sum= sum%10;
    ans.push_back(sum);
    j--;
}

//first case , here [j] work is done by 2 indexes 
while(carry != 0){
    int sum=carry;
    carry= sum/10;
    sum= sum%10;
    ans.push_back(sum);
    
}
return reverse(ans);



}


int main(){
    return 0;
}