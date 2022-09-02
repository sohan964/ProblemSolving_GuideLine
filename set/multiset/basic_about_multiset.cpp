#include <bits/stdc++.h>
#include<cmath>

     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
       
       //multiset
       multiset<int> s;
       s.insert(1);
       s.insert(3);
       s.insert(1);
       s.insert(2);
       s.insert(3);
       s.insert(2);
       s.insert(2);
       for(auto u:s) cout<<u<<" ";//it will print sorted but not unique

       cout<<endl;
       cout<<s.size()<<endl;
       cout<<s.count(2)<<endl;//it will print how many time repite 2;

       s.erase( 1 );//it will erase all the ( 1 ) from the multiset
       for( auto u: s) cout<<u<<" ";
       cout<<endl;

       auto it=s.find( 3 ); //it will find one address of (3)
       s.erase(it);//it will erase the finded address.
       for( auto u:s ) cout<<u<<" ";
       cout<<endl;
        return 0;
     
}
