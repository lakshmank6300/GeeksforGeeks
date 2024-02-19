//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        int arr[26]={0};
        int ans=0;
        priority_queue<int>pq;
        for(int i=0;i<s.size();i++)
            arr[s[i]-'a']++;
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                pq.push(arr[i]);
            }
        }
        while(k--){
            int t=pq.top();
            t-=1;
            pq.pop();
            pq.push(t);
        }
        while(pq.size()!=0){
            ans+=pq.top()*pq.top();
            pq.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends