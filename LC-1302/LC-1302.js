/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

// Define a item for storing the current value at the node
function Item(_node, _level) {
  this.node = _node === undefined ? null : _node
  this.level = _level === undefined ? 0 : _level
}

/**
 * @param {TreeNode} root
 * @return {number}
 */
var deepestLeavesSum = function (root) {
  /**
   * Concepts: Depth-First Search (DFS)
   */

  if (!root) return 0

  let stack = [],
    bucket = {},
    maxLevel = 1
  stack.push(new Item(root, maxLevel))
  while (stack.length) {
    let item = stack[stack.length - 1]
    stack.pop()
    let node = item.node,
      level = item.level
    if (!node.left && !node.right) {
      if (bucket.hasOwnProperty(level)) {
        bucket[level] += item.node.val
      } else {
        bucket[level] = item.node.val
      }
      maxLevel = level > maxLevel ? level : maxLevel
      continue
    }
    if (node.left) {
      stack.push(new Item(node.left, level + 1))
    }
    if (node.right) {
      stack.push(new Item(node.right, level + 1))
    }
  }

  return bucket[maxLevel]
}
