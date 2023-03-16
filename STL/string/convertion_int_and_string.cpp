#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int string_to_int(string s){
    int n=0;
    for(int i=0;i<s.size();i++){
        n*=10;
        n+=s[i]-'0';
    }
    return n;
}
string int_to_string(int n){
    string s="";
    while(n>0){
        s+=('0' + n%10);
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){

  optimize();
  

  string s1,s2; cin>>s1>>s2;
  
  int a;
  a=string_to_int(s1);
  int b;
  b=string_to_int(s2);
  cout<<a<<endl;
  cout<<b<<endl;
  int n=a+b;
  cout<<n<<endl;
  string s = int_to_string(n);
  cout<<"the string: ";
  cout<<s<<endl;
  
 
   return 0;
}
