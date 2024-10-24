#include<iostream>
using namespace std;
int main()
{
    int n,opinions;
    cin>>n;
    while(n--)
    {
        cin>>opinions;
        if(opinions)
        {
            cout<<"Hard";
            return 0;
        }
    }
    cout<<"Easy";
    return 0;
}
