#include<iostream>
using namespace std;

int main()

{

    int n,m;

    cout<<"Enter 2 numbers";
    cin>>n>>m;

    while(m!=n)
    {
        if(m>n)
            m=m-n;

        else if(n>m)
            n=n-m;
    }
    cout<<"GCD is"<<m<<endl;
    return 0;
}
