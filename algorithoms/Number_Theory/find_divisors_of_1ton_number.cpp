//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> divisors[123];
int main(){
  optimize();
  
  //find divisors of 1 to n;
   int n; cin>>n;
   for(int i=1;i<=n;i++){
    int sq = sqrt(i);
    for(int j=1; j<=sq;j++){
      if(i%j==0){
        divisors[i].push_back(j);
        if(i/j != j) divisors[i].push_back(i/j);
      }
    }
   }
   for(int i=1;i<=n;i++){
    cout<< i <<" : ";
    for(auto u : divisors[i]) cout<<u<<" ";
    cout<<endl;
   }
  

   return 0;
}
