#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the number:";
    int n;
    cin>>n;
    int lastDigit;
    while(n>0){
      lastDigit = n%10;
      cout<<lastDigit;
      n=n/10;
      
      //revNo = revNo*10 + lastDigit;  // dekho isme kya hoga ki jab 10 se multiply karege too last place 
                                       // zero create hoga 123*10 = 1230 + __ ab unit place vacant h too usme ko bhi number place kar sakte h 
    }


}