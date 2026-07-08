#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.push_front(3);
    ls.push_back(4);
    ls.push_front(7);
    ls.pop_back();

    for(int ele : ls)
    cout << ele << " ";
    return 0;

}