# 0x1D. C - Binary trees

Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

Basic Binary Tree

	struct binary_tree_s
	{
    		int n;
   			struct binary_tree_s *parent;
    		struct binary_tree_s *left;
    		struct binary_tree_s *right;
	};
	typedef struct binary_tree_s binary_tree_t;

Binary Search Tree

	typedef struct binary_tree_s bst_t;
AVL Tree

	typedef struct binary_tree_s avl_t;
Max Binary Heap

	typedef struct binary_tree_s heap_t;
	
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.
