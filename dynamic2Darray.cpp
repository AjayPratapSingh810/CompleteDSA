#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter the number of rows "<<endl;
    cin>>rows;
    int cols;
    cout<<"enter yhe number of columns "<<endl;
    cin>>cols;
    int ** arr = new int*[rows];
    
    for(int i= 0;i<rows;i++){
        arr[i] = new int [cols];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}