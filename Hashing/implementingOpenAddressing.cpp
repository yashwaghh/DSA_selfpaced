#include<iostream>
#include<vector>
using namespace std;
//linear probing
class Myhash{
    public:
    int capacity;
    int size;
    vector<int> table;
    Myhash(int c){
        capacity = c;
        size = 0;
        table = vector<int>(c,-1);
    }
    int hashFunc(int key){
        return key%capacity;
    }
    void insert(int key){
        if(size==capacity){
            cout<<"The table is full "<<endl;
            return;
        }
        int idx = hashFunc(key);
        while(table[idx]!=-1 && table[idx]!=-2 && table[idx]!=key){
            idx = (idx+1)%capacity;
        }
        if(table[idx]==key){
            cout<<"Duplicate key, not inserted "<<endl;
            return;
        }
        else{
            table[idx] = key;
            size++;
            return;
        }
    }
    void display(){
        for(int i=0; i<capacity; i++){
            cout<<i<<"->"<<table[i]<<endl;
        }
    }
    int search(int key){
        int start = hashFunc(key);
        int idx = start;
        while(table[idx]!=-1){
            if(table[idx]==key){
                cout<<"The element has been found at the index "<<idx<<endl;
                return idx;
            }
            idx = (idx+1)%capacity;
            if(idx == start){
                cout<<"Whole table traversed but unable to find the element "<<endl;
                return -3;
            }
        }
        
        return -3;
    }
    void remove(int key){
        int temp= search(key);
        table[temp] = -2;
        cout<<"The element has been removed "<<endl;
    }

};
int main(){
    Myhash h1(5);
    h1.insert(1);
    h1.insert(2);
    h1.insert(1);
    h1.insert(6);
    h1.display();
    h1.search(7);
    h1.remove(1);
    h1.display();
}