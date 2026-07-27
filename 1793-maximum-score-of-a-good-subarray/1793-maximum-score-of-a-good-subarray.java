import java.util.Stack;

class Solution {
    public int maximumScore(int[] nums, int k) {
        int len = nums.length;
        int[] p = pse(nums);
        int[] n = nse(nums);
        int res = 0;
        
        for (int i = 0; i < len; i++) {
            if (p[i] < k && n[i] > k) {
                int width = (n[i] - p[i]) - 1;
                int currentScore = width * nums[i];
                res = Math.max(res, currentScore);
            }
        }
        return res;
    }

    public int[] pse(int[] a) {
        int n = a.length;
        int[] r = new int[n];
        Stack<Integer> stk = new Stack<>();
        for (int j = 0; j < n; j++) {
            while (!stk.isEmpty() && a[j] <= a[stk.peek()]) {
                stk.pop();
            }
            r[j] = stk.isEmpty() ? -1 : stk.peek();
            stk.push(j);
        }
        return r;
    }

    public int[] nse(int[] a) {
        int n = a.length;
        int[] l = new int[n];
        Stack<Integer> stk = new Stack<>();
        for (int j = n - 1; j >= 0; j--) {
            while (!stk.isEmpty() && a[j] <= a[stk.peek()]) {
                stk.pop();
            }
            l[j] = stk.isEmpty() ? n : stk.peek();
            stk.push(j);
        }
        return l;
    }
}
