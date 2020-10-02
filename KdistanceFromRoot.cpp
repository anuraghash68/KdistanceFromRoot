// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  queue<pair<Node*,int>>q;
  int d=0;
  
  q.push(make_pair(root,d));
  
  map<int,vector<int>>m;
  
  while(!q.empty())
  {
      pair<Node*,int> p = q.front();
      q.pop();
      
      Node *tmp = p.first;
      d = p.second;
      
      m[d].push_back(tmp -> data);
      
      if(tmp -> left)
       q.push(make_pair(tmp -> left, d+1));
       
      if(tmp -> right)
       q.push(make_pair(tmp -> right, d+1));
       
      
  }
  vector<int>ans;
  auto it = m[k];
  for(int j=0; j < it.size(); j++)
    ans.push_back(m[k][j]);
return ans;    
}