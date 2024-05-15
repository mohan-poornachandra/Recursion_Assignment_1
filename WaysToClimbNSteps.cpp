//Return the number of ways one can climb n steps if we can take 1,2 or 3 steps.
#include<iostream>
using namespace std;

int WaysToClimb(int n)
{
    if(n==0) return 1;
    else if(n<0) return 0;
    return WaysToClimb(n-1) + WaysToClimb(n-2) + WaysToClimb(n-3);
}

int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    cout<<"No of ways: "<<WaysToClimb(n);
    
}