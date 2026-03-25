#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter n :";
    int n;
    int fact=1;
    cin>>n;
    for(int i=n ; i>=1 ; i--){
        fact=fact*i;
    }
    cout<<fact;
}