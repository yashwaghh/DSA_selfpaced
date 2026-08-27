#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
   
    int maximum1s(vector<int> &arr){
        int count =0;
        int max_count =0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0){
                count=0;
            }
            else{
                count++;
                max_count = max(max_count, count);
                
            }
        }
        return max_count;
    }
};
int main(){
    solution s1;
    vector<int> arr={1,1,1,1,1,1,1};
    int max = s1.maximum1s(arr);
    cout<<"Maximum consective numbers are "<<max;

}