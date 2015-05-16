public class Solution {
    public String addBinary(String a, String b) {
        int aP = a.length() - 1;
        int bP = b.length() - 1;
        
        int carry = 0;
        String result = "";
        while (aP >= 0 && bP >= 0) {
            int aBit = a.charAt(aP) - '0';
            int bBit = b.charAt(bP) - '0';
            Integer sum = aBit + bBit + carry;
            if (sum >= 2) {
                sum -= 2;
                carry = 1;
            }
            else
                carry = 0;
            result = sum.toString() + result;
            --aP; --bP;
        }
        
        while (aP >= 0) {
            int aBit = a.charAt(aP) - '0';
            Integer sum = aBit + carry;
            if (sum >= 2) {
                sum -= 2;
                carry = 1;
            }
            else
                carry = 0;
            result = sum.toString() + result;
            --aP;
        }
        
        while (bP >= 0) {
            int bBit = b.charAt(bP) - '0';
            Integer sum = bBit + carry;
            if (sum >= 2) {
                sum -= 2;
                carry = 1;
            }
            else
                carry = 0;
            result = sum.toString() + result;
            --bP;
        }
        
        if (carry == 1)
            result = '1' + result;
        
        return result;
    }
}
