//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	   int arr[26]={0},f=0,i;
	   for(i=0;i<s.size();i++){
	       arr[s[i]-'a']++;
	   }
	   sort(arr,arr+26);
	   for(i=25;i>0;i--){
	       if(arr[i-1]==0)
	            break;
	       if(arr[i]!=arr[i-1]){
	           f++;
	       }
	   }
	   if(f==0)
	        return true;
	   else if(arr[i]==1 && f==1)
	        return true;
	   else if(arr[25]-arr[24]==1 && f==1)
	        return true;
	   else
	        return false;
	   
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends