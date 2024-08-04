#include <bits/stdc++.h>

using namespace std;

class AVLNode {
public:
    char key;
    int height;
    AVLNode *left;
    AVLNode *right;

    AVLNode *create_avlnode(char key) {
        AVLNode *node = new AVLNode;
        node->key = key;
        node->height = 0;
        node->left = node->right = NULL;

        return node;
    };
};

class AVL {
private:
    AVLNode *root;
    int nodecount;

    int max(char numb1, char numb2) {
        if (numb1 >= numb2) {
            return numb1;
        }

        return numb2;
    };

    int height(AVLNode *rt) {
        if (rt == NULL) {
            return -1;
        }

        return rt->height;
    };

    int getbalance(AVLNode *rt) {
        if (rt == NULL) {
            return 0;
        }

        return (height(rt->left) - height(rt->right));
    };

    AVLNode *right_rotate(AVLNode *rt) {
        AVLNode *temp_left = rt->left;
        AVLNode *temp_left_right = temp_left->right;

        temp_left->right = rt;
        rt->left = temp_left_right;

        rt->height = max(height(rt->left), height(rt->right)) + 1;
        temp_left->height = max(height(temp_left->left), height(temp_left->right)) + 1;

        return temp_left;
    };

    AVLNode *left_rotate(AVLNode *rt) {
        AVLNode *temp_right = rt->right;
        AVLNode *temp_right_left = temp_right->left;

        temp_right->left = rt;
        rt->right = temp_right_left;

        rt->height = max(height(rt->left), height(rt->right)) + 1;
        temp_right->height = max(height(temp_right->left), height(temp_right->right)) + 1;

        return temp_right;
    };

    AVLNode *inserthelp(AVLNode *rt, char key) {
        if (rt == NULL) {
            return rt->create_avlnode(key);
        }

        if (rt->key > key) {
            rt->left = inserthelp(rt->left, key);
        }

        else {
            rt->right = inserthelp(rt->right, key);
        }

        rt->height = 1 + max(height(rt->left), height(rt->right));
        int balance = getbalance(rt);

        if (balance < -1 && key >= rt->right->key) {
            return left_rotate(rt);
        }

        else if (balance > 1 && key < rt->left->key) {
            return right_rotate(rt);
        }

        else if (balance > 1 && key >= rt->left->key) {
            rt->left = left_rotate(rt->left);
            return right_rotate(rt);
        }

        else if (balance < -1 && key < rt->right->key) {
            rt->right = right_rotate(rt->right);
            return left_rotate(rt);
        }

        return rt;
    };

    char *findhelp(AVLNode *root, char key) {
        if (!root) {
            return NULL;
        }

        if (root->key > key) {
            return findhelp(root->left, key);
        }

        else if (root->key == key) {
            return &root->key;
        }

        else {
            return findhelp(root->right, key);
        }
    };

    bool find(AVLNode *root, int key) {
        char *temp =  findhelp(root, key);

        if (temp == NULL) {
            return false;
        }

        return true;
    }

public:
    AVL() {
        root = NULL;
        nodecount = 0;
    };

    ~AVL() {
        delete root;
        nodecount = 0;
    };

    int getnodecount() {
        return nodecount;
    };

    void insert(char key) {
        if (!find(root, key)) {
            root = inserthelp(root, key);
            nodecount++;
        }
    };
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    int size = word.size();

    AVL tree;
    for (int i = 0; i < size; i++) {
        tree.insert(word[i]);
    }

    if (tree.getnodecount() % 2 == 0) {
        cout << "CHAT WITH HER!";
    }

    else {
        cout << "IGNORE HIM!";
    }

    return 0;
}