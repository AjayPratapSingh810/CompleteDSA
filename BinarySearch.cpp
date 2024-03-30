#include<iostream>
using namespace std;
int bSearch(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[100];
    cout<<"enter size of array"<<endl;
    int size;
    cin>>size;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter element u want to find in array"<<endl;
    int key;
    cin>>key;
    cout<<"the searched element is at : "<<bSearch(arr,size,key);
    return 0;
}