#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int add = num1 + num2;
    cout<<"The sum is: "<<add<<endl;
    int sub = num1 - num2;
    cout<<"The difference is: "<<sub<<endl;
    return 0;
}
