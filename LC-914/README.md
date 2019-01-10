# LC-914 - X of a Kind in a Deck of Cards

In a deck of cards, each card has an integer written on it.

Return `true` if and only if you can choose `X >= 2` such that it is possible to split the entire deck into 1 or more groups of cards, where:
* Each group has exactly `X` cards.
* All the cards in each group have the same integer.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,3,4,4,3,2,1]
Output: true
Explanation:
Possible partition [1,1],[2,2],[3,3],[4,4]
```

```
Input: [1,1,1,2,2,2,3,3]
Output: false
Explanation:
No possible partition.
```

```
Input: [1]
Output: false
Explanation:
No possible partition.
```

```
Input: [1,1]
Output: true
Explanation:
Possible partition [1,1]
```

```
Input: [1,1,2,2,2,2]
Output: true
Explanation:
Possible partition [1,1],[2,2],[2,2]
```

---
## Notes

* `1 <= deck.length <= 10000`
* `0 <= deck[i] < 10000`

---
## Solutions

1. Brute Force
    * Time complexity: $O(n^2 \log{\log{n}})$
    * Space complexity: $O(n)$
2. Greatest Common Divisor (GCD)
    * Time complexity: $O(n \log{^2 N}})$
    * Space complexity: $O(n)$