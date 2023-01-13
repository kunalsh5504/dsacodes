#include <iostream>

using namespace std;
long int factorial(int n) {
    if (n<=1)
    return 1;
    else
        return n*factorial(n-1);
}
    
int main()
{
    int num;
    cin>>num;
    int result=factorial(num);
    cout<<result;
    
    return 0;
}
