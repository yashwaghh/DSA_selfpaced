#include<iostream>
#include<list>
using namespace std;
class Myhash{
    public:
    int capacity;
    list<int> *table;
    Myhash(int c){
        capacity = c;
        table = new list<int>[c];
    }
    int hashFunc(int key){
        return key%capacity;
    }
    void insert(int key){
        int idx = hashFunc(key);
        table[idx].push_back(key);
        cout<<"Inserted succesfully at index "<<idx<<endl;
    }
    void search(int key){
        int idx = hashFunc(key);
        for(auto it:table[idx]){
            if(it==key){
                cout<<"The key is present ";
                return;
            }
        }
        cout<<"The key not found "<<endl;

    }
    void display(){
        for(int i=0; i<capacity; i++){
            cout<<i<<" ";
            for(auto x:table[i]){
                cout<<x<<"->";
            }
            cout<<endl;
        }
    }

};
int main(){
    Myhash h1(7);
    h1.insert(87);
    h1.insert(86);
     h1.insert(83);
      h1.insert(86);
       h1.insert(41);
       h1.display();
}