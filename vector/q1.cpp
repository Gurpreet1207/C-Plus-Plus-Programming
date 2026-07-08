#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b) {
    if(a > b)
    return false;
    else
    return true;
}

int main()
{
   vector<int> a;
   a.push_back(10);
   a.push_back(20);
   a.push_back(30);
   a.push_back(50);
   a.push_back(40);
   a.push_back(60);

   cout<< "Front element : "<< a.front() <<endl;
   cout<< "last element : "<< a.back() <<endl;

   for(int ele : a){
    cout<< ele << " ";
   }
   sort(a.begin(),a.end(),compare); //o(nlogn)
   cout<<"sorted Vector : ";
   for(int ele : a) {
    cout << ele << " ";
   }
   return 0; 
}
