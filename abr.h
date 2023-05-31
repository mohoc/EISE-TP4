#ifndef __BST__
#define __BST__

typedef  int type_t;

typedef struct s_btree {
  int key ;
  type_t content;
  struct s_btree * fd ;
  struct s_btree * fg ;
} btree ;


btree * createNode ( int key, type_t content , btree * fd , btree * fg );
btree *  minBST ( btree * abr ); // Retrun the node with the minimum key
btree * maxBST ( btree * abr ); // Retrun the node with the maximum key
void infix_print ( btree * t ) ;
void print ( btree * t ) ; // prefix print
btree* search (btree * t, int key); // return the node
btree* insert (btree * t, int key, type_t content);
btree* delete(btree * t,int key);
btree* rotationLeft(btree *t);
btree* rotationRight(btree *t);
int height(btree * t); 
btree * insertBalanced(btree * t,int elem, type_t content);
int isBST(btree* t); // tree is a binary search tree
int isBalanced(btree* t); // tree is balanced
void deleteTree ( btree * b);
btree* newDelete ( btree * b, int elem);
char * prefixString(btree *t);
#endif
