//switch program 
#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character :"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"1"<<endl;
        break;
    case 'b':
        cout<<"2"<<endl;
        break;
    case 'c':
        cout<<"3"<<endl;
        break;
    case 'd':
        cout<<"4"<<endl;
        break;
    case 'e':
        cout<<"5"<<endl;
        break;
    case 'f':
        cout<<"6"<<endl;
        break;
    
    default:
    cout<<"write alphabets between a to f"<<endl;
        break;
    }
    return 0;
}