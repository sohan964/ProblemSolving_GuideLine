//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
  optimize();
  
  //find divisors of a number

  int n; cin>>n;
  
  vector<int> divisors;
  int sq = sqrt(n);
  for(int i=1; i<=sq;i++){
    if(n%i==0){
      divisors.push_back( i );
      if(n/i != i) divisors.push_back(n/i);
    }
  }
  sort(divisors.begin(),divisors.end());
  for(auto u:divisors) cout<<u<<" ";
  cout<<endl;

   return 0;
}
