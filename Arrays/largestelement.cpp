#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int largestelement(vector<int> v){
        int max = v[0];
        
        for(int i=0; i<v.size(); i++){
            if(v[i]>max){
                max = v[i];
            }
        }
        return max;
    }
};

int main(){
    solution s1;
    vector<int> v = {10,20,30,40,5,6,7,9};
    int maximum_number=s1.largestelement(v);
    cout<<maximum_number;
}


