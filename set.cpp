#include <bits/stdc++.h>
using namespace std;

// set stores values in sorted manner and only stores unique value
int main(){
    set<int>st;
    st.insert(1); // [1]
    st.emplace(2); //[1,2]
    st.insert(10); // [1,2,10]
    st.insert(3); // [1,2,3,10]
    st.insert(22); // [1,2,3,10,22]
    st.insert(1); // will not insert it

    //printing 
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    //erase function
    st.erase(3);
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    st.insert(11); // [1,2,10,11,22]
    st.insert(8); // [1,2,8,10,11,22];

    // erase range
    auto it1 = st.find(8);
    auto it2 = st.find(11);
    st.erase(it1,it2); // [1,2,11,22] ----> [first , last)

    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;

    st.insert(3);
    st.insert(5);
    st.insert(31);
    st.insert(44); //[1,2,3,5,11,22,31,44]

    auto it3 = st.find(5);
    while(it3!=st.end()){
        cout<<*it3<<" ";
        it3++;
    }
    cout<<endl; 
    

}