//Armstrong Number

#include<iostream>
using namespace std;
int main(){
    int n,temp,sum=0,rem;
    cin>>n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;

    }
    if(n==sum){
        cout<<"number is armstrong ";

    }
    else
    {
        cout<<"number is not armstrong ";
    }
}