#include <iostream>
using namespace std;

int GT(int n)
{
    if (n==0)
        return 1;
    else    
    return n * GT(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout <<  n << "!=" << GT(n);
    return 0;
}
