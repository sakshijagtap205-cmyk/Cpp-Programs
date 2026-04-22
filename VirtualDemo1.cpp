#include<iostream>
using namespace std; 

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"inside Base fun\n";
        }
                void gun()
        {
            cout<<"inside Base fun\n";
        }
                void sun()
        {
            cout<<"inside Base fun\n";
        }
                void bun()
        {
            cout<<"inside Base fun\n";
        }
};

class Derived: public Base
{
    public:
        int X;
             void gun()
        {
            cout<<"inside Derived gun\n";
        }

        void sun()
        {
            cout<<"inside Derived sun\n";
        }

        void run()
        {
            cout<<"inside Derived run\n";
        }

        void mun()
        {
            cout<<"inside Derived mun\n";
        }

};

int main()
{
    Base *bp1=new Base();              //Nocasting
    Derived *dp1 = new Derived();      //Nocasting
    Base*bp2 = New Derived();          //upcasting
    Derived *dp2= new Base();          //Downcasting
    return 0;
}
