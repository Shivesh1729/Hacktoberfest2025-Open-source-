#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int max_e=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            sum=sum + nums[i];
            max_e=max(sum,max_e);
            if(sum<0){
                sum=0;
            }
        }
        return max_e;
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}