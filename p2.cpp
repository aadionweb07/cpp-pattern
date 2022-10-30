#include<iostream>
using namespace std;
int main()
{
    char test;
    int digits=0, alpha=0, special=0, spaces=0;
    cout<<"Enter line to check (enter ~ to terminate) ";
    test=cin.get();
    while(test!='~')
    {
        if(test>='0' && test<='9')
            digits++;
        else if((test>='a' && test<='z') || (test>='A' && test<='Z'))
            alpha++;
        else if(test==' ' || test=='\n' || test=='\t')
            spaces++;
        else special++;
        test=cin.get();
    }
    cout<<"Digits\t"<<digits<<endl<<"Alphabets\t"<<alpha<<endl;
    cout<<"Spaces\t"<<spaces<<endl<<"Special Characters\t"<<special;
    return 0;
}
