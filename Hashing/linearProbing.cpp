#include<iostream>
using namespace std;
class Myhash{
    public:
    int capacity;
    int size;
    int *arr;
    Myhash(int c){
        capacity = c;
        size = 0;
        for(int i=0; i<capacity; i++){
            arr[i]=-1;
        }
    }
    int hash(int key){
        return key%capacity;
    }
    bool insert(int key){
        if(size==capacity){
            return false;
        }
        int i=hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key){
            i = (i+1)%capacity;
        }
        if(arr[i]==key) return false;
        else {
            arr[i]=key;
            size++;
            return true;
        }

    }
};
int main(){

}