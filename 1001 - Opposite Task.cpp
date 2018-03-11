#include<iostream>
using namespace std;

int main()
{
    int range,n;
    cin>>range;
    for(int i=1; i<=range; i++)
    {
        cin>>n;
        if(n>10)
        {
            cout<<10<<" "<<n-10<<endl;
        }
        else
        {
            cout<<"0 "<<n<<endl;
        }
    }
    return 0;
}
