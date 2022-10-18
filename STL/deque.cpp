#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
  optimize();
    
    //deque work like fifo and lifo bought
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);
    cout<<dq.front()<<" "<<dq.back()<<endl;//output 3 5
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;//output 2 4
   return 0;

}
