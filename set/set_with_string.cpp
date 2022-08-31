#include <bits/stdc++.h>
#include<cmath>

     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
        
        set<string> s;
        s.insert("sohan");
        s.insert("shaon");
        s.insert("sahin");
        s.insert("sohan");
        s.insert("shaon");
        s.insert("sahin");
        cout<<s.size()<<endl;
        for(auto u:s) cout<<u<<endl;

        return 0;

        
}
