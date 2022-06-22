#include<iostream>
using namespace std;

void ThapHaNoi(int n , char a, char b, char c )
{
    if(n==1){
        cout<<"\t"<<a<<"---->"<<c<<endl;
        return;
    }
    ThapHaNoi(n-1, a, c, b);
    ThapHaNoi(1,a, b, c);
    ThapHaNoi(n-1, b, a, c);
}
int main()
{
    char a='A', b='B', c='C';
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    ThapHaNoi(n, a, b, c);
}
