class Solution {
    private void generate(int open, int close, int n, String current, List<String> result){
        // if open and close have tried all solution than just return the list created
        if(open == close && open + close == 2 * n){
            result.add(current);
            return;
        }
        // if open is still less than N, let it add opening paranthesis
        if(open < n)
            generate(open + 1, close, n, current + '(', result);
        // if close is less than open counts, add closing options
        if(close < open)
            generate(open, close + 1, n, current + ')', result);
    }

    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        generate(0,0, n, "", result);
        return result;
    }
}