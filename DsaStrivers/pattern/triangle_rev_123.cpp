#include<iostream>
using namespace std;
int main(){
    cout<<"Enter n:";
    int n;
    cin>>n;
    for(int i=n ; i>=1 ; i-- ){
        for(int j=1 ; j<=i ;j++  ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}