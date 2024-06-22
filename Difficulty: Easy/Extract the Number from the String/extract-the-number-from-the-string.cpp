//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        long long ans,c=1,mx=0,num=0;
        int flag=0;
        for(int i=sentence.size() - 1;i>=0;i--){
            while(i>=0 && sentence[i]>='0' && sentence[i]<='9'){
                if(sentence[i]=='9'){
                    flag=1;
                    break;
                }
                num+=(sentence[i]-'0')*c;
                c*=10;
                i--;
            }
            if(flag!=1){
                if(num>mx)
                    mx=num;
            }
            c=1;
            num=0;
            flag=0;
        }
        if(mx==0)
            return -1;
        else
            return mx;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends