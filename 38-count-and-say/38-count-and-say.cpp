class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s = "11";
        for(int i=3; i<=n; i++){
            string t = "";
            s += "$";
            int ctr = 1;
            for(int j=1; j<s.length(); j++){
                if(s[j] != s[j-1]){
                    t += to_string(ctr);
                    t += s[j-1];
                    ctr = 1;
                } else 
                    ctr++;
            }
            s = t;
        }
        return s;
    }
};