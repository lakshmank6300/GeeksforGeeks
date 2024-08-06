//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string ipAddress) {
        vector<int>ips;
    int s=0,flag=0,cnt=0;
    for(int i=0;i<ipAddress.size();i++){
        if(ipAddress[i]=='.'){
            if(flag==0)
                return false;
            int len=log10(s)+1;
            if(s!=0 && len!=cnt)
                return false;
            cnt=0;
            flag=0;
            ips.push_back(s);
            s=0;
        }
        else if(ipAddress[i]<'0' || ipAddress[i]>'9')
            return false;
        else{
            s=s*10+(ipAddress[i]-'0');
            flag++;
            cnt++;
        }
    }
    if(ips.size()!=3 || flag==0)
        return false;
    ips.push_back(s);
    for(int i=0;i<ips.size();i++){
        if(ips[i]<0 || ips[i]>255)
            return false;
    }
    return true;

    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends