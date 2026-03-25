#include<bits/stdc++.h>
using namespace std;

//armstrong means 321 = 3*3*3 + 2*2*2 + 1*1*1 should be equal to 321 

int main(){
    cout<<"enter n : ";
    int n;
    cin>>n;
     int dup=n;
    int sum=0 ;
    while(n>0){
     int ld = n%10;
     n=n/10;
     int cube = ld*ld*ld;
      sum = sum +cube;
    }
    cout<<"the sum is:"<<sum<<endl;
    if(sum==dup){
        cout<<"the number is armstrong";
    }
    else{
        cout<<"the number is not armstrong";
    }

}