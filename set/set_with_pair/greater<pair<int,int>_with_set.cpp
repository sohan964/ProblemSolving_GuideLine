#include <bits/stdc++.h>
#include<cmath>

     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
        
        set<pair<int,int>, greater<pair<int,int>>> s;//it's will print decrsing order
        s.insert({10,1});
        s.insert({9,2});
        s.insert({8,3});
        s.insert({7,4});
        s.insert({6,5});
        s.insert({10,2});
        for(auto u:s) cout<<u.first<<" "<<u.second<<endl;//it's will print luckgo graphacali larger to smaller

        cout<<endl;
     
}
