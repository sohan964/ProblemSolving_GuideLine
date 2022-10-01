#include<bits/stdc++.h>
using namespace std;
//this line for make more fast cin and cout
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//it will call form the main function of the beging

int main(){
    optimize();
    //convert int to string
    int a=123;
    string s= to_string ( a );//it will convert a(int) to s(string)
    cout << s << endl;//it will a string
    s[0]='5';//here 5 will replace with 1 number index that mean s[0] / char ( 1 )
    cout << s <<endl;
    
    //convert string to int
    string sh ="345";
    int numb = stoi( sh );//it will convert the string ( sh ) to int ( numb )
    cout<< numb <<endl;//here will print a int value
    numb++;//numb will be 346
    cout<< numb <<endl;

}
