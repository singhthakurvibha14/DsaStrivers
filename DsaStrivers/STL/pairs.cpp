#include<bits/stdc++.h>
using namespace std;

void pairs(){
pair<int,int>p={1,3};
cout<<p.first<<endl;        //we are using first keyword so it points first means 1 

pair<int,pair<int,int>>q={2,{3,5}};   //here we are storing pair in already existing pair
cout<<q.second.second<<endl;          //it will give us output as 5 

}



int main(){
    pairs();
}