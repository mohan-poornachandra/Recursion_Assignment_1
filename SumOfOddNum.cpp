//Calculate Sum of odd numbers a and b inlcuding both.
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    if(a>b){
        if(b%2) return b;
        else return 0;
    }
    if(a==b) if(a%2) return a;
    
    return a + sum(a+2,b);
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: "; 
    cin>>a>>b;
    cout<<"Sum of odd no. :  ";
    if(a%2) cout<<sum(a,b);
    else cout<<sum(a+1,b);

}