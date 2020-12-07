#ifndef BST_H
#define BST_H

#include <iostream>
#include <stack>
#include "util.h"


class BST {
public:
    BST();
    node* rbInsert(std::string word);
    node* bstInsert(std::string word);
    node* rbInsert(std::string word, int count);
    node* bstInsert(std::string word, int count);

    void findAlphaRange(std::string word1, std::string word2);
    
    int countBSTNodes();
    int countTotalWords();
    int getDepth(std::string word);
    node** mostFrequent(int topX);

    void printInOrderBST();
    void printWord(std::string word);

    void touchNode(std::string word);
    void prettyPrint();

    void scannerReset();
    node* scannerNext();

protected:
    
private:
    BSTNode* bstAdd(std::string word, int count);
    void leftRotate(BSTNode *node);
    void rightRotate(BSTNode *node);
    void printIOBST(BSTNode * node);
    void printAplhaRangeHelper(BSTNode *node, std::string first, std::string last);
    int getDepth(BSTNode *node);
    
    BSTNode* searchBST(std::string word); //use this function to find pointer to node in BST

    std::stack<BSTNode*> scanner;
    BSTNode* root;
    int totalWords;
    int totalUnique;
};

#endif // BST_H
