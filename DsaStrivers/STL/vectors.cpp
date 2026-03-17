// #include<bits/stdc++.h>
// using namespace std;
// void explainvector(){
//  vector<int>v; //insilization of vector

//  v.push_back(5);   //use to push the value in the vector
//  v.emplace_back(3); // it is also use to push the value in the vector but it is faster than push back 

//  vector <pair<int,int>> vec; //to insitilize the pair in the vector

//  vec.push_back({1,3});  //use to push the pair in the vector

//  vector<int>v(5); // here we intilize the vector as well as size of vector but we can dynamically increase the size of vector

//  vector<int>v1(v); //we make the copy of v in the another container named as v1

//  //-------------------------------------------------------------------------------//

//  vector<int>::iterator it = v.begin(); //this "it" is generally a name it can be anything
//                                        //begin means,access karna starting se start karega 
//                                        //v.begin memory address ko access karta h 
//  it++; 
                                 
//  cout<<*(it)<<" ";                     //*(it) value ko access karta h 

//  vector<int>::iterator it = v.end();   //this end point the value right after last value (means akheri value ke baad point karega )

//  //to print the vector using loops

//  for(vector<int>::iterator it = v.begin() ; it!=v.end() ; it++){
//     cout<<*(it)<<" ";
//  }

//  for(auto it=v.begin(); it!=v.end() ; it++){
//     cout<<*(it)<<" ";        //another way to print vector using for loop and using auto which it buildin library of stl
//  }

//  for(auto it : v){           //using for-each loop
//     cout << it<<" ";
//  }

// }

// int main(){
//     explainvector();
// }


#include<bits/stdc++.h>
using namespace std;

void explainvector(){

    vector<int> v; // initialization of vector

    v.push_back(5);
    v.emplace_back(3);

    vector<pair<int,int>> vec;
    vec.push_back({1,3});

    vector<int> v2(5); // new vector with size 5

    vector<int> v1(v); // copy of v

    // Iterator
    vector<int>::iterator it = v.begin();
    it++;

    if(it != v.end())
        cout << *(it) << " ";

    // loop using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    // using auto
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    // for-each loop
    for(auto it : v){
        cout << it << " ";
    }
}

int main(){
    explainvector();
}