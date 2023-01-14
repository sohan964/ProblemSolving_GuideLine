//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl  '\n'

const int mx=1e7+123;
bitset<mx> is_prime;
vector<int> prime;
void primeGen(int n){
    // n+=30;
     
     for(int i=3;i<=n;i+=2) is_prime[i]=1;
     int sq= sqrt(n);
     
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

//it's a return type vector for primeFactorization
vector<long long> primeFactor( long long n){
     vector<long long> ans;
     for(auto u : prime){
          if(1LL*u*u > n) break;
          if(n%u==0){
               while(n%u == 0){
                    ans.push_back(u);
                    n/=u;
               }
          } 
     }
     if(n>1) ans.push_back(n);

     return ans;
}

int main(){
  optimize();

     primeGen(1e7);
     long long n; cin>>n;
     vector<long long> ans = primeFactor(n);
     
     map<long long,int> cnt;
     for(auto u:ans) cnt[u]++;
    
     for(auto u:cnt) cout<<u.first<<"^"<<u.second<<endl;

   return 0;
}
