#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();

        pair<int,int> p;//it can make pair with 2 defirent types of variable


        p.first=3;
        p.second= 7;
        cout<<p.first<<endl;//3
        cout<<p.second<<endl;//7


        pair<string, vector<int> > pr;
        pr.first="sohanurr";
        pr.second={7,9,1};
        cout<<pr.first;//sohanurr
        for(auto u:pr.second) cout<<u;//it will 791
        cout<<endl;

        pair<int, int> pir;
        pir=make_pair(2,3);//it will add 2 and 3 pair like push_back
        cout<<pir.first<<" "<<pir.second<<endl;

        pair<int,int> dip;
        dip={20,30};
        cout<<dip.first<<" "<<dip.second<<endl;//20 30


   return 0;
}
