#include<iostream>
using namespace std;
class demo
{
    int demo;
    static int count;

public:
    void setdemo(void)
    {
        demo=++count;
    }
    void showdemo(void)
    {
        cout<<"Object number:"<<demo <<endl;
    }
    static void show_count()
    {
        cout<<"count:"<<count<<endl;
    }

};

int demo::count;
int main()
{
    demo d1,d2;
    d1.setdemo();
    d2.setdemo();
    demo::show_count();
    d1.showdemo();
    d2.showdemo();
    return 0;
}
