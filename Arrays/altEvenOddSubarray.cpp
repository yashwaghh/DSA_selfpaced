#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    void EvenOddsubarray(vector<int> & arr){
        int count=0;
        int lastrem = arr[0]%2;
        int res =0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]%2!=lastrem){
                count++;
                lastrem = arr[i]%2;
            }
            else{
                count = 0;
            }
            res = max(res,count);
        }
        cout<<res+1<<" "<<"is the maximum length subarray ";
    }
};
int main(){
    solution s1;
    vector<int> arr = {
       1, 2, 3, 4, 5, 7, 9} ;
    s1.EvenOddsubarray(arr);
    return 0;
    
}