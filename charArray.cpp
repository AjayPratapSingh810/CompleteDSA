#include<iostream>
using namespace std;
int lengthOfArr(char arr[]){
    int count = 0;
    for(int i=0;arr[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char arr[20];
    cout<<"enter your string"<<endl;
    cin>>arr;
    cout<<"printing of array "<<arr<<endl;
    cout<<"size of char array is : "<<lengthOfArr(arr)<<endl;
    string s = "ajay";
    cout<<s[2]<<endl;
    // char a = 'a';
    // int b = a;
    // cout<<b<<endl;
    string k = "ajay";
    cout<<k.find("yb");
    return 0;
}