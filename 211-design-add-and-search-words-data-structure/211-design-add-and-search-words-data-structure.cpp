class TrieNode
{
public:
 TrieNode* h[26];
 int cnt;
    TrieNode()
    {
        cnt=0;
        for(int i=0;i<26;i++)
        {
            h[i]=NULL;
        }
    }   
};

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string s)
    {
        TrieNode* node=root;
        int n=s.size();
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
        return fun(s,root);
    }
    
    bool fun(string s,TrieNode* node)
    {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                if(!node->h[s[i]-'a'])
                {
                    return false;
                }
                node=node->h[s[i]-'a'];
            }
            else
            {
                for(int j=0;j<26;j++)
                {
                    if(node->h[j] && fun(s.substr(i+1),node->h[j]))
                    {
                        return true;
                    }
                }
                return false;
            }   
        }
        return node->cnt>0;
    }
    
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */