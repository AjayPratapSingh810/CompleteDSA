//-------------------Stack using STL----------------------
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;
//     st.push(5);
//     st.push(7);
//     st.push(10);
//     st.push(78);
//     st.pop();
//     cout<<st.top()<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;
    stack(int s){
        this->size = s;
        arr = new int(size);
        top = -1;
    }
    void push(int data){
        top++;
        if(top<size){
            arr[top]  = data;
        }else{
            cout<<"array has no space"<<endl;
            top--;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"array has no element"<<endl;
        }
    }
    void peek(){
        cout<<"the top element is "<<arr[top]<<endl;
    }


};
int main(){
    stack s(5);
    s.push(10);
    s.push(8);
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(89);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();


    return 0;
}