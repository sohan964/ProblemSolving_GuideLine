#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
        
        set<int> s={1,2,3,2,3,2};
        //set will print always sort and unique;
        for(auto u:s ) cout<<u<<" ";
        cout<<endl;

        //using iterator print set
        set<int>::iterator it;
        for(it = s.begin();it!=s.end();it++){
                cout<<*it<<" ";
        }
        cout<<endl;

        s.clear();
        cout<<s.empty()<<endl;//it will print bool 1;

        //take input on set
        s.insert(5);
        s.insert(6);
        s.insert(7);
        s.insert(6);
        cout<<s.size()<<endl;//size will be 3 because set make all values unique
        for(auto u:s) cout<<u<<" ";
        cout<<endl;

        //count() will print the number how mani time repert;
        cout<<s.count(6)<<endl;//it's will 1 because for unique formet
        
        cout<<*s.begin()<<endl;//it will print the frist value of the set;
        cout<<*(--s.end())<<endl;//it will print the last element
        //in set s.end()-1 is not work also s.begin+1 not work

        //s.erase();
        s.erase(6);//it will erase 6 from the set
        for( auto u:s) cout<<u<<" ";
        cout<<endl;
        s.erase(s.begin());//it will erase the 1st element
        for(auto u:s) cout<<u<<" ";
        cout<<endl;

        
        
        return 0;
        
}
