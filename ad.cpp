//reverse number program
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Input your number"<<endl;
    cin>>n;

    int lastdigit;
    int reverse = 0;
    
    while(n>0){
        lastdigit = n % 10; 
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    
    cout<<reverse<<endl;

    return 0;
}