//switch program for basic operations
#include<iostream>
using namespace std;

int main(){

    int n1 , n2;
    cout<<"Input two numbers : "<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Input a operator :"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1 + n2<<endl;
        break;
    case '-':
        cout<<n1 - n2<<endl;
        break;
    case '*':
        cout<<n1 * n2<<endl;
        break;
    case '/':
        cout<<n1 / n2<<endl;
        break;
    
    default:
    cout<<"invalid operator try basic operators"<<endl;
        break;
    }
    return 0;
}