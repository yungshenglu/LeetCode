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

// Define a item for storing the current value at the node
class Item {
  node: TreeNode | null
  level: number
  constructor(_node?: TreeNode | null, _level?: number) {
    this.node = _node === undefined ? null : _node
    this.level = _level === undefined ? 0 : _level
  }
}

function deepestLeavesSum(root: TreeNode | null): number {
  /**
   * Concepts: Depth-First Search (DFS)
   */

  if (!root) return 0

  let stack: Item[] = [],
    bucket: any = {},
    maxLevel: number = 1
  stack.push(new Item(root, maxLevel))
  while (stack.length) {
    let item: Item = stack[stack.length - 1]
    stack.pop()
    let node: TreeNode | null = item.node,
      level: number = item.level
    if (!node!.left && !node!.right) {
      if (bucket!.hasOwnProperty(level)) {
        bucket[level] += item.node!.val
      } else {
        bucket[level] = item.node!.val
      }
      maxLevel = level > maxLevel ? level : maxLevel
      continue
    }
    if (node!.left) {
      stack.push(new Item(node!.left, level + 1))
    }
    if (node!.right) {
      stack.push(new Item(node!.right, level + 1))
    }
  }

  return bucket[maxLevel]
}
