/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    unordered_map<int, vector<TreeNode*>> mp;
public:
    vector<TreeNode*> generateTreesUtil(int a, int b, int n) {
        int m = a*n+b;
        if(mp.find(m)!=mp.end()) {
            return mp[m];
        }
        vector<TreeNode*> ans;
        if(a>b) {
            ans.push_back(NULL);
            return ans;
        }
        for(int i=a;i<=b;i++) {
            vector<TreeNode*> lefts = generateTreesUtil(a,i-1,n);
            vector<TreeNode*> rights = generateTreesUtil(i+1,b,n);
            for(auto l: lefts) {
                for(auto r: rights) {
                    TreeNode *node = new TreeNode(i);
                    node->left=l;
                    node->right=r;
                    ans.push_back(node);
                }
            }
        }
        mp[m]=ans;
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        if(!n) return {};
        return generateTreesUtil(1, n, n+1);
    }
};
