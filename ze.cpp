//armstrong number
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Input your number"<<endl;
    cin>>n;
    int lastdigit;
    int sum = 0;
    int originaln = n;

    while(n>0){
        lastdigit = n % 10;
        sum+= pow(lastdigit ,3); 
        n = n/10;
    }
    
    if(sum==originaln){
        cout<<"amstrong number"<<endl;
    }
    else{
        cout<<"Not an amstrong number"<<endl;
    }

    return 0;
}