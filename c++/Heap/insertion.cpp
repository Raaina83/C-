#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        size = 0;
    }

    void insert(int val){
        size += 1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
            }
            else{
                return; 
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteHeap(){
        if(size == 0){
             cout<<"nothing to delete"<<endl;
            return;
        }

        arr[1] = arr[size];
        size--;
        int i=1;
        while(i<size){
            int left = 2*i;
            int right = (2*i)+1;

            if(left<size && arr[left]>arr[i]){
                swap(arr[left],arr[i]);
                i = left;
            }
            else if(right<size && arr[right]>arr[i]){
                swap(arr[right], arr[i]);
                i = right;
            }
            else{
                return;
            }
        }
    }
};

int main(){
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.print();
    h.insert(55);
    h.print();
    h.deleteHeap();
    h.print();
    return 0;
}