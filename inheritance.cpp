#include<iostream>
using namespace std;
//-----------------HIerarchial ------------------------

// class A{
//     public:
//     void func1(){
//         cout<<"i am A"<<endl;
//     }
// };
// class B:public A{
//     public:
//     void func2(){
//         cout<<"i am B"<<endl;
//     }
// };
// class C: public A{
//     public:
//     void func3(){
//         cout<<"i am C"<<endl;
//     }
// };

//---------------------Hybrid ----------------------
// class A{
//     public:
//     void func1(){
//         cout<<" i am A"<<endl;
//     }
// };
// class B{
//     public:
//     void func2(){
//         cout<<" i am B"<<endl;
//     }
// };
// class C:public A{
//     public:
//     void func3(){
//         cout<<" i am C"<<endl;
//     }
// };
// class D:public A,public B{
//     public:
//     void func4(){
//         cout<<" i am D"<<endl;
//     }
// };

// ------------------ Multiple Inheritance same function Amguity resolve technique--------------------------
class A{
    public:
    void func(){
        cout<<"this is A"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"this is B"<<endl;
    }
};
class C:public A,public B {
    public:
  
};
int main(){
    // B obj1;
    // obj1.func1();
    // obj1.func2();
    // C obj2;
    // obj2.func1();
    // obj2.func3();

    // C obj1;
    // obj1.func1();
    // obj1.func3();
    // D obj2;
    // obj2.func1();
    // obj2.func4();
    // obj2.func2();

    C obj1;
    // obj1.func();// this is ambiguos
    obj1.A::func();
    obj1.B::func();
    return 0;
}