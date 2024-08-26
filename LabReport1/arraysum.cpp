#include <iostream>

using namespace std;

int main(){
    int n;
    int sum=0;
    int arr1[n];

    cout<<"Enter the number of elements in the array:  ";
    cin>>n;

    //values input
    cout<<"enter the elements of array : "<< endl;
    for(int i=1;i<=n;i++){
        cin>>arr1[i];
    }

    for(int i=1;i<=n;i++){
        sum += arr1[i];
    }

    cout<<"Total Sum of array :"<<sum<< endl;
return 0;
}
