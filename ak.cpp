//sum of first n natural number
#include<iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    for(int i = 1 ; i<=n ; i++){
        sum+=i;
    }
    cout<<"Sum of n numbers is : ";
    cout<<sum<<endl;
}

int main(){

    int n;
    cout<<"Input number "<<endl;
    cin>>n;

    sumN(n);

    return 0;
}

