// this->data member = parameter
//to reduce naming conflict
// when data member and parameter have same name
#include<iostream>
using namespace std;
class date{
    private:
    int years,day,month;
    public:
    date(int years,int day,int month)
    {
       this->years=years;
       this->day=day;
       this->month=month;
       cout<<"constructor called!!"<<endl;
    }
    void show()
    {
        cout<<"Date(DD-MM-YY):"<<day<<"-"<<month<<"-"<<years<<endl;
    }

};
int main(){
    date obj(2026,20,7);
    obj.show();
    return 0;
}