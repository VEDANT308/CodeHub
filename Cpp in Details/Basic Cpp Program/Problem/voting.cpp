#include <iostream>
using namespace std;

int main(){
    int age = 0;
    cout<<"Enter the Age: ";
    cin>>age;

    if(age>=18)
    {
        cout<<"You are Eligible for vote";
    }
    else
    {
        cout<<"You are not Eligible for vote";
    }
}