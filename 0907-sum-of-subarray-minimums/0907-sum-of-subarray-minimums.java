import java.util.Stack;

class Solution {
    public int sumSubarrayMins(int[] arr) {
        int len = arr.length;
        int[] p = pse(arr);
        int[] n = nse(arr);
        long res = 0;
        long m = 1_000_000_007;
        
        for (int i = 0; i < len; i++) {
            long a = i - p[i];
            long b = n[i] - i;
            res = (res + (((a * b) % m) * arr[i]) % m) % m;
        }
        return (int) res;
    }

    public int[] pse(int[] a) {
        int n = a.length;
        int[] r = new int[n];
        Stack<Integer> stk = new Stack<>();
        for (int j = 0; j < n; j++) {
            while (!stk.isEmpty() && a[j] < a[stk.peek()]) {
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
