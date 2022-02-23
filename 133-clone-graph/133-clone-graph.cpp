
class Solution {
public:
    
    void dfs(Node* curr, Node* node,vector<Node *>& visited){
        visited[node->val]=node;
        for(auto ele:curr->neighbors){
            if(visited[ele->val]==NULL){
                Node* newNode = new Node(ele->val);
                (node->neighbors).push_back(newNode);
                dfs(ele,newNode,visited);
            }
            else{
                (node->neighbors).push_back(visited[ele->val]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        vector<Node* > visited(102,NULL);
        Node* copy = new Node(node->val);
        visited[node->val]=copy;
        for(auto curr:node->neighbors){
            if(visited[curr->val]==NULL){
                Node* newNode = new Node(curr->val);
                (copy->neighbors).push_back(newNode);
                dfs(curr,newNode,visited);
            }
            else{
                (copy->neighbors).push_back(visited[curr->val]);
            }
        }
        return copy;
    }
};