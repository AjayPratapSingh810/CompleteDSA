#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    // mera naam ajay hai ajay 
    //1
    pair<string,int> p = make_pair("naam",1);
    m.insert(p);
    //2
    pair<string,int> p2("ajay",2);
    m.insert(p2);
    //3
    m["mera"] = 1;
    m["hai"] = 1;

    cout<<m["mera"]<<endl; // if "mera" key is not exist this way create new entry with 0 value so we use m.at 
    cout<<m.at("ajay")<<endl; 
    cout<<"size of hashmap is "<<m.size()<<endl;

    // count method is used for check presence of key or not
    cout<<m.count("ajay")<<endl;
    cout<<m.count("ooo")<<endl;

    // for erase
    // m.erase("hai");
    // cout<<"size of hashmap is "<<m.size()<<endl;

    // iterator
    //1
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //2
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<i.first<<" "<<i.second<<endl;
        it++;
    }
    return 0;
}