#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();

        //pair compiar
        pair<int,int > p1,p2;

        p1={3,5};//p1 big becouse 1st digit is large
        p2={2,7};
        if(p1>p2)cout<<"yes"<<end;

        //find minimum and maximum between 2 pair
        pair<int,int> p= min(p1,p2);//it will print the minimum pair
        cout<<p.first<<" "<<p.second<<endl;
        
        pair<int,int>pp=max(p1,p2);//maximum
        cout<<pp.first<<" "<<pp.second<<endl;


   return 0;
}
