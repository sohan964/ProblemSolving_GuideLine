#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int cnt[100100];

int main(){
        optimize();
        
        vector<int> v={1,2,3,1,3,2};
        for(int i=0;i<v.size();i++){
                cnt[v[i]]++;//it will count all the element how many time repet
        }
        
        sort(v.begin(),v.end());
        int Sz=unique(v.begin(),v.end())-v.begin();
        for(int i=0;i<Sz;i++) cout<<v[i]<<"="<< cnt[v[i]]<<endl;
       
        
}
