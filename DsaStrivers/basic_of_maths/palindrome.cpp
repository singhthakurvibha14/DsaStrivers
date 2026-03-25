#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the number : "<<endl;
    int n;
    cin>>n;
    int dup=n;           //dup mai n ki value store ki h 
    int revNo=0;
    while(n>0){
    int ld = n%10;
    n=n/10;
    revNo= revNo*10 + ld;
    }
    cout<<revNo<<endl;
    cout<<n<<endl;
    if(dup==revNo){      //yaha hamne n nahi liya kyuki n ki value 0 ho rahi h 
        cout<<"The number is palindraom";

    }
    else{
         cout<<"The number is not a palindraom";
    }
}