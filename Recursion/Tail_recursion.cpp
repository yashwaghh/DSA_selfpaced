//Tail recursion version of the print 1 to N problem 
//core concept is that we should reduce the overhead work within the function call
//function call should terminate after the base condition is achieved 
#include<iostream>
using namespace std;
class solution{
    public:
    void tailrecursive1toN(int n, int k){
        if(k==-1){
            return;
        }
        cout<<n-k<<" ";
        tailrecursive1toN(n,k-1);
    }
};
int main(){
    solution s1;
    s1.tailrecursive1toN(20,19);
    return 0;
}