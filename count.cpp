//count digits
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    while(num!=0){
        num=num/10;
        sum++;
    }
    cout<<"total digit is "<<sum;
}