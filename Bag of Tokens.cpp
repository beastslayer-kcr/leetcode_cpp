class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int n=tokens.size();
        int ret = 0;
        int curr=0;
        int i = 0;
        int j = n-1;
        sort(tokens.begin(),tokens.end());
        while(i<=j && P>=tokens[i]){
            while(i<=j && P>=tokens[i]){
                P-=tokens[i];
                i++;
                curr++;
            }
            ret = max(curr,ret);
            while(j>=i && curr!=0 && P<tokens[i]){
                P+=tokens[j];
                j-=1;
                curr-=1;
            }
            
        }
        return ret;
    }
};
