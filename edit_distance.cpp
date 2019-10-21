class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> list(word1.size()+1, vector<int>(word2.size()+1));
        list[0][0]=0;
        for(int i=1;i<=word2.size();i++){
            list[0][i]=i;
        }
        for(int i=1;i<=word1.size();i++){
            list[i][0]=i;
        }
        for(int i=0;i<word1.size();i++){
            for(int j=0;j<word2.size();j++){
                list[i+1][j+1] = min(list[i+1][j]+1, list[i][j+1]+1);
                if(word1[i]==word2[j]) list[i+1][j+1] = min(list[i+1][j+1], list[i][j]);
                else list[i+1][j+1] = min(list[i+1][j+1], list[i][j]+1);
            }
        }
        return list[word1.size()][word2.size()];
    }
};
