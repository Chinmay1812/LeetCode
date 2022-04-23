class Solution {
public:

    // Encodes a URL to a shortened URL.
    string g="";
    string encode(string s)
    {
        g= s;
        return " ";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string s) 
    {
        return g;    
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));