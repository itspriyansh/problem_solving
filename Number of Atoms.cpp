class Solution {
public:
    void countOfAtomsUtil(string &f, int a, int b, map<string, int> &m, int mul){
        for(int i=a;i<b;){
            if(f[i]=='('){
                int c=i++,opening=0;
                while(opening || f[i]!=')'){
                    //cout<<opening<<endl;
                    if(f[i]=='(') opening++;
                    else if(f[i]==')') opening--;
                    i++;
                }
                i++;
                int d=i;
                int power=0;
                while(i<b && f[i]>='0' && f[i]<='9') {
                    power = power*10+(f[i++]-'0');
                }
                if(!power) power=1;
                countOfAtomsUtil(f,c+1,d-1,m,mul*power);
                continue;
            }
            string el;
            el+=f[i++];
            while(i<b && f[i]>='a' && f[i]<='z') el+=f[i++];
            int power = 0;
            while(i<b && f[i]>='0' && f[i]<='9') {
                power = power*10+(f[i++]-'0');
            }
            if(!power) power=1;
            m[el]+=power*mul;
        }
    }
    string countOfAtoms(string &formula) {
        map<string, int> mp;
        countOfAtomsUtil(formula,0,formula.size(),mp,1);
        string ans;
        for(auto &m: mp){
            //cout<<m.first<<"->"<<m.second<<endl;
            ans+=m.first;
            if(m.second>1) ans += to_string(m.second);
        }
        return ans;
    }
};
