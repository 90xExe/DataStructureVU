#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int b;
    int loc =-1;
    cout<<"Enter element you want to search: ";
    cin>>b;

    for(int i=0;i<n;i++){
        if(arr[i] == b){
            loc =i;
        }
    }

    if(loc != -1){
        cout<<"Enterd Value "<<b<<" is in "<<loc+1<<" No Index"<<endl;
    }else{
    cout<<"Value is not found!!"<<endl;
    }
return 0;
}
