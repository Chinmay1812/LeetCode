class TrieNode
{
    public:
        TrieNode *h[26];
    int cnt;
    TrieNode()
    {
        cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            h[i] = NULL;
        }
    }
};

class Trie
{
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
            node=node->h[k];
        }
        node->cnt=1;
    }

    bool search(string s)
    {
        int n=s.size();
        TrieNode* node=root;
        for(int i=0;i<n;i++)
        {
            int k=s[i]-'a';
            node=node->h[k];
            if(!node)
            {
                return 0;
            }
        }
        return node->cnt>0;
    }

    bool startsWith(string s)
    {
        int n=s.size();
        TrieNode* node=root;
        for(int i=0;i<n;i++)
        {
            int k=s[i]-'a';
            node=node->h[k];
            if(!node)
            {
                return 0;
            }
        }
        return 1;
    }
};

/**
 *Your Trie object will be instantiated and called as such:
 *Trie* obj = new Trie();
 *obj->insert(word);
 *bool param_2 = obj->search(word);
 *bool param_3 = obj->startsWith(prefix);
 */