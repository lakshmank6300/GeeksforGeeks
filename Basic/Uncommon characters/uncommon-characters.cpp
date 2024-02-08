//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
           int arr1[26]={0};
           int arr2[26]={0};
           string ans="";
           int k=0;
           for(int i=0;i<A.size();i++){
                arr1[A[i]-'a']++;
           }
           for(int i=0;i<B.size();i++)
                arr2[B[i]-'a']++;
            for(int i=0;i<26;i++){
                if(arr1[i]==0 && arr2[i]>0){
                    ans+=i+'a';
                }
                else if(arr1[i]>0 && arr2[i]==0)
                    ans+=i+'a';
            }
            if(ans.size()==0)
                return "-1";
            else
                return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends