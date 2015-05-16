public class Solution {
    public String countAndSay(int n) {
        if (n == 1) return "1";
        
        char[] prev = countAndSay(n-1).toCharArray();
        
        String res = "";
        
        char st = prev[0];
        int cnt = 0;
        
        for (char curr:prev) {
            if (curr == st)
                ++cnt;
            else {
                res = res + cnt + st;
                st = curr;
                cnt = 1;
            }
        }
        res = res + cnt + st;
        
        return res;
    }
}
