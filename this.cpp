#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int iNO1;
    int iNO2;

    Arithematic()
    {
        this->iNO1=0;
        this->iNO2=0;
    }

    Arithematic(int A , int B)
    {
        this->iNO1=A;
        this->iNO2=B;
    }
    int Addition()
    {
        int iAns =0;
        iAns =this->iNO1 + this->iNO2;
        return iAns;
    }
    int Substraction()
    {
        int iAns=0;
        iAns=this->iNO1-this->iNO2;
        return iAns;
    }
};

int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(21,20);


    int iRet =0;
    iRet= aobj1.Addition();
    cout<<"Addition is:"<<iRet<<"\n";

     iRet= aobj1.Substraction();
    cout<<"substraction is:"<<iRet<<"\n";

     iRet= aobj2.Addition();
    cout<<"Addition is:"<<iRet<<"\n";


     iRet= aobj2.Substraction();
    cout<<"substraction is:"<<iRet<<"\n";

    return 0;
}