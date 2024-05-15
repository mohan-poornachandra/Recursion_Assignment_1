//Tell whether no. is power of 2 or not.
#include<iostream>
using namespace std;

bool PowerOf2(int n)
{
    if(n==1) return true;
    if(n%2) return false;
    return PowerOf2(n/2);
}

int main()
{
    int n;
    cout<<"Enter a number: "; cin>>n;
    if(PowerOf2(n)) 
      cout<<n<<" is a power of 2.";
    else 
      cout<<n<<" is not a power of 2.";
}


