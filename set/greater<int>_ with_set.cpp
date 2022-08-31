#include <bits/stdc++.h>
#include<cmath>

     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
        
        set<int, greater<int>> s;//it's will print decrsing order
        s.insert(10);
        s.insert(5);
        s.insert(3);
        s.insert(4);
        s.insert(7);
        s.insert(5);
        for(auto u:s) cout<<u<<" ";
        cout<<endl;
     
}
