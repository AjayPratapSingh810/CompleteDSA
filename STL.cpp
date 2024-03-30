#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    //<------------------ ARRAY------------------
    // array<int,5> arr = {34,56,46,87,56};
    // cout<<"is our array is empty "<<arr.empty()<<endl;
    // cout<<"front of array "<<arr.front()<<endl;
    // cout<<"back of array "<<arr.back()<<endl;
    // cout<<"element at place 3 in array is "<<arr.at(3)<<endl;
    //<-----------------VECTOR-----------------------
    // vector<int> v;
    // v.push_back(76);
    // v.push_back(65);
    // v.push_back(99);
    // cout<<"size of vector is : "<<v.size()<<endl;
    // cout<<"capacity of vector is : "<<v.capacity()<<endl;
    // cout<<"front element of vector is : "<<v.front()<<endl;
    // cout<<"pop 1 element from "<<endl;
    // v.pop_back();
    // cout<<"element at place 2 is "<<v.at(1)<<endl;
    // v.push_back(5);
    // v.push_back(3);
    // v.push_back(1);
    // cout<<"size of vector is : "<<v.size()<<endl;
    // cout<<"capacity of vector is : "<<v.capacity()<<endl;
    // cout<<"erase of elements from 0 to 3"<<endl;
    // v.erase(v.begin(),v.begin()+3);
    // cout<<"size after erase of elements "<<v.size()<<endl;
    // cout<<"top "<<v.front()<<endl;

    //<--------------------DEQUE----------------------
    // deque<int> d;
    // d.push_back(3);
    // d.push_back(5);
    // d.push_back(6);
    // d.push_front(8);
    // d.push_front(9);
    // cout<<"after pop back"<<endl;
    // d.pop_back();
    // cout<<"after pop font"<<endl;
    // d.pop_front();
    // cout<<"front element in queue "<<d.front()<<endl;
    // cout<<"front element in dequeue "<<d.back()<<endl;
    // cout<<"empty or not "<<d.empty()<<endl;
    // cout<<"size of dequeue "<<d.size()<<endl;

    //<------------------LIST------------------
    // list<int> l;
    // l.push_back(7);
    // l.push_back(8);
    // l.push_front(1);
    // cout<<"size of array is : "<<l.size()<<endl;
    // cout<<"front element : "<<l.front()<<endl;
    // cout<<"back element is "<<l.back()<<endl;

    //------------------STACK-------------------
    // stack<string> s;
    // s.push("ajay");
    // s.push("pratap");
    // s.push("singh");
    // cout<<"is stack is empty "<<s.empty()<<endl;
    // cout<<"top element is "<<s.top()<<endl;

    //----------------QUEUE---------------
    // queue<int> q;
    // q.push(67);
    // q.push(56);
    // q.push(6);
    // cout<<"pop element  "<<endl;
    // q.pop();
    // cout<<q.front()<<endl;

    //---------------PRIORITY QUEUE---------------------
    //--- it works like a max heap 
    // priority_queue<int> q;
    // q.push(122);
    // q.push(456);
    // q.push(66);
    // q.push(154);
    // cout<<"top element of "<<q.top()<<endl;
    // q.pop();
    // cout<<"top element now "<<q.top()<<endl;

    //----priority queue as a  min heap----
    // priority_queue<int,vector<int>,greater<int>>p;
    // p.push(34);
    // p.push(12);
    // p.push(56);
    // p.push(45);
    // cout<<"top element in "<<p.top()<<endl;
    // p.pop();
    // cout<<"now top element in queue is "<<p.top()<<endl;

    //---------------SET-------------------
    // set<int> s;
    // s.insert(12);
    // s.insert(32);
    // s.insert(2);
    // s.insert(1);
    // s.insert(67);
    // cout<<"presence of element "<<s.count(32);
    // cout<<"printing of elements of set : "<<endl;
    // for(int i: s){
    //     cout<<i<<" ";
    // }cout<<endl;
    // always in sorted order

    //----------------MAP------------------
    // map<int,string> mp;
    // mp[1] = "ajay";
    // mp[3] = "singh";
    // mp[2] = "pratap";
    // mp.insert({4,"thakur"});
    // cout<<"count function "<<mp.count(3)<<endl;
    // cout<<"printing elements in set"<<endl;
    // for(auto i: mp){
    //     cout<<i.second<<" ";
    // }

    //------------ALGORITHM-------------
    vector<int> v;
    v.push_back(45);
    v.push_back(123);
    v.push_back(2);
    v.push_back(7);
    sort(v.begin(),v.end());
    cout<<"binary search for element "<<binary_search(v.begin(),v.end(),45)<<endl;


    
    return 0;
}