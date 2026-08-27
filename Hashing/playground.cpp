//implementing a key value pair association for the hashing 

#include<list>
#include<iostream>
#include<vector>
using namespace std;
class KeyValue{
    public:
    int bucket;
    int id;
    int stock;
    list<int> *idTable;
    list<int> *stockTable;
    KeyValue(int b){
        bucket = b;
        idTable = new  list<int>[b];
        stockTable = new list<int>[b];
    }
    void insert(int id, int stock){
        int i = id%bucket;
        idTable[i].push_back(id);
        stockTable[i].push_back(stock);
    }
    void print(){
        for(int i=0; i<bucket; i++){
            cout<<i<<"->";
            auto idIt = idTable[i].begin();
            auto stockIt = stockTable[i].begin();
            for(; idIt != idTable[i].end() && stockIt != stockTable[i].end(); ++idIt, ++stockIt){
                cout << "(" << *idIt << ", " << *stockIt << ") ";
            }
            cout << '\n';
        }
    }
};