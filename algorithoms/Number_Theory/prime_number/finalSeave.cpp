#include<bits/stdc++.h>
using namespace std;

const int mx=1e6+123;
bitset<mx> is_prime;
void primeGen(int n){
    n+=50;
    for(int i=3;i<=n;i+=2) is_prime[i]=1;
    
    int sq=sqrt(n);
    for(int i=3;i<=sq;i+=2){
        if(is_prime[i]==1){
            for(int j=i*i;j<=n;j+=(i+i)){
                is_prime[j]=0;
            }
        }
    }
}

int main(){
  int n; cin>>n;
  primeGen(n);
}
