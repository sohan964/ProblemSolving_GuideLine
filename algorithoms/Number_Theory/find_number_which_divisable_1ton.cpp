//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e6+123;
vector<int> divisors[mx];
int main(){
  optimize();
  //find 1 to n are which numbers divisors
  int n; cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=i; j<=n;j+=i){
      divisors[j].push_back(i);
    }
  }

  for(int i=1;i<=n;i++){
    for(auto u:divisors[i]) cout<<u<<" ";
    cout<<" : "<<i<<endl;
  }
   

   return 0;
}
