#include<iostream>
using namespace std;
void update(int &a){
    a = a +2;
    cout<<"inside function "<<a<<endl;
}
void update1(int &a ){
    a++;
    cout<<a<<endl;
}
void update2(int *arr){
    arr[1] = 67;
    cout<<arr[1]<<endl;
}
int main(){
    // int a  = 9;
    // int &y = a; // way of making pass by reference
    // y++;
    // update(a);
    // cout<<"after updation function var name is : "<<a<<endl;


    //-------------- dynamic memory--------------------

    // int *a = new int;
    // cin>>*a;
    // cout<<*a<<endl;

        // cout<<"enter the size of array"<<endl;
        // int n ;
        // cin>>n;

        // int *arr = new int[n];
        // for(int i = 0;i<n;i++){
        //     cin>>*(arr+i);
        // }
        // for(int i =0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }

        //---------------- Pass by reference -------

        int a = 9;
        // int &b = a;
        // a++;
        // b++;
        // cout<<a<<" "<<b<<endl;
        // update1(a);
        // cout<<a<<endl;
        int arr[3] = {1,2,3};
        cout<<arr[1]<<endl;
        update2(arr);
        cout<<arr[1]<<endl;
    return 0;

}