#include <iostream>
#include <cassert>
#include "stlmp.h"

using namespace stlmp::LinkedList;
using namespace std;

int main() {
    cout << "----------------------------------------------------" << endl;
    cout << "Simple list creation:" << endl;
    cout << "----------------------------------------------------" << endl;
    auto *singlyLinkedList = new SinglyLinkedList(1);
    singlyLinkedList->append(2);
    cout << "Printing list:" << endl;
    singlyLinkedList->printList();

    cout << "Checking list length: " << singlyLinkedList->getLength() << endl;
    assert(singlyLinkedList->getLength() == 2);
    cout << "----------------------------------------------------" << endl;

    // create list from array
    cout << "create list from array" << endl;
    cout << "----------------------------------------------------" << endl;
    int foo[] = {1, 2, 3, 4, 5};
    SinglyLinkedList<int> *linkedList2 = create_list_from_array(sizeof(foo) / sizeof(foo[0]), foo);
    assert(linkedList2->getLength() ==
           sizeof(foo) / sizeof(foo[0])); // "create_list_from_array doesn't seem to work as expected!";
    cout << "----------------------------------------------------" << endl;
    //
    // // push
    // cout << "push" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo1[] = {1, 2, 3, 4, 5};
    // LLNode<int> *head1 = create_list_from_array(sizeof(foo1) / sizeof(foo1[0]), foo1);
    // push(&head1, 6);
    // assert(get_length(head1) == 1 + sizeof(foo1) / sizeof(foo1[0]));//<< "push doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // // insert after
    // cout << "insert after" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo2[] = {1, 2, 3, 4, 5};
    // LLNode<int> *head2 = create_list_from_array(sizeof(foo2) / sizeof(foo2[0]), foo2);
    // insert_after(head2, 6);
    // assert(get_length(head2) ==
    //        1 + sizeof(foo2) / sizeof(foo2[0]));//<< "insert_after doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // // append
    // cout << "append" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo3[] = {1, 2, 3, 4, 5};
    // LLNode<int> *head3 = create_list_from_array(sizeof(foo3) / sizeof(foo3[0]), foo3);
    // append(&head3, 6);
    // assert(get_length(head3) == 1 + sizeof(foo3) / sizeof(foo3[0]));//<< "append doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // // append to null list
    // cout << "append to null" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo4[] = {};
    // LLNode<int> *head4 = create_list_from_array(sizeof(foo4) / sizeof(foo4[0]), foo4);
    // append(&head4, 6);
    // assert(get_length(head4) == 1 + sizeof(foo4) / sizeof(foo4[0]));
    // //<< "append to null doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // // delete node
    // cout << "delete node" << endl;
    // cout << "----------------------------------------------------" << endl;
    // // normal
    // cout << "normal" << endl;
    // int foo5[] = {1, 2, 3};
    // LLNode<int> *head5 = create_list_from_array(sizeof(foo5) / sizeof(foo5[0]), foo5);
    // delete_node_with_data(&head5, 2);
    // assert(get_length(head5) == -1 + sizeof(foo5) / sizeof(foo5[0]));
    // //<< "delete_node_with_data doesn't seem to work as expected!";
    //
    // // empty list
    // cout << "empty list" << endl;
    // int foo52[] = {};
    // LLNode<int> *head52 = create_list_from_array(sizeof(foo52) / sizeof(foo52[0]), foo52);
    // delete_node_with_data(&head52, 2);
    // assert(get_length(head52) == 0);// << "delete_node_with_data doesn't seem to work as expected!";
    //
    // cout << "normal" << endl;
    // int foo53[] = {1, 2, 3};
    // LLNode<int> *head53 = create_list_from_array(sizeof(foo53) / sizeof(foo53[0]), foo53);
    // delete_node_with_data(&head53, 1);
    // assert(get_length(head53) == -1 + sizeof(foo53) / sizeof(foo53[0]));
    // //<< "delete_node_with_data doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // // search key
    // cout << "search key" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo6[] = {1, 2, 3};
    // LLNode<int> *head6 = create_list_from_array(sizeof(foo6) / sizeof(foo6[0]), foo6);
    // // not found should return -1
    // assert(search_key(head6, 4) == -1);// << "search_key doesn't seem to work as expected!";
    // // 1 is at  index 0
    // assert(search_key(head6, 1) == 0);// << "search_key doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // // reverse list
    // cout << "reverse list" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo7[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // LLNode<int> *head7 = create_list_from_array(sizeof(foo7) / sizeof(foo7[0]), foo7);
    // reverse_list(&head7);
    // assert(head7->data == 9);// << "reverse_list doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
    //
    // //compare lists
    // cout << "compare lists" << endl;
    // cout << "----------------------------------------------------" << endl;
    // int foo8[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // LLNode<int> *head81 = create_list_from_array(sizeof(foo8) / sizeof(foo8[0]), foo8);
    // LLNode<int> *head82 = create_list_from_array(sizeof(foo8) / sizeof(foo8[0]), foo8);
    // assert(compare_lists(head81, head82));// << "compare_lists doesn't seem to work as expected!";
    // cout << "----------------------------------------------------" << endl;
}