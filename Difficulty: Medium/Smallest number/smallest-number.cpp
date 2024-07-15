//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        string res="";
        int i;
        for(i=0;i<d;i++){
            if(s-9>0){
                res+='9';
                s-=9;
            }
            else{
                if(i==d-1){
                res+=('0'+s);
                s=0;
                }
                else{
                res+=('0'+s-1);
                s=0;
                }
                break;
            }
        }
        i+=1;
        for(i;i<d-1;i++){
            res+='0';
        }
        if(i==d-1)
            res+='1';
        reverse(res.begin(),res.end());
        if(s!=0)
        return "-1";
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends