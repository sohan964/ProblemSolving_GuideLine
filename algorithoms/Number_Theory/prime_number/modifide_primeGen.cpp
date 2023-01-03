//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e8+123;
bool is_prime[mx];

vector<int> v;

void primeGen(int n){
  n+=100;
  
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
  v.push_back(2);

  for(int i=3;i<=n;i+=2){
    if(is_prime[i]==1) v.push_back(i);
  }

}

int main(){
  optimize();

    int n=1e8;

    primeGen(n);
    
    cout<<v.size()<<endl;

   return 0;

}
