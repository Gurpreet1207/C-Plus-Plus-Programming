#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(20);
    st.push(2);
    st.push(8);
    st.push(25);

    cout<<"size of stack :" << st.size() <<endl;

    cout<<"check stack is empty : "<< st.empty() <<endl;

    cout<<"stack element :";

    while(!st.empty())
     {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}