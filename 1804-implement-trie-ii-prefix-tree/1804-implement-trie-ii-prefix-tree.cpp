
class TrieNode
{
    public:
    TrieNode* h[26];
    int cnt;
    int start=0;
    int end=0;
    TrieNode()
    {
        for(int i=0;i<26;i++)
        {
            h[i]=NULL;
        }
        cnt=0;
    }
    
};


class Trie {
public:
    TrieNode* root;
    Trie() 
    {
        root=new TrieNode();
    }
    
    void insert(string s) 
    {
        int n=s.size();
        TrieNode* node=root;
        for(int i=0;i<n;i++)
        {
            int k=s[i]-'a';
            if(node->h[k]==NULL)
            {
            node->h[k]=new TrieNode();
            }
            node->h[k]->start++;
            node=node->h[k];
        }
        node->cnt=node->cnt+1;
        node->end++;
     }
    
    
    int countWordsEqualTo(string s) 
    {
        TrieNode* node=root;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int k=s[i]-'a';
            node=node->h[k];
            if(node==NULL)
            {
                return 0;
            }
        }
        return node->end;
    }
    
    int countWordsStartingWith(string s)
    {
        TrieNode* node=root;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int k=s[i]-'a';
            node=node->h[k];
            if(node==NULL)
            {
                return 0;
            }
        }
        return node->start;
    }
    
    void erase(string s) 
    {
        int n=s.size();
        TrieNode* node=root;
        for(int i=0;i<n;i++)
        {
            int k=s[i]-'a';
            node->h[k]->start--;
            node=node->h[k];
            
        }
        node->end--;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * int param_2 = obj->countWordsEqualTo(word);
 * int param_3 = obj->countWordsStartingWith(prefix);
 * obj->erase(word);
 */