//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>pref(n);
        pref[0]=arr[0];
        int j=0,i;
        for(i=1;i<n;i++)
            pref[i]=arr[i]+pref[i-1];
        if(s==0){
            for(i=0;i<n;i++){
                if(arr[i]==0)
                    return {i+1,i+1};
            }
            return {-1};
        }
        i=0;
        while(i<n && j<n){
            if(pref[j]==s)
                return {1,j+1};
            else if(pref[j]-pref[i]<s){
                j++;
            }
            else{
                if(pref[j]-pref[i]==s)
                    return {i+2,j+1};
                i++;
            }
        }
        return {-1};
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends