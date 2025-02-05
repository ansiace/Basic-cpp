#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,7,3};
    int a,i;
    a = sizeof (arr) / sizeof (arr[0]); 

    for( i = 0 ; i < a ; i++ ){
        arr[i]=arr[i]-arr[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}
