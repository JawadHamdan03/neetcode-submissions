class TrieNode
{
public:
    map<char , TrieNode*> children;
    bool endOfWord=false;
};

class WordDictionary {
public:
    TrieNode * root;

    WordDictionary() {
        root= new TrieNode();
    }

    void addWord(string word) {
        auto curr = root;

        for (char c : word)
        {
            if (!curr->children.contains(c))
                curr->children[c]=new TrieNode();
            curr=curr->children[c];
        }
        curr->endOfWord=true;
    }

    bool dfs(int j , TrieNode* root,string word)
    {
        auto curr = root;

        for (int i = j; i < word.size(); ++i)
        {
            char c = word[i];
            if (c=='.')
            {
                for (auto child : curr->children )
                    if (dfs(i+1,child.second,word))
                        return true;
                return false;
            }
            else
            {
                if (!curr->children.contains(c))
                    return false;
                curr=curr->children[c];
            }
        }
        return curr->endOfWord;
    }
    bool search(string word) {

        return dfs(0,root,word);
    }
};
