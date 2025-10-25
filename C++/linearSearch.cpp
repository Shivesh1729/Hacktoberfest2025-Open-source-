#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int x) {
        int i;
        int flag=0;
        for(i=0;i<arr.size();i++){
            if(arr[i]==x){
               flag=1;
               break;
            }
        }
        if(flag==1)
            return i;
        else
            return -1;
    }

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int x=5;
    cout<<search(arr,x);
    return 0;
}