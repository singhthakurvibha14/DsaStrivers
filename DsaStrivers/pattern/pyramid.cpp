#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter n: "; 
    cin>>n;
    cout<<"enter m :";
    cin>>m;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=m ; j++ ){
            if(j>n-i && j<n+i){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
            // cout<<"*";
        }
        cout<<endl;
    }
}