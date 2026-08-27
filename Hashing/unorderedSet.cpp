#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> table;
    table = {2,5,8,9,10,9};
    for(auto x:table){
        cout<<x<<" ";
    }
}