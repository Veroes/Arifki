#include "tree.h"
int main()
{
    int x[9]={5,3,9,10,4,7,1,8,6};
    adrNode root;
    for(int i=0;i<9;i++){
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<9;i++){
        insertNode_1301210405(root,newNode_1301210405(x[i]));
    }
    cout<<"\n\nPre Order\t\t: ";
    printPreOrder_1301210405(root);
    cout<<"\n\nDescendent of Node 9\t: ";
    printDescendant_1301210405(root,9);
    int result;
    result=sumNode_1301210405(root);
    cout<<"\n\nSum of BST Info\t\t: "<<result;
    result=countLeaves_1301210405(root);
    cout<<"\nNumbers of Leaves\t: "<<result;
    result=heightTree_1301210405(root);
    cout<<"\nHeight of Tree\t\t: "<<result;
    return 0;
}
