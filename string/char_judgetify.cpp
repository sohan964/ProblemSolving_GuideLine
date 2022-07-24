#include<bits/stdc++.h>
using namespace std;
//this line for make more fast cin and cout
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//it will call form the main function of the beging

int main(){
    optimize();
    
    char c = 'A';
    //it will judgetify the charecter is upper case or not
    bool fi = isupper ( c );//if the char is upper case it will return 1 other wish 0
    cout<< fi<<endl;//output will be 1

    char c1 = 'a';
    //it will judgetify the charecter is lower case or not
    bool f1 = islower ( c1 );//if the char is lower case it will return 1 other wish 0
    cout<< f1<<endl;//output will be 1

    char sp = ' ';
    //it will judgetify the charecter is space or not
    bool spc = isspace( sp );//if the char is space it will return 1 other wish 0
    cout<< spc<< endl;
  

}
