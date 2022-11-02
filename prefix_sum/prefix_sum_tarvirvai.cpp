//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef double dl;


#define endl '\n'
#define F first
#define S second
#define PB push_back
#define PF push_front
#define B begin
#define E end


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int arr[1000];

int main(){
  optimize();
    
    int x, sum = 0;
    cin >> x;
     int arr[x];
     arr[0]=0;
    for(int i=1;i<=x;i++){
      cin >> arr[i];
      sum += arr[i];
      arr[i] = sum;
    }
    int q;
    cin >> q;
    while(q--){
      int a, b;
      cin >> a >> b;
      cout << arr[b] - arr[a-1 ] << endl;
    }
   return 0;
}
