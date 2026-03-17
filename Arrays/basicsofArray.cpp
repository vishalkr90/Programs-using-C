#include<iostream>
using namespace std;
int main(){
    //frst arry
    int arr[7]={};

    //second array
    int arr_b[]={1,2,3,4,5};

    //third array
    int n;
    cin>>n;
    int arr_c[n];

    //read
    //for loop using sizeof

     int s=sizeof(arr)/sizeof(int);
    cout<<"Size Of arr :"<<s<<endl;

   int k=sizeof(arr_b)/sizeof(int);
    cout<<"Size Of arr_b :"<<k<<endl;

    int b=sizeof(arr_c)/sizeof(int);
    cout<<"Size Of arr_c :"<<b<<endl;
    cout<<"arrr_b : ";
    for(int i=0;i<k;i++){
        cout<<arr_b[i]<<" ";
    }

    return 0;
}