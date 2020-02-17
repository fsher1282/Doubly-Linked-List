//
//  Node.cpp
//  DMPP5
//
//  Created by Daniel Mai Fisher on 3/19/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <cstddef>
#include "LinkedNode.hpp"

template <class ItemType>
Node<ItemType>::Node():next (nullptr), prev(nullptr){
}   // end default constructor

template <class ItemType>
Node<ItemType>::Node(const ItemType & anItem):item (anItem), next(nullptr){
}   // end constructor

template <class ItemType>
Node <ItemType>::Node(const ItemType & anItem, Node <ItemType> *nextNodePtr):
item (anItem),next (nextNodePtr){
}   // end constructor

template <class ItemType>
void Node <ItemType>::setItem(const ItemType & anItem)
{
    item =anItem;
}   // end setItem

template <class ItemType>
void Node <ItemType>::setNext(Node <ItemType> *nextNodePtr)
{
    next = nextNodePtr;
}   // end setNext

template <class ItemType> ItemType
Node <ItemType>::getItem() const
{
    return item;
}   // end getItem

template <class ItemType>
Node <ItemType> *Node <ItemType>::getNext() const
{
    return next;
}   // end getNext

//From here I modified the code

template <class ItemType>
void Node <ItemType>::setPrev(Node<ItemType>* prevNodePtr){
    prev = prevNodePtr;
}  //end setPrev

template <class ItemType>
Node<ItemType> *Node<ItemType>::getPrev() const{
    return prev;
}  // end getPrev

template<class ItemType>
Node<ItemType>::~Node<ItemType>(){
    
};
