#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,7,3};
    // arr[5]=10;
    int a,i;
    a = sizeof (arr) / sizeof (arr[0]); 

    for(i=0;i<a;i++){

        arr[i]=arr[i]+arr[i]; 
        cout<<arr[i]<<" ";

    }

    cout<<endl<<arr[5];
    return 0;
}
