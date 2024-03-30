#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int power(int n){
    if(n==0){
        return 1;
    }
    int smallerProblem = power(n-1);
    int biggerProblem = 2*smallerProblem;
    return biggerProblem;
}
void convertor(int n , string arr[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    
    convertor(n,arr);
    cout<<arr[digit]<<" ";
}
bool isSorted(int arr[] ,int size){
    // base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
}
int sumOfArray(int arr[],int size){
    if(size == 0){
        return 0;
    }
    return arr[0]+sumOfArray(arr+1,size-1);
}
bool isFound(int arr[] , int size,int target){
    if(arr[0] == target){
        return true;
    }
    if(size==0){
        return 0;
    }
    return isFound(arr+1,size-1,target);
}
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}
void bubbleSort(int arr[],int n){
    if(n==1 || n==0){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
void insertionSort(int arr[],int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[0]>arr[i]){            
           swap(arr[0],arr[i]);
        }
    }
     
     insertionSort(arr+1,n-1);
}
int main(){
    // cout<<"enter the number "<<endl;
    // int n;
    // cin>>n;
    //cout<<"factorial of number is : "<<factorial(n)<<endl;
    //cout<<"value of 2 is to power n is : "<<power(n)<<endl;
    // string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    // cout<<"number is : "<<endl;
    // convertor(n,arr);
    int arr[7] = {18,5,18,13,116,222,27};
   // cout<<"is array sorted or not : "<<isSorted(arr,7);
    //cout<<"sum of array is : "<<sumOfArray(arr,7);

    //cout<<"element is found or not  "<<isFound(arr,7,127)<<endl;

    // cout<<"enter a value of a "<<endl;
    // int a;
    // cin>>a;
    // cout<<"enter value of b "<<endl;
    // int b;
    // cin>>b;
    // cout<<"solution of b to is power of a "<<endl;
    // cout<<"solution of power is "<<power(a,b)<<endl;
   // bubbleSort(arr,7);
   insertionSort(arr,7);
    cout<<"print array "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}