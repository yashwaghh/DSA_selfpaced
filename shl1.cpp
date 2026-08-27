#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void maxProduct(vector<vector<int>> &arr, int m, int n){
    int maximum = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>maximum){
                maximum = arr[i][j];
            }
        }
        cout<<maximum<<endl;
        maximum= INT_MIN;
    }
}
int main(){
   
    int M; int N;
    cin>>M>>N;
    vector<vector<int>> arr(M,vector<int>(N));
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    maxProduct(arr,M,N);
}