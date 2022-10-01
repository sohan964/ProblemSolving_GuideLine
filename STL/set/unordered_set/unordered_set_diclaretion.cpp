#include <bits/stdc++.h>
#include<cmath>

     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
        
        unordered_set<int> s;//it will make unique but not sorted
        s.insert(5);
        s.insert(7);
        s.insert(3);
        s.insert(4);
        s.insert(7);
        s.insert(3);
        for(auto u:s) cout<<u<<" ";
        cout<<endl;
     
}
