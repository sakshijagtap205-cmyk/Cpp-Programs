#include<iostream>
using namespace std;
class Base 
{
    public:
        int i,j;
        void fun()
        {
            cout<<"inside base fun\n";
        }
};
class Derived: public Base
{
    public:
        int X;

            void gun()
            {
                cout<<"Inside Derived gun\n";
            }
};
int main()

{
    Base bobj;

    Derived dobj;

    cout<<"size of Base class object :"<<sizeof(bobj)<<"\n";
    cout<<"size of Base class object :"<<sizeof(dobj)<<"\n";

    return 0;
}
