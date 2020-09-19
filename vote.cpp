#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=13 && age<=19)
    {
        cout<<"\nhe/she is teenager";
    }
    else
    {
        cout<<"\nhe/she is not teenager";
    }
    if(age>=18)
    {
        cout<<"\nhe/she is eligible for voting";
    }
    else
    {
        cout<<"\nhe/she is not eligible for voting";
    }
    return 0;
}
