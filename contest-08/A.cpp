

#include <iostream>

template <typename KeyType, typename ValType>
struct ListNode {
    ListNode(const KeyType& key, const KeyType& value, ListNode* l = nullptr, ListNode* r = nullptr)
        : left_(l), right_(r), key_(key), value_(value) {}

    ListNode* left_;
    ListNode* right_;

    void preorder() {
        std::cout << key_ << ' ';
        if (left_ != nullptr) left_->preorder();
        if (right_ != nullptr) right_->preorder();
    }

    KeyType key_;
    ValType value_;
};

template <typename KeyType, typename ValType>
class DummyTree {
   public:
    DummyTree() : root_(nullptr) {}

    void insert(const KeyType& k, const ValType& v);

    void preorder();

    void print() { root_->preorder(); }

    ~DummyTree() {
        if (root_ != nullptr) {
            delete root_->left_;
            delete root_->right_;
        }
    }

   private:
    ListNode<KeyType, ValType>* root_;
};

template <typename KeyType, typename ValType>
void DummyTree<KeyType, ValType>::insert(const KeyType& k, const ValType& v) {
    ListNode<KeyType, ValType>* newNode = new ListNode<KeyType, ValType>(k, v);

    ListNode<KeyType, ValType>* iter = root_;

    // while (true) {
    //     if (iter->left_ == nullptr && iter->right_ == nullptr) { break; }

    //     if (iter->key_ < root_->key_) {
    //         iter = iter->left_;
    //     } else if (iter->key_ > root_->key_) {
    //         iter = iter->right_;
    //     }
    // }

    iter = newNode;

    std::cout << "end of inserting\n";
}

int main() {
    DummyTree<int, int> t;

    t.insert(1, 1);

    // t.print();
}
