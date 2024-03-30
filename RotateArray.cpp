#include<iostream>
using namespace std;
int main(){
    int arr[6] = {12,45,89,23,56,99};
    int arr2[6] = {0};
    for(int i =0;i<6;i++){
        int k = (i+2)%6;
        arr2[k] = arr[i];
    }
    for(int i =0;i<6;i++){
        cout<<arr2[i]<<" ";
    }
}