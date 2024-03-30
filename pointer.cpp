#include<iostream>
using namespace std;
int getSum(int arr[], int n) {
    arr[4] = 9;
    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}
void update(int *p) {

   *p = *p + 1;
   cout << "inside "<< *p <<endl;
//    *p = *p + 1;
   p = p + 1;
   cout << "inside "<< p <<endl;

}
int main(){
    // int a = 78;
    // char b = 'h';
    // cout<<a<<endl;
    // cout<<b<<endl;
    // int *p = &a;
    // cout<<p<<endl;
    // char *p1 = &b;
    // cout<<p1<<endl;
    // cout<<*p<<endl;
    // cout<<*p1<<endl;

    // int arr[3] = {4,7,9};
    // cout<<"address of an array "<<arr<<endl;
    // cout <<"address of first index is : "<<&arr[0]<<endl;
    // cout<<"defrence pointer in array "<<*arr<<endl;
    // cout<<"defrence pointer in array "<<*arr+1<<endl;
    // cout<<"defrence pointer in array "<<*(arr+1)<<endl;
    // cout<<2[arr]<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<"size is :"<<sizeof(arr)<<endl;
    // int *ptr = &arr[0];
    // cout<<"size is : "<<sizeof(ptr)<<endl;


    // int b[20] = {0};
    // cout<<&b[0]<<endl;
    // cout<<b<<endl;
    // cout<<&b<<endl;

    // int *p = &b[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;
    // cout<<&p<<endl;
    // cout<<p<<endl;


    // char ch[5] = "abcd";
    // cout<<ch<<endl;
    // cout<<&ch[1]<<endl; 

    // char c = 'a';
    // cout<<c<<endl;
    // cout<<&c<<endl;
    

    
    // int arr[6] = {1,2,3,4,5,8};

    // cout << "Sum is " << getSum(arr ,3) << endl ;  
    // cout<<arr[4]<<endl;
    // int p =5;
    // int *a = &p;
    // cout<<p<<endl;
    // update(a);
    // cout<<p<<endl;


    // ------------- DOUBLE POINTERS --------
    int a = 5;
    int *p1 = &a;
    int **p2 = &p1;
    cout<<p1<<endl;
    cout<<*p2<<endl;
    cout<<p2<<endl;

    cout<<*p1<<endl;
    cout<<**p2<<endl;


    return 0;
}