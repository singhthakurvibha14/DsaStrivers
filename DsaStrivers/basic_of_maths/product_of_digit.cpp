#include<bits/stdc++.h>
using namespace std;

int main(){   //largest digit in number
    cout<<"Enter n :";
    int n ;
    cin>>n;
    int multi = 1;
    while(n>0){
        int ld = n%10;
        multi = multi*ld;
        n=n/10;
    }
    cout<<multi;
}