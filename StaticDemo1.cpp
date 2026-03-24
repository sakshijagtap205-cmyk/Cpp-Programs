#include<iostream>
using namespace std;

class Demo
{

    public:
        int i;
        int j;
        static int x;

        Demo()
        {
            this->j=0;
            this->j=0;
        }

        Demo(int a, int b)
        { 
            this->i=a;
            this->j=b;
        }
        void Fun()
        {
            cout<<"inside Fun\n";

        }
        static void Gun()
        {
            cout<<"inside Gun\n";

        }
};
int Demo:: x = 11;

int main()
{
    Demo::Gun();
    cout<<"value of x is : "<<Demo::x<<"\n";
    return 0;
}

