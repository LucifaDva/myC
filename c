#include <stdio.h>
#include <stdlib.h>

typedef struct TNode
{
     char data;
     struct TNode *lchild , *rchild;
}BiTNode , *BiTree;

int creatTree(BiTree *root) //递归创建二叉树
{    
     char ch;
     scanf("%c" , &ch);
     if(ch == '#')
     {
          (*root) = NULL;
     }
     else
     {
          if(!((*root) = (BiTree)malloc(sizeof(BiTNode))))
          {    
               printf("malloc error!\n");
               return -1;
          }
          (*root)->data = ch;
          creatTree(&((*root)->lchild));
          creatTree(&((*root)->rchild));
     }
    
     return 0;
}

void inOrderTraverse(BiTree tree)     //递归中序遍历
{
     if(tree)
     {
         
          printf("%c", tree->data);
          inOrderTraverse(tree->lchild);
          inOrderTraverse(tree->rchild);
     }
     return ;
}


int main()
{
     BiTree tree ;
     creatTree(&tree);

     printf("\n*********中序遍历*********\n");
     inOrderTraverse(tree);

     printf("\n");
    
     return 0;
}
