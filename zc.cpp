//prime number program
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Imput number :"<<endl;
    cin>>n;
    int i;
    bool flag = 0;
    for(i=2 ; i<=sqrt(n) ; i++){
        if(n % i == 0){
            cout<<"Not a prime number"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime Number"<<endl;
    }
    return 0;
}