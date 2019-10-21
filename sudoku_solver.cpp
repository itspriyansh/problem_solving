class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> h(9), v(9), b(9), c(81);
        vector<int> query;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    h[i].insert(board[i][j]-'0');
                    v[j].insert(board[i][j]-'0');
                    b[floor(i/3)*3+floor(j/3)].insert(board[i][j]-'0');
                }else{
                    query.push_back(i*9+j);
                }
            }
        }
        int pos=0;
        stack<pair<int,int> > trace;
        while(pos<query.size()){
            int p = query[pos]/9, q = query[pos]%9;
            bool found=false;
            for(int i=1;i<=9;i++){
                bool con1=(h[p].find(i)==h[p].end());
                bool con2=(v[q].find(i)==v[q].end());
                bool con3=(b[floor(p/3)*3+floor(q/3)].find(i)==b[floor(p/3)*3+floor(q/3)].end());
                bool con4=(c[p*9+q].find(i)==c[p*9+q].end());
                if(con1 && con2 && con3 && con4){
                    found=true;
                    // cout<<"Push "<<p<<","<<q<<" -> "<<i<<endl;
                    h[p].insert(i);
                    v[q].insert(i);
                    b[floor(p/3)*3+floor(q/3)].insert(i);
                    for(int w=pos+1;w<query.size();w++){
                        if(c[query[w]].empty()) break;
                        c[query[w]].clear();
                    }
                    trace.push(make_pair(pos,i));
                    board[p][q]=i+'0';
                    break;
                }
            }
            if(found){
                pos++;
                continue;
            }
            if(trace.empty()){
                return;
            }
            pos = trace.top().first;
            int start = trace.top().second;
            trace.pop();
            p=query[pos]/9;
            q=query[pos]%9;
            // cout<<"Pop "<<p<<","<<q<<" -> "<<start<<endl;
            h[p].erase(start);
            v[q].erase(start);
            b[floor(p/3)*3+floor(q/3)].erase(start);
            board[p][q]='.';
            c[p*9+q].insert(start);
        }
    }
};
