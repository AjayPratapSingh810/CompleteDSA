#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int value){
        size = size+1;
        int index = size;
        arr[index] = value;

        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deleteNode(){
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<size){
            int leftChild = 2*i;
            int rightChild = 2*i+1;
            
            if(leftChild <= size && arr[i]<arr[leftChild]){
                swap(arr[i],arr[leftChild]);
                i = leftChild;
            }
            if(rightChild <= size && arr[i]<arr[rightChild]){
                swap(arr[i],arr[rightChild]);
                i = rightChild;
            }else{
                return;
            }
        }
    }
    void heapify(int arr[],int size,int i ){
    
            int largest = i;
            int leftChild = 2*i;
            int rightChild = 2*i+1;
            if(leftChild<=size && arr[largest] < arr[leftChild]){
                largest = leftChild;
            }
            if(rightChild<=size && arr[largest] < arr[rightChild]){
                largest = rightChild;
            }

            if(largest != i){
                swap(arr[largest],arr[i]);
                heapify(arr,size,largest);
            }else{
                return;
            }
    
    }
    void sort(int arr[],int &size){
        
        swap(arr[1],arr[size]);
        cout<<arr[size]<<" ";
        size--;
        if(size == 0){
            return;
        }
        heapify(arr,size,1);
        sort(arr,size);
        
    }
};
int main(){
    heap h1;
    h1.insert(50);
    h1.insert(60);
    h1.insert(55);
    h1.insert(45);
    h1.insert(47);
    h1.insert(48);
    h1.print();
    h1.deleteNode();
    h1.print();
    int arr[100] = {-1,5,6,4,7,3,12,8};
    int s = 7;
    for(int i =s/2;i>0;i--){
        h1.heapify(arr,s,i);
    }
    for(int i=1;i<=s;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    h1.sort(arr,s);
    return 0;
    
}