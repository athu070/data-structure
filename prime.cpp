#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2; i<n ; i++)
       if(n%1==0)
       return false;

    return true;   
}

int main(){
    int n;

    cout<<"Enter a prime number: ";
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is prime number ";
    }
    else
        cout<<n<<" is not a prime number ";
return 0;        
}