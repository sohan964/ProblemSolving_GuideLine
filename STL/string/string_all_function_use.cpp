#include<bits/stdc++.h>
using namespace std;
//this line for make more fast cin and cout
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//it will call form the main function of the beging

int main(){
    optimize();//it's calling define optimize() function.

    string s;
    s = s + 'a';//it's work like vector push_back
    s = s + 'b';// so, here s = ab.
    s+='c';//also it's call string concatination
    cout<<s<<endl;
    cout<< s[1]<<endl;//here will print 'b'

    string s1="sohanur ",s2="rahman";
    s1+=s2;
    cout<<s1.empty()<<endl;//s1 is not empty so output will be 0
    cout<<s1<<endl;
    s1.clear();//it's for clear s1 elements
    cout<<s1.empty()<<endl;//here s1 is empty so, it's true output will be 1

    string sh = "Hello every one";
    for( auto u:sh ) cout<<u;//here will print the string using for_is_loops
    cout<<endl;//endl do flash the program, it make the program solo.
    //that why we should use '\n'. we can define '\n' outside the main function by the name endl
    string::iterator it;//iterator diclayeration for string
    for( it=sh.begin(); it!=sh.end();it++) cout<< *it;//here will all charactor
    cout<<endl;

    reverse(sh.begin(),sh.end());
    cout<<sh<<endl;

    string pa;
    getline(cin,pa);//it will take input multipal string
    cout<<pa<<endl;

    //it's for find unique char from the string
    string uniq="aabbccAdeE";
    sort(uniq.begin(),uniq.end());
    int sz=unique(uniq.begin(),uniq.end())-uniq.begin();//it's the unique string length
    for(int i=0;i<sz;i++) cout<<uniq[i];//here will print the uniqe string
    //that's mean all unique char
    cout<<endl;
    cout<<*max_element(uniq.begin(),uniq.end());
    cout<<endl;
    cout<<max_element(uniq.begin(),uniq.end())-uniq.begin();
    cout<<endl;

    uniq.erase( uniq.begin());//it's will erase the frist char
    //from the string
    cout<<uniq;
    cout<<endl;


    //luckgograficaly compair for multibal string
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         string a;
         cin>>a;
         v.push_back( a );
    }
    sort(v.rbegin(),v.rend());//string sorting 
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    cout<<*max_element(v.begin(),v.end());//here will find the max string
    cout<<endl;
     
    reverse(v.begin(),v.end());//it's will print reverse all value
    for(auto u:v ) cout<<u<<" ";
    cout<<endl;

 return 0;
}
