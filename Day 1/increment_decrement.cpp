#include<iostream>
using namespace std;

int main()
{
    int a=0,i=1;
    cout<<"Post Increment: "<<endl;
    cout<<"a=a+(i++): "<<(a+(i++))<<endl;
    cout<<"i: "<<i<<endl;

    a=0,i=1;
    cout<<"Pre Increment: "<<endl;
    cout<<"a=a+(++i): "<<(a+(++i))<<endl;
    cout<<"i: "<<i<<endl;

    a=0,i=1;
    cout<<"Post Decrement: "<<endl;
    cout<<"a=a-(i--): "<<(a-(i--))<<endl;
    cout<<"i: "<<i<<endl;

    a=0,i=1;
    cout<<"Pre Decrement: "<<endl;
    cout<<"a=a-(--i): "<<(a-(--i))<<endl;
    cout<<"i: "<<i<<endl;

    return 0;
}