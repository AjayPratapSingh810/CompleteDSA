#include<iostream>
using namespace std;
//------------------- Compile time polymorphism by function Overloading-----------------------
// class A{
//     public:
//     void run(){
//         cout<<" i am non parameterized function()"<<endl;
//     }
//     void run(int a ,int b,int c=5){
//         cout<<"i am a parameterized constructor"<<a+b+c<<endl;
//     }
// };
// class B:public A{

// };
//------------------------Compile time polymorphism By Operator OVerloading--------------------
// class B{
//     public:
//     int a;
//     int b;
//     void operator+ (B &obj){
//         int val1 = this->a;
//         int val2 = obj.a;
//         cout<<val2-val1<<endl;
//     }
// };
//--------------------------RUNTIME POLYMORPHISM by function Overridding---------------------------------
class A{
    public:
    void func1(){
        cout<<"i am function 1"<<endl;
    }
    void func2(){
        cout<<"i am function 2 of class A"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<" i am function 2 of Class B"<<endl;
    }
};
int main(){
    // B obj;
    // obj.run();
    // obj.run(12,34,56);
    // obj.run(3,4);
    //----------------------------------
//     B obj1,obj2;
//     obj1.a = 4;
//     obj2.a = 7;
//     obj1+obj2;
//-------------------------------------------
    B obj;
    obj.func1();
    obj.func2();  // always run override method
    return 0;
}