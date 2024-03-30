#include<iostream>
using namespace std;
bool isEven(int num){
    
    if(num%2 == 0){
        return true;
    }
    return false;
}
int factorial(int a){
    int ans =1;
    for(int i=a;i>=1;i--){
        ans = ans * i;
    }
    return ans;
}
int nCr(int n,int r){
    int num = factorial(n);
    int den = (factorial(n-r)*factorial(r));
     return num/den;
   
}
bool isPrime(int n){
    for(int i =2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int noOfBits(int n){
    int count = 0;
    
    while(n != 0){
        int bit = n & 1;
        if(bit){
            count++;
        }
        n = n>>1;
    }
    return count;
}
void fibonacci(int n){
    int a =0;
    int b = 1;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i =3;i<=n;i++){
        sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
}
int main(){
    cout<<"enter your number "<<endl;
    int n;
    cin>>n;
    //cout<<"number is even "<<isEven(n)<<endl;
    // int r;
    // cout<<"enter value of r "<<endl;
    // cin>>r;
    // cout<<"value of nCr : "<<nCr(n,r)<<endl;
    //cout<<"number is Prime : "<<isPrime(n);
    // int ans = noOfBits(n);
    // cout<<"number of 1 bits in number is : "<<ans<<endl;

    fibonacci(n);
    return 0;
}