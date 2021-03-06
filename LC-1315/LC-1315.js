/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumEvenGrandparent = function(root) {
    /**
     * Concepts: Depth-First Search (DFS)
     */

    if (!root) return 0;
    
    let sums = 0, stack = [];
    stack.push(root);
    while (stack.length) {
        let curr = stack[stack.length - 1];
        stack.pop();
        
        if (curr.val % 2 === 0) {
            if (curr.left && curr.left.left)
                sums += curr.left.left.val;
            if (curr.left && curr.left.right)
                sums += curr.left.right.val;
            if (curr.right && curr.right.left)
                sums += curr.right.left.val;
            if (curr.right && curr.right.right)
                sums += curr.right.right.val;
        }
        
        if (curr.left)
            stack.push(curr.left)
        if (curr.right)
            stack.push(curr.right)
    }
    
    return sums;
};