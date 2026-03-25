#include<bits/stdc++.h>
using namespace std;
int main(){
     int n , x;
    cout<<"enter x :"<<endl;  //x is the number  //x^n
    cin>>x;
    cout<<"enter n :"<<endl;
    cin>>n;
    int power=1;
    for(int i=1 ; i<=n ;i++ ){
        power=power*x;
    }
    cout<<power;
}