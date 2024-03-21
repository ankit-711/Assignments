#include<iostream>
using namespace std;

template <class T>

void Swap(T x, T y) {

    T temp;
    
    cout<<"Before swap x is "<<x<<" y is "<<y<<endl;
    
    temp = x;
    x = y;
    y = temp;
    
    cout<<"\nAfter swap x is "<<x<<" y is "<<y;
}

int main() 
{

    int a,b;
    
    cout<<"Enter value of x and y: ";
    cin>>a>>b;

    Swap(a, b);


    return 0;
}
