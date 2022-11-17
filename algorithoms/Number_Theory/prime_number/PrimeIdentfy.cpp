//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e6+123;
bool is_prime[mx];
vector<int> prime;

void primeIdent( int n){
  memset(is_prime,1,sizeof(is_prime));
  is_prime[1]=0;
  for(int i=2;i<=n;i++){
    for(int j=i+i; j<=n; j+=i){
      is_prime[j] = 0;
    }
  }
  for(int i=2;i<=n;i++){
    if(is_prime[i]==1 ) prime.push_back(i);
  }
}
int main(){
  optimize();
  int n; cin>>n;
  primeIdent(n);
  for(auto u: prime) cout<<u<<" ";
    cout<<endl;
   return 0;
}
//nln(n)
