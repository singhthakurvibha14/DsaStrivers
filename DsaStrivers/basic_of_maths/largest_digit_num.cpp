#include<bits/stdc++.h>
using namespace std;

int main(){   //largest digit in number
    cout<<"Enter n :";
    int n ;
    cin>>n;
    int max=0;
    while(n>0){
        int ld = n%10;
        if(max<ld){
            max=ld;
        }
        n=n/10;
    }
    cout<<max;
}