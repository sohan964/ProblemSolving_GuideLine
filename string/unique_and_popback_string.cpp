#include<bits/stdc++.h>
using namespace std;
//this line for make more fast cin and cout
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//it will call form the main function of the beging

int main(){
    optimize();

    string s = "abcd";
    s.pop_back();//it will remove the back character from the string

    cout<< s.back()<<endl;//it will print the back charecter
     
    //find unique string from all string
    string name;
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>name;
     v.push_back(name);
    }
    sort(v.begin(),v.end());
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
    int sz= unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<sz;i++) cout<<v[i]<<" ";//it will print only unique string
    cout<<endl;

}
