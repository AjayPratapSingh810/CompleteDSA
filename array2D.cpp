#include<iostream>
using namespace std;
int main(){
    
    //int arr[4][3];
    // cout<<"enter elements of 2D array "<<endl;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    cout<<"printing elements of array "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
    return 0;
}