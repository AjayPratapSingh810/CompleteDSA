#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int data)
    {
        size = size + 1;
        arr[size] = data;
        int parent = size / 2;
        int index = size;
        while (index > 1)
        {
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
            }
            else
            {
                return;
            }
            index = parent;
            parent = index / 2;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void heapify(int i)
    {
        int index = i;
        int largest = index;
        int leftChild = 2 * index;
        int rightChild = 2 * index + 1;
        if (leftChild <= size && arr[leftChild] > arr[index])
        {
            largest = leftChild;
        }
        if (rightChild <= size && arr[rightChild] > arr[index])
        {
            largest = rightChild;
        }

        if (largest != index)
        {
            swap(arr[largest], arr[index]);
            heapify(largest);
        }
        else
        {
            return;
        }
    }
    void deleteNode()
    {
        swap(arr[1], arr[size]);
        size--;
        heapify(1);
    }
};
int main()
{
    heap h1;
    h1.insert(4);
    h1.insert(5);
    h1.insert(3);
    h1.insert(1);
    h1.insert(15);
    h1.insert(11);
    h1.insert(16);
    h1.print();
    cout << endl;
    h1.deleteNode();
    h1.print();
    return 0;
}