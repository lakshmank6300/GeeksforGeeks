//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    int arr[52]={0};
	    string ans="";
	    for(int i=0;i<str.size();i++){
	        if(str[i]>='a' && str[i]<='z' && arr[str[i]-'a']==0){
	            ans+=str[i];
	            arr[str[i]-'a']++;
	        }
	       else if(str[i]>='A' && str[i]<='Z' && arr[str[i]-'A'+26]==0){
	           ans+=str[i];
	            arr[str[i]-'A'+26]++;
	       }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends