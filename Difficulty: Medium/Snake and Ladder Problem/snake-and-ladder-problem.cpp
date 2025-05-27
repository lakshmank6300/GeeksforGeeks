// User function Template for C++

class Solution {
  public:
    int solve(unordered_map<int,int>&ladders,unordered_map<int,int>&snakes){
        queue<int>que;
        vector<int>cost(31,-1);
        que.push(1);
        cost[1]=0;
        while(!que.empty()){
            int top=que.front();
            que.pop();
            for(int i=1;i<=6 && top+i<=30 ;i++){
                if(!snakes[top+i] && cost[top+i]==-1){
                    if(ladders[top+i]){
                        if(cost[ladders[top+i]]!=-1) continue;
                        cost[ladders[top+i]]=cost[top]+1;
                        que.push(ladders[top+i]);
                    }
                    else{ que.push(top+i); cost[top+i]=cost[top]+1;  };
                }
            }
            if(top+6>=30) return cost[30];
        }
    }
    int minThrow(int N, int arr[]) {
        unordered_map<int,int>ladders,snakes;
        for(int i=0;i<=N;i+=2){
            if(arr[i]<arr[i+1]){
                ladders[arr[i]]=arr[i+1];
            }
            else{
                snakes[arr[i]]=arr[i+1];
                // cout<<" "<<i<<" ";
            }
        }
        // for(auto i:ladders) cout<<i.first<<" "<<i.second<<endl;
        // cout<<endl<<endl;
        // for(auto i:snakes) cout<<i.first<<" "<<i.second<<endl;
        return solve(ladders,snakes);
            
    }
};