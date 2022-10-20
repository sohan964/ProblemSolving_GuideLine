#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
  optimize();
  //it make the larger value is top value 
  //then the 2nd larger value
    priority_queue<int> pq;//it will be auto sorted
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(4);
    pq.push(2);
   //the top value will be 5;
    while(!pq.empty()){
      cout<<pq.top()<<" ";
      pq.pop();
    }
    cout<<endl;
    cout<<pq.size()<<endl;

    //make priority_queue small to larger
    priority_queue<int, vector<int>, greater<int>> gpq;
    gpq.push(1);
    gpq.push(5);
    gpq.push(3);
    gpq.push(4);
    gpq.push(2);
    //but here the top value will be 1;
    while(!gpq.empty()){
      cout<<gpq.top()<<" ";
      gpq.pop();
    }
    cout<<endl;
    cout<<gpq.size()<<endl;



   return 0;

}
