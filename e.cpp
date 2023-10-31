//program to find the greatest among three numbers
#include<iostream>
using namespace std;

int main(){

    int a ,b ,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"A is the Greatest"<<endl;
        }
        else{
            cout<<"C is the Greatest"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"B is the Greatest"<<endl;
        }
        else {
            cout<<"C is the Greatest"<<endl;
        }
    }

    return 0;
}