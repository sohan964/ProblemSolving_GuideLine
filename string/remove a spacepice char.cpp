#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcdaabca";
    //it will remove 'a' from the string
    s.erase( remove (s.begin(),s.end(),'a'),s.end());
    cout<<s;
    cout<<endl;
 return 0;
}
