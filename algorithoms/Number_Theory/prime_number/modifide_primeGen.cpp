//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

//this for policy based DS

#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree <long long, null_type, less_equal<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds_set;
// cout<<*x.find_by_order(1) <<endl; // iterator to k-th largest element
// cout<<x.order_of_key(-3)<<endl; // number of items in a set that are strictly smaller than the item

// up to this

typedef long long   ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef double dl;
typedef vector<int>::iterator vi_it;


#define endl '\n'
#define F first
#define S second
#define PB push_back
#define PF push_front
#define B begin
#define E end



#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e6+123;
bool is_prime[mx];

vi v;

void primeGen(int n){
  //n+=123;
  v.PB(2);
  for(int i=3;i<=n;i+=2) is_prime[i]=1;
  int sq= sqrt(n);

  for(int i=3;i<=sq;i+=2){
    if(is_prime[i]==1){
      for(int j=i+i;j<=n;j+=(i*i)){
        is_prime[j]=0;
      }
    }
  }
  for(int i=3;i<=n;i+=2){
    if(is_prime[i]==1) v.PB(i);
  }

}

int main(){
  optimize();

    int n; cin>>n;

    primeGen(n);
    
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
    cout<<v.size()<<endl;

   return 0;

}
