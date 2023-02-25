//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx=1e6+123;
bitset<mx>is_prime;
vector<int> prime;
void primeGen(int n){
   n+=20;
  for(int i=3;i<=n;i+=2) is_prime[i]=1;
  int sq=sqrt(n);
  for(int i=3;i<=sq;i+=2){
    if(is_prime[i]==1){
      for(int j=i*i;j<=n;j+=(i+i)){
        is_prime[j]=0;
      }
    }
  }
  is_prime[2]=1;
  prime.push_back(2);
  for(int i=3;i<=n;i+=2){
    if(is_prime[i]==1) prime.push_back(i);
  }
}

int NOD (long long n){
  int ans=1;
  for(auto p:prime){
    if(1LL*p*p>n) break;
    if(n%p==0){
      int cnt =1;
      while(n%p==0){
        n/=p;
        cnt++;
      }
      ans*=cnt;

    }
  }
  if(n>1) ans*=2;
  return ans;
} 

int main(){
 
  optimize();
  int lim=1e6;
  primeGen(lim);
  int t; cin>>t;
  while(t--){
  long long n; cin>>n;
  cout<<NOD(n)<<endl;
  }

   return 0;
}
