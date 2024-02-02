//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int num=0,k=1;
        int a;
        if(s[0]=='-')
            a=1;
        else
            a=0;
        for(int i=s.size()-1;i>=a;i--){
            if(s[i]>='0' && s[i]<='9')
                num+=(s[i]-'0')*k;
            else
                return -1;
            k*=10;
        }
        if(a==1)
            num=-(num);
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends