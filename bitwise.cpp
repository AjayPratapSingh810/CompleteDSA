#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number which you want to convert in binary"<<endl;
    cin>>n;
    // int num = 0;
    // int i=0;
    
    // while(n != 0){
    //     int bit = n & 1;
    //     num += (bit * pow(10,i));
    //     cout<<num<<endl;
    //     cout<<"i "<<i<<endl;
    //     n = n >> 1;
    //     i++;
    // }
    // cout<<num;
    int i =0;
    int sum =0;
    while(n != 0){
        int bit = n%10;
        if(bit ==1){
            sum = sum + (pow(2,i));
        }
        i++;
        n = n/10;
    }
    cout<<sum<<endl;
    return 0;
}