#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    void reverse(vector<int> & arr){
        int start = 0;
        int end = arr.size()-1;
        int temp;
        while(start<end){
            temp = arr[start];
            arr[start]= arr[end];
            arr[end]= temp;
            start++;
            end--;
        }
        cout<<"The revsered array sequence is ";
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    solution s1;
    vector<int> arr = {1,2,3,4,5,6};
    s1.reverse(arr);
    return 0;
}