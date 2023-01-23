//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

vector<long long> prime;
const int mx=3e3+123;
bitset<mx> is_prime;

//primeGen (sieve)
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

//primefactorization function
vector<int> harmonicPrimeFact[mx];

int main(){
 
  optimize();
  int lim=3e3;
  primeGen(lim);

    //harmonic Prime Factorization
    for(auto p: prime){
      for(int i=p;i<=lim;i+=p){
        harmonicPrimeFact[i].push_back(p);
        //divisors will go on the number
      }
    }
    for(int i=1;i<=10;i++){
      cout<<i<<" : ";
      for(auto u:harmonicPrimeFact[i]) cout<<u<<" ";
      cout<<endl;
    }

   return 0;
}
