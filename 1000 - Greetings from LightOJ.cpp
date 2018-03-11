#include<iostream>
using namespace std;

int main()
{
    int range,a,b;
    cin>>range;
    for(int i=1; i<=range; i++)
    {
        cin>>a>>b;
        cout<<"Case "<<i <<": "<<a+b<<endl;
    }
    return 0;
}
