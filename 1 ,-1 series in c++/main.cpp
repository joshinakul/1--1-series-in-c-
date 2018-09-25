#include <iostream>

using namespace std;

int main()
{
    int n,a=-1;
    cout << "upto how many terms u want to print" << endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a= -a;
        cout<<a<<endl;
    }

    return 0;
}
