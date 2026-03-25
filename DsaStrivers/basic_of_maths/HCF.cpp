#include<bits/stdc++.h>
using namespace std;
int main(){
     int y , x;
    cout<<"enter x :"<<endl;  //x is the number  //x^n
    cin>>x;
    cout<<"enter n :"<<endl;
    cin>>y;
    
    for(int i=1 ; i<=min(x,y)  ;i++ ){   //hamne yaha "min" ka use kiya h jisse i minimum value ko bhi point kare 
       if(x%i==0 && y%i==0){             //varna yeh maximum value ko point karega aur syntax error ayega
        cout<<i<<" ";
       }


    }


   
    
}