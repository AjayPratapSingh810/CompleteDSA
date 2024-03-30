#include<iostream>
using namespace std;
class A{

};
class Hero{
    private:
    int p;
    public:
    static int timeToComplete;
    static void statFunc(){
        cout<<"static function "<<timeToComplete<<endl; // static function only access static data members
        // this->health // this will give error
    }
    void setdata(int a){
        //cout<<a<<"  "<<this<<endl;  //this keyword contains the address of current object
        p = a;
    }
    int getdata(){
        return p;
    }
    int health;
    int level;
    char ch;
    void function(){
        cout<<"hlo";
    }
    Hero(){
        cout<<"constructor called "<<endl;
    }
    Hero(int h,int l){
        this->health = h;
        this->level = l;
    }
    // we also manipulate copy constructor
    Hero(Hero &temp){
        this->level = temp.level;
    }
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};
int Hero :: timeToComplete = 10;  // static type member defined in class and execute without object
int main(){
    // Hero obj;
    // A obj2;
    // cout<<sizeof(obj)<<endl;// give size equal to sizeof properties of class
    // cout<<sizeof(obj2)<<endl;// give size 1 empty class instance is 1 byte size for existence of object
    

    // // setting and accessing values using .(dot) operator with object
    // obj.health = 75;
    // obj.ch = 'b';
    // cout<<obj.health<<endl;
    // // obj.p  gives an error because p variable is private for accessing using getters and setters
    // obj.setdata(34);
    // cout<<"accessing of private member p "<<obj.getdata()<<endl;

    // Dynammically object of hero
    // Hero * p1 = new Hero;
    // p1->health = 98;
    // cout<<(*p1).health<<endl;
    // cout<<p1->health<<endl; 
    // p1->setdata(45);
    // Hero p2;
    // p2.setdata(56);
    // cout<<&p2<<endl;
    

    //  Hero obj; // constructor is called on instantiation

    // Hero * obj2 = new Hero(67,89); // parameterized constructor;
    //  //Hero obj2(67,89);
    // cout<<(*obj2).health<<endl;
    // cout<<obj2->level<<endl;

    // Hero obj3(*obj2); //Copy constructor
    // //cout<<obj3.health<<endl;
    // //cout<<obj3.health<<endl; // when we write our own copy constructor so by default is finished in our own copy constructor we not define health so it give error 
    // cout<<obj3.level<<endl;

    // Hero a;
    // a.setdata(45);
    // cout<<"value of a "<<a.getdata()<<endl;
    // Hero b;
    // b.setdata(90);
    // cout<<"value of b "<<b.getdata()<<endl;

    // // assignment copy
    // a = b;
    // cout<<"value of a after assignment copy "<<a.getdata()<<endl;
    // cout<<"value of b after assignment copy "<<b.getdata()<<endl;

    // Hero a;// constructor called and afetr at last destructor call automatically 
    // Hero *b = new Hero(); // in dynamically we called destructor mannually by delete keyword
    // delete b;

    // calling of static member
    // cout<<"static member : "<<Hero :: timeToComplete<<endl;
    // calling of static function
    Hero :: statFunc();

    return 0;
}