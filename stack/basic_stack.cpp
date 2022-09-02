#include <bits/stdc++.h>
#include<cmath>

     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
       
       //stack...we can use iterator in stack.
       stack<int> st;//it's call lifo
       st.push(1);
       st.push(2);
       st.push(3);
       st.push(4);
       cout<<st.size()<<endl;//it will be the size of the stack
       cout<<st.top()<<endl;//last element will be the top value


        st.pop();//it will erase the top element. so the last value will be delete
        cout<<st.top()<<endl;//it will be 3. because 4 was delete


        while(!st.empty()){
                cout<<st.top();//it will print the top element at frist
                st.pop();//it will erase the top element and then the top element will be second top value
                cout<<endl;
                //end of the loop the stack will be empty();
        }

        return 0;
     
}
