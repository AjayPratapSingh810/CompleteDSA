#include<iostream>
using namespace std;
class Animal{
    private:
    string speak;
    int legs;
    public:
    Animal(){
        cout<<"this is animal consttrctor"<<endl;
    }
    int a = 90;
    void setSpeak(string speak){
        this->speak = speak;
    }
    string getSpeak(){
        return this->speak;
    }
    void setLeg(int legs){
        this->legs = legs;
    }
    int getLeg(){
        return this->legs;
    }
};
class dog {
    public:
    dog(){
        cout<<"i am a dog constructor"<<endl;
        
    }
};
class germanshepherd : public dog,public Animal{
    public:
    germanshepherd(){
        cout<<"i am a german"<<endl;
        setLeg(4);
        cout<<getLeg()<<endl;
    }

};
int main(){
    //dog obj1;
    // obj1.setSpeak("bhow bhow");
    // cout<<obj1.getSpeak()<<endl;
    germanshepherd obj2;
    cout<<obj2.a<<endl;
    return 0;
}