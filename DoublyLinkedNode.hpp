//
//  Node.hpp
//  DMPP5
//
//  Created by Daniel Mai Fisher on 3/19/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//
#ifndef Node_hpp
#define Node_hpp
#include <stdio.h>

template <class ItemType>
class Node{
    private :
       ItemType item; // A data item
       Node<ItemType>* next; // Pointer to next node
    
    //From here to public I modified the header file
       Node<ItemType>*prev;  //Pointer to previous Node
    
    public :
       Node();
       Node(const ItemType& anItem);
       Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
       void setItem(const ItemType& anItem);
       void setNext(Node<ItemType>* nextNodePtr);
       ItemType getItem() const ;
       Node<ItemType>* getNext() const ;
    
    //From here I modified the code that was given
       Node<ItemType>* getPrev() const;
       void setPrev(Node<ItemType>* prevNodePtr);
       ~Node();
};
 // end Node
/*                          _______________
 ___________________________| ItemType    |
 |                          |_____________|
 |       LinkedBag Class             |
 |___________________________________|
 |      ItemType item                    |
 |                                   |
 |___________________________________|
 |                                   |
 |                                   |
 |                                   |
 |                                   |
 |                                   |
 |                                   |
 |                                   |
 |                                   |
 |___________________________________|
 */

#endif /* Node_hpp */
