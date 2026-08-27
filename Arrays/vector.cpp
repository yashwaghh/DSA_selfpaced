#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    for(int i=0; i<=5; i++){
        v.push_back(i);
    }
    cout<<"size: "<<v.size()<<endl;

    if(v.empty()){
        cout<<"The vector is empty ";
    }
    else{
        cout<<" vector is not empty ";
    }

    cout<<"Output of the begining and end ";
    for(auto i=v.begin(); i!=v.end(); ++i){
        cout<<*i<<" ";
    }
    
}