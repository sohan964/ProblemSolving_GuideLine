#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();

        //find unique pair
        vector<pair<string,int>> v;
        v.push_back({"sohan",4});
        v.push_back({"sahin",2});
        v.push_back({"saon",5});
        v.push_back({"sohan",4});
        v.push_back({"sahin",2});
        v.push_back({"saon",5});
        sort(v.begin(),v.end());
        int Sz=unique(v.begin(),v.end())-v.begin();
        for(int i=0;i<Sz;i++){
                cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        


   return 0;
}
