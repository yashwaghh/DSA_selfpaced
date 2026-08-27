#include<iostream>
#include<list>
using namespace std;
class Myhash{
    public:
    int bucket;
    list<int> *table;
    Myhash(int b){
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int key){
        int i = key%bucket;
         table[i].push_back(key);
    }
    void search(int key){
        int i = key%bucket;
        for(auto x:table[i]){
            if(x==key){
                cout<<"Found "<<endl;
                return;
            }
        }
        cout<<"Not found "<<endl;
        
    }
    void remove(int key){
        int i = key%bucket;
        table[i].remove(key);
        cout<<"Deleted succesfully ";
    }
    void display(){
    for(int i = 0; i < bucket; i++){
        cout << i << " : ";
        for(auto x : table[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
};
int main(){
    Myhash s1(10);
    s1.insert(34);
    s1.insert(67);
    s1.insert(98);
    s1.insert(98);
    s1.insert(41);
    s1.insert(68);
    s1.insert(45);
    s1.insert(53);
    s1.display();

}