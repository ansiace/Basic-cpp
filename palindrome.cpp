// Palindrome number

#include<iostream>
using namespace std;
int main(){
    int n,c,b=0,r;
    cout<<"enter the number"<<endl;
    cin>>n;
    c=n;
    while(n!=0){
        r=n%10;
        b=r+(b*10);
        n=n/10;
    }
    if (c==b){
        cout<<"no is palindrome";
    
    }
    else{
        cout<<"no is not palindrome";
    }
    return 0;
}
