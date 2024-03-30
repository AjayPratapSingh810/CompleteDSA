#include<iostream>
#include<limits.h>
using namespace std;
int max(int arr[],int n){
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;

}
int min(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}
int sumOfArray(int arr[],int n){
    int sum =0;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    int size;
    cout<<"enter size of array "<<endl;
    cin>>size;
    cout<<"enter elements of array"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // cout<<"maximum element in array is : "<<max(arr,size)<<endl;
    // cout<<"minimum element in array is : "<<min(arr,size)<<endl;

    // sum of array is 
    // int sum = sumOfArray(arr,size);
    // cout<<"sum of array is : "<<sum<<endl;  
    return 0;
}