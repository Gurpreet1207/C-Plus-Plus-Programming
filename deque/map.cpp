#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m;
    m.insert({1,"Ram"});
    m[2] = "Preet";
    m.insert(make_pair(1,"Kapoor"));
    m.insert({4,"Bonuu"});
    m.insert({3,"ayushi"});

    for(auto ele : m){
        cout<< ele.first<<" : " <<ele.second << endl;
    }
    return 0;

}