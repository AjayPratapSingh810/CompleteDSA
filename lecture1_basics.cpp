#include<iostream>
using namespace std;
int main(){
//    cout<<"enter your number"<<endl;
//    int a;
//    cin>>a;
//    int i = 2;
//    int sum =0;
//    while(i<=a){
//       sum = sum+i;
//       i=i+2;
//    }
//    cout<<"sum of even numbers till n is : "<<sum<<endl;


// pattern question 

cout<<"enter your number : "<<endl;
int n;
cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*"<<" ";
//     }cout<<endl;
// }

for(int i=1;i<=n;i++){
    for(int j =1;j<=n;j++){
        cout<<i<<" ";
    }cout<<endl;
}
    return 0;
}