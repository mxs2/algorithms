# Tree Diagram 

Below is an ASCII diagram representing the BST structure `{50, 30, 70, 20, 40, 60, 80}`:

```
        50
       /  \
     30    70
    / \    / \
  20  40  60  80
```

## Binary Tree Traversals

Given the following binary search tree:

```
        40
       /  \
     20    60
    / \    / \
  10  30  50  70
```

The three main traversal methods produce these sequences:

a)
```
        (40) 1
       /    \
      /      \
    (20) 2   (60) 5
    /   \    /   \
   /     \  /     \
(10) 3 (30) 4 (50) 6 (70) 7
```

b) 
```
        (40) 4
       /    \
      /      \
    (20) 2   (60) 6
    /   \    /   \
   /     \  /     \
(10) 1 (30) 3 (50) 5 (70) 7
```

c)
```
        (40) 7
       /    \
      /      \
    (20) 3   (60) 6
    /   \    /   \
   /     \  /     \
(10) 1 (30) 2 (50) 4 (70) 5
```
