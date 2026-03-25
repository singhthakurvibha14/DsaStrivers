#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter n :";
    int n;
    cin>>n;
    // int divisor;
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
   
}