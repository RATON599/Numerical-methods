#include<iostream>
using namespace std;
float a,b,c,f;
void bisection(float a,float b)
{
    cout<<"bisection method"<<endl;
    c=(a+b)/2;
    for(int i=0;i<20;i++)
    {
        f=c*c+4*c-10;
        if(f<0)
            a=c;
        else
            b=c;
        c=(a+b)/2;
    }
}

int main()
{
    cin>>a>>b;

    bisection(a,b);
    cout<<"The Root is "<<c<<endl;
    return 0;

}
