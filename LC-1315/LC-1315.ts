/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function sumEvenGrandparent(root: TreeNode | null): number {
    /**
     * Concepts: Depth-First Search (DFS)
     */

    if (!root) return 0;
    
    let sums: number = 0, stack: TreeNode[] = [];
    stack.push(root);
    
    while (stack.length) {
        let curr: TreeNode | null = stack[stack.length - 1];
        stack.pop();
        
        if (curr!.val % 2 === 0) {
            if (curr!.left && curr.left!.left)
                sums += curr.left.left.val;
            if (curr!.left && curr.left!.right)
                sums += curr.left.right.val;
            if (curr!.right && curr.right!.left)
                sums += curr.right.left.val;
            if (curr!.right && curr.right!.right)
                sums += curr.right.right.val;
        }
        
        if (curr!.left)
            stack.push(curr.left)
        if (curr!.right)
            stack.push(curr.right)
    }
    
    return sums;
}