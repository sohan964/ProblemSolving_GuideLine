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
  
  primeIdent(1e6);
  
  int n;
  while(cin>>n){
    if(n==0) break;

    int diferance =-1, p1=-1,p2=-1;
    for(auto u:prime){
      if(u>n) break;

      int tp1=u,tp2=n-u;
      if(tp2>2 && is_prime[tp2]==1){
        if(abs(tp1-tp2)>diferance){
          diferance = abs(tp1-tp2);
          p1 = tp1;
          p2 = tp2;
        }
      }
    }
    if(p1==-1) cout<<"Sorry!"<<endl;
    else cout<<p1<<"+"<<p2<<endl;
  }
   return 0;
}
