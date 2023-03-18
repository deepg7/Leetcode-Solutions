struct Node {
    string val;
    Node* next=nullptr;
    Node* prev=nullptr;
    Node(string str)
    {
        val=str;
    }
};

class BrowserHistory {
public:
    Node* head;
    BrowserHistory(string homepage) {
        head=new Node(homepage);
    }
    
    void visit(string url) {
        Node* node=new Node(url);
        head->next=node;
        node->prev=head;
        head=node;
    }
    
    string back(int steps) {
        int i=0;
        while(i<steps && head->prev)
        {
            head=head->prev;
            i++;
        }
        return head->val;
    }
    
    string forward(int steps) {
        int i=0;
        while(i<steps && head->next)
        {
            head=head->next;
            i++;
        }
        return head->val;
    }
};