#include "tree.h"
adrNode newNode_1301210405(infotype x){
    adrNode thisNode=new node;
    info(thisNode)=x;
    left(thisNode)=NULL;
    right(thisNode)=NULL;
    return thisNode;
}
adrNode findNode_1301210405(adrNode root,infotype x){
    if(info(root)==x){
        return root;
    }else if(info(root)>x){
        return findNode_1301210405(left(root),x);
    }else{
        return findNode_1301210405(right(root),x);
    }
}
void insertNode_1301210405(adrNode &root,adrNode p){
    if(root==NULL){
        root=p;
    }else if(info(root)>info(p)){
        insertNode_1301210405(left(root),p);
    }else{
        insertNode_1301210405(right(root),p);
    }
}
void printPreOrder_1301210405(adrNode root){
    if(root!=NULL){
        cout<<info(root)<<" ";
        printPreOrder_1301210405(left(root));
        printPreOrder_1301210405(right(root));
    }
}
void printDescendant_1301210405(adrNode root,infotype x){
    adrNode thisNode=findNode_1301210405(root,x);
    if(thisNode!=NULL){
        if(info(thisNode)!=x){
            cout<<info(thisNode)<<" ";
            printPreOrder_1301210405(left(thisNode));
            printPreOrder_1301210405(right(thisNode));
        }else{
            printPreOrder_1301210405(left(thisNode));
            printPreOrder_1301210405(right(thisNode));
        }
    }
}
int sumNode_1301210405(adrNode root){
    if(root==NULL){
        return 0;
    }
    return info(root)+sumNode_1301210405(left(root))+sumNode_1301210405(right(root));
}
int countLeaves_1301210405(adrNode root){
    if(root==NULL){
        return 0;
    }else if(left(root)==NULL&&right(root)==NULL){
        return 1;
    } else {
        return countLeaves_1301210405(left(root))+countLeaves_1301210405(right(root));
    }
}
int heightTree_1301210405(adrNode root){
    if(root==NULL){
        return -1;
    }else{
        int leftHeight=heightTree_1301210405(left(root));
        int rightHeight=heightTree_1301210405(right(root));
        if(leftHeight>rightHeight){
            return ++leftHeight;
        }else{
            return ++rightHeight;
        }
    }
}
