#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector< vector<int> >v;//this is for 2D vector declayration
    
    vector<int> a1={2,3,4};//1st vector
    vector<int> a2={2,3,4,5,6};//2nd vector
    
    v.push_back( a1 );
    v.push_back( a2 );
    for( auto u:v ){
        for( auto g:u ) cout<<g<<" ";//here will print at frist a1 after a2
        cout<<endl;
    }

    return 0;
}
