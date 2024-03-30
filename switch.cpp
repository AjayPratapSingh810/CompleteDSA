#include<iostream>
using namespace std;
int main(){
    // int a = 2;
    // char ch = '<';

    // switch(a){
    //     case 1: cout<<"number is 1"<<endl;
    //     case 2: switch(ch){
    //                 case 'a': cout<<"hello"<<endl;
    //                 case '<' : cout<<"bye"<<endl;
    //                             break;
    //                 case 'b': cout<<"not bye"<<endl; 
    //             }
    //     case 3: cout<<"plss use break"<<endl;
    // }


    // CALCULATOR

    // int a;
    // int b;
    // char o;
    // cout<<"enter your first value"<<endl;
    // cin>>a;
    // cout<<"enter operator"<<endl;
    // cin>>o;
    // cout<<"enter your second number"<<endl;
    // cin>>b;

    // switch(o){
    //     case '+': cout<<"sum is : "<<a+b<<endl;
    //             break;
    //     case '-': cout<<"subtraction is : "<<a-b<<endl;
    //             break;
    //     case '*': cout<<"multiplication is : "<<a*b<<endl;
    //             break;
    //     case '/': cout<<"divison is : "<<a/b<<endl;
    //             break;
    //     default: cout<<"plls use valid input"<<endl;
    // }


    int m;
    cout<<"enter your money"<<endl;

    cin>>m;
    int h,f,t;
    switch(1){
        case 1: h = m/100;
                m = m-h*100;
                cout<<"number of hundered notes is : "<<h<<endl;
        case 2: f = m/50;
                m = m-f*50;
                cout<<"number of fifty notes is : "<<f<<endl;
        case 3: t = m/10;
                m = m-t*10;
                cout<<"number of ten notes is : "<<t<<endl;
        default: cout<<"number of coins is : "<<m<<endl;
    }

}