// link :::      https://leetcode.com/problems/network-delay-time/description/

class Solution {
    public:
        vector<vector<pair<int, int>>> adj;
        vector<int>dis;
        void dijkstraa(int src){ 
            
            priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
            pq.push({0,src});
            dis[src] = 0;
            while(pq.empty() == false){
                pair<int, int> parent = pq.top();
                pq.pop();
                for(auto child : adj[parent.second]){
                    if(parent.first + child.second < dis[child.first]){
                        dis[child.first] = parent.first + child.second;
                        pq.push({dis[child.first],child.first});
                    }
                }
            }
            
        }
        
        int networkDelayTime(vector<vector<int>>& times, int n, int k) {
            adj.resize(n + 1); 
            
           
            dis.resize(n + 1, INT_MAX);
    
            for(int i = 0 ; i <times.size(); i++){
                int a,b,c;
              
    
                a = times[i][0];
                b = times[i][1];
                c = times[i][2];
                    
           
                adj[a].push_back({b,c});
                
            }
    
            dijkstraa(k);
            
            int maxTime = 0;
            for (int i = 1; i <= n; i++) {
              
                if (dis[i] == INT_MAX) return -1;
                
                maxTime = max(maxTime, dis[i]);
            }
            return maxTime;
    
            
        }
    };