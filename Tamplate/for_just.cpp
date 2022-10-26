//  BISMILLAHIR RAHMANIR RAHIM //

//intersection with binary_search //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
  optimize();
   
   long long n,k; cin>>n>>k;
   vector<long long> v1(n),v2(k);

   for(int i=0;i<n;i++) cin>>v1[i];
   for(int i=0;i<k;i++) cin>>v2[i];


   sort(v1.begin(),v1.end());
   sort(v2.begin(),v2.end());

   vector<int> res;

   for(auto u: v1){
    if(binary_search(v2.begin(),v2.end(), u )){
        res.push_back(u);
    }
   }
   int sz = unique (res.begin(),res.end())-res.begin();
   
   while( res.size()>sz ) res.pop_back();
   for(auto u: res) cout<<u<<" ";
   cout<<endl;
    
}

// it's done
