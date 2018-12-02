# Introduction to 2D Array - Exercises

1. Diagonal Traverse
2. Spiral Matrix
3. Pascal's Triangle

---
## 1. Diagonal Traverse

Given a matrix of $M \times N$ elements ($M$ rows, $N$ columns), return all elements of the matrix in diagonal order as shown in the below image.

### Examples

```
Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output:  [1,2,4,7,5,3,6,8,9]
```

![](https://assets.leetcode.com/uploads/2018/10/12/diagonal_traverse.png)

### Notes

* The total number of elements of the given matrix will not exceed 10,000.

---
## 2. Spiral Matrix

Given a matrix of $m \times n$ elements ($m$ rows, $n$ columns), return all elements of the matrix in spiral order.

### Examples

```
Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
```

```
Input:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
```

---
## 3. Pascal's Triangle

Given a non-negative integer `numRows`, generate the first numRows of Pascal's triangle.

### Examples

```
Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
```