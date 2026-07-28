/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int deepestLeavesSum(TreeNode root) {
        ArrayDeque<TreeNode> kyu = new ArrayDeque<>();
        List<List<Integer>> arr = new ArrayList<>();
         if (root == null) {
            return 0; 
        }
        kyu.add(root);
        while(kyu.size()>0){
            int s = kyu.size();
            List<Integer> temp = new ArrayList<>();
            for(int i = 0;i<s;i++){
                TreeNode curr = kyu.peek();
                kyu.remove();
                temp.add(curr.val);
                if(curr.left!=null) 
                    kyu.add(curr.left);
                if(curr.right!=null)
                    kyu.add(curr.right);             
            }
            arr.add(temp);
            
        }
        int n = arr.size();
        int sum =0;
        for(int num : arr.get(n-1)){
            sum+=num;
        }
        return sum;
    }
}