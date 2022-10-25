class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        
        int cnt=0;
        for(int i=0 ;i<n;i++){
            int curr=0;
            for(int j=i ;j<n;j++){
                // ek particular array me kitne element ke sath ye gcd bna rha h ..utne hi subarrays h jiske gcd are equal to k 
                
                curr= __gcd(curr, nums[j]);
                if(curr==k){
                    cnt++;
                }
                
            }
        }
        
        return cnt;
    }
};
