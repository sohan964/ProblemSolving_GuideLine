#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int cnt[100100];

int main(){
        optimize();
        
        vector<long long> v={546654654,245646554,1,1,546654654,245646554,1,1};
        map<long long, int> cnt;
        for(auto u:v) cnt[u]++;//it will sort automaticly
        //here u.first will be the long long vector and the u.second will be the cnt;
        for(auto u:cnt) cout<<u.first<<" "<<u.second<<endl;//it will print the element of each value


        //set id in a name
        map<string,int> id;
        id["sohan"]=1;//here 1 will be id.second
        id["shaon"]=2;
        id["sahin"]=3;//it will happen by lucgographacaly smalest
        for(auto u:id) cout<<u.first<<" "<<u.second<<endl;

}
