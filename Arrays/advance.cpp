#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main(){
    vector<int> ar = {1,2,3,4,56,7};

    vector<int>::iterator ptr = ar.begin();
    
    advance(ptr,3);

    cout<<"The position of iterator after the advanced use is "<<endl;
    cout<<*ptr<<" ";
    return 0;

}