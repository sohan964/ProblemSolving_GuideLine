#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();

        //pair sorting with vector;
        vector<pair<int,int>> v;
        v.push_back({6,4});
        v.push_back({3,2});
        v.push_back({6,5});
        sort(v.begin(),v.end());

        for(auto u:v) cout<<u.first<<" "<<u.second<<endl;

        //pair sorting with array
        pair<int,int> p[]={{6,2},{5,2},{5,3}};
        sort(p,p+3);
        for(int i=0;i<3;i++){
                cout<<p[i].first<<" "<<p[i].second<<endl;

        }

        
   return 0;
}
