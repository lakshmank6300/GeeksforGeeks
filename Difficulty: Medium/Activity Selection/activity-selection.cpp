//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    static bool compare(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int,int>>vec;
        int n=start.size();
        for(int i=0;i<n;i++){
            vec.push_back({finish[i],start[i]});
        }
        sort(vec.begin(),vec.end());
        int prev=vec[0].first,cnt=1;
        for(int i=1;i<vec.size();i++){
            if(vec[i].second>prev){
                prev=vec[i].first;
                cnt++;
            }
        }
        return cnt;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends