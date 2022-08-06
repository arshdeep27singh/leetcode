class Solution {
private:
    int countWords(string sentence){
        int ctr=1;
        for(int i=0; i<sentence.length(); i++){
            if(sentence[i] != ' ') continue;
            else ctr++;
        }
        return ctr;
    }
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i=0; i<sentences.size(); i++){
            ans = max(ans, countWords(sentences[i]));
        }
        return ans;
    }
};