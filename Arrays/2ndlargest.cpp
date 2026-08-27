#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    void secondLargest( vector<int>& arr){
        int n = arr.size();    
        int res = -1;
            int largest = 0;
            for(int i=0; i<n; i++){
                if(arr[i]>arr[largest]){
                    res = largest;
                    largest = i;
                }
                else if(arr[i]!=arr[largest]){
                    if(res == -1|| arr[i]>arr[res]){
                        res = i;
                    }
                }
            }
            cout<<"The second largestt number is "<<res;
    }
};



