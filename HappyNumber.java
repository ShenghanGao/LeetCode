public class Solution {
    public boolean isHappy(int n) {
        if (n == 0) return false;
        
        while (true) {
            int sum = 0;
            
            while (n != 0) {
                int dig = n%10;
                sum += dig*dig;
                n /= 10;
            }
            
            if (sum >= 10) {
                n = sum;
                continue;
            }
            if (sum == 1) return true;
            return false;
        }
    }
}
