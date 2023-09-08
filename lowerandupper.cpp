#include <bits/stdc++.h>
using namespace std;

//lower_bound()->if element is then return it otherwise greater than that
//upper_bound()->element ho ya na ho but uska greater element hi milega
int main(){
    vector<int>v;
    v.push_back(1);//[1]
    v.push_back(4); // [1,4]
    v.push_back(10); 
    v.push_back(3); 
    v.push_back(25);
    v.push_back(33);  
    int n = v.size();
    sort(v.begin(),v.end()); // IN THE CASE OF VECTORS AND ARRAYS WE HAVE TO FIRST SORT THEM.
    auto it = lower_bound(v.begin() , v.end() , 4);
    cout<<(*it)<<endl; //4

    it = lower_bound(v.begin() , v.end() , 5);
    cout<<(*it)<<endl;//10

    it = upper_bound(v.begin(),v.end(),25);
    cout<<(*it)<<endl; //33

    it = upper_bound(v.begin(),v.end(),33);
    cout<<(*it)<<endl; //garbage value

    // """"""""""""""""notes"""""""""""""""""""""""""""""""""//
    /*IN CASE OF MAPS AND SETS WE DON'T NEED TO SORT THEM AS THEY ARE ALREADY SORTED
    IN CASE OF MAPS AND SETS , how to acces lower_bound() and upper_bound()
    set<int>st;
    auto it = st.lower_bound(5);
    auto it = st.upper_bound(10) T.C - O(LOGN)

    if we do this
    auto it = lower_bound(st.begin(),st.end(),5); T.C-O(N)
    */

    

}