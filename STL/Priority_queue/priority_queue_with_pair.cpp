#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
  optimize();
  //it make the larger value is top value 
  //then the 2nd larger value
    priority_queue<pair<int,int>> pq;//it will be auto sorted
    pq.push({1,4});
    pq.push({5,3});
    pq.push({7,0});
    pq.push({2,3});
    pq.push({3,2});
   
    while(!pq.empty()){
      cout<<pq.top().first<<" "<<pq.top().second<<endl;
      pq.pop();
    }
    cout<<endl;


    //small to larger
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> gpq;//it will be auto sorted
    gpq.push({1,4});
    gpq.push({5,3});
    gpq.push({7,0});
    gpq.push({2,3});
    gpq.push({3,2});
   
    while(!gpq.empty()){
      cout<<gpq.top().first<<" "<<gpq.top().second<<endl;
      gpq.pop();
    }
    
    

   return 0;

}
