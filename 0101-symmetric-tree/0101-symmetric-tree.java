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
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if(p==null && q==null)return true;
        if(p==null || q==null)return false;
        if(p.val==q.val){
            boolean a = isSameTree(p.left,q.right);
            boolean b = isSameTree(p.right,q.left);
            return a&&b;
        }
        else return false;
    }
    public boolean isSymmetric(TreeNode root) {
        if(root==null) return true;
        return isSameTree(root.left,root.right);
    }
}