#include<iostream>
using namespace std;
int findGCD(int a,int b){
    if(a == 0){
        return b;
    }
    else if(b==0){
        return a;
    }else if(a>=b){
        a = a-b;
    }else if(a<b){
        b=b-a;
    }
    return findGCD(a,b);

}
int main(){
    cout<<"enter your 1st number is : "<<endl;
    int a;
    cin>>a;
    cout<<"enter your 2nd number : "<<endl;
    int b;
    cin>>b;
    cout<<"GCD is : "<<findGCD(a,b)<<endl;
    return 0;
}