class TrieNode
{
public:
    map<char, TrieNode*> children;
    bool isWord = false;

    void addWord(string word)
    {
        TrieNode* curr= this;

        for (char c : word)
        {
            if (!curr->children.contains(c))
                curr->children[c]=new TrieNode();
            curr=curr->children[c];
        }
        curr->isWord=true;
    }
};


class Solution {
    int ROWS=0,COLS=0;
    set<string> res;
    set<pair<int,int>> vis;
public:
    void dfs(int r , int c , TrieNode* node , string word,vector<vector<char>>& board)
    {
        if (r<0 or c<0 or
            r==ROWS or c==COLS or
            vis.contains({r,c})
            or !node->children.contains(board[r][c]))
            return ;
        vis.insert({r,c});
        node=node->children[board[r][c]];
        word+=board[r][c];
        if (node->isWord)
            res.insert(word);
        dfs(r-1,c,node,word,board);
        dfs(r+1,c,node,word,board);
        dfs(r,c-1,node,word,board);
        dfs(r,c+1,node,word,board);
        vis.erase({r,c});
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = new TrieNode();

        for (auto w : words)
        {
            root->addWord(w);
        }
        ROWS= board.size() ; COLS = board[0].size();

        for (int i = 0; i < ROWS; ++i)
        {
            for (int j = 0; j < COLS; ++j)
            {
                dfs(i,j,root,"",board);
            }
        }
        vector<string> res2;
        for (auto it : res)
            res2.push_back(it);
        return res2;
    }
};
