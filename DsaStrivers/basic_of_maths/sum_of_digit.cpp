#include<bits/stdc++.h>
using namespace std;

int main(){
 cout<<"Enter the n : ";
 int n ; 
 cin>>n;  //123
 int sum = 0;
 while(n>0){
    int ld = n%10; //3
   
     sum = sum+ld;  

      n=n/10;
 }
    cout<<sum<<endl;
}