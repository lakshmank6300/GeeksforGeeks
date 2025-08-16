class Solution {
  public:
    int solve(vector<vector<int>>&dp,vector<int>&arr,int sum ,int ind){
        if(sum == 0) return true;
        if(ind >= arr.size() || sum < 0) return false;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        return dp[ind][sum] = solve(dp,arr,sum,ind+1) | solve(dp,arr,sum-arr[ind] ,ind+1);
    }
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        
        if(solve(dp,arr,sum,0) == 1) return true;
        return false;
        // return solve(dp,arr,sum,0);
    }
};