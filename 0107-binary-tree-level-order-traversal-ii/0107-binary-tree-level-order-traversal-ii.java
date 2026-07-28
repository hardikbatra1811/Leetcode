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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        ArrayDeque<TreeNode> kyu = new ArrayDeque<>();
        List<List<Integer>> arr = new ArrayList<>();
         if (root == null) {
            return arr; 
        }
        boolean rev = false;

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
        Collections.reverse(arr);
        return arr;
    }
}