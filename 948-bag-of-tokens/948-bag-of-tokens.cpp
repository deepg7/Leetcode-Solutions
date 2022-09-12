class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        int score = 0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                i++;
                score++;
            }else if(score>0 && i!=j){
                power+=tokens[j];
                j--;
                score--;
            }
            else break;
            
        }
        return score;
    }
};