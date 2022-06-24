#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         string a;
         cin>>a;
         v.push_back( a );
    }
    
    reverse(v.begin(),v.end());//it's will print reverse all value
    for(auto u:v ) cout<<u<<" ";
    cout<<endl;
    cout<<v.back()<<endl;//here will print the back 
    v.pop_back();//this is for remove the back number;
    cout<<v.back()<<endl;//here will print the new back number
    v.erase( v.begin() );//also it will delet the 1st string;
    for(auto u:v ) cout<<u<<" ";
    cout<<endl;



return 0;
}
