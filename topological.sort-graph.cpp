  private:
    void dfs(int node,int vis[],vector<int> adj[],stack<int> &stk){
        vis[node]=1;
        
            for(auto it:adj[node]){
                if(!vis[it]){
                    
                    dfs(it,vis,adj,stk);}
            }stk.push(node);
        
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{   int vis[V]={0};
	stack<int>stk;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,adj,stk);
	        }
	    }
	    vector<int>v;
	    while(!stk.empty()){
	        v.push_back(stk.top());
	        stk.pop();
	    }return v;
	}