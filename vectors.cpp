#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v; // Declaring vector
    v.push_back(1); // [1]
    v.emplace_back(2); //[1 , 2]; another way to push_back in vector
    cout<<v.at(0)<<" "<<v.at(1)<<endl;
    v.push_back(3); // [1,2,3]
    v.push_back(10); //[1,2,3,10]
    v.push_back(25);//[1,2,3,10,25]
    v.push_back(33);//[1,2,3,10,25,33]

    //print all elements at once
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    // deleting elements 
    v.pop_back();//[1,2,3,10,25]
    v.pop_back();//[1,2,3,10]
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.push_back(33);//[1,2,3,10,33]
    v.push_back(22);//[1,2,3,10,33,22]
    v.push_back(3);//[1,2,3,10,33,22,3]
    v.push_back(44);//[1,2,3,10,33,22,3,44]

    //using erase function
    v.erase(v.begin()+2 , v.begin()+5); // [1,2,22,3,44]; ----> [last , first)

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    //using iterators
    vector<int>::iterator it = v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    //erasing with the help of iterators
    it = v.begin();
    v.erase(it+1 , it+3);//[1,3,44]

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;




}