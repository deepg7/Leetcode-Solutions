class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = root;
        for (auto c:word) {
            if (!cur->children[c-'a']) cur->children[c-'a'] = new TrieNode();
            cur = cur->children[c-'a'];
        }
        cur->end = true;
    }
    
    bool search(string word) {
        TrieNode* cur = find(word);
        if (cur == NULL) return false;
        else return cur->end;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = find(prefix);
        return cur != NULL;
    }
private:
    struct TrieNode {
        bool end;
        TrieNode* children[26];
        TrieNode() {
            end = false;
            for (int i = 0; i < 26 ; i++) children[i] = NULL;
        }
    };
    TrieNode* root;
    TrieNode* find(const string& s) {
        TrieNode* cur = root;
        for (auto c:s) {
            if (!cur->children[c-'a']) return NULL;
            cur = cur->children[c-'a'];
        }
        return cur;
    }
};