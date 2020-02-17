//
//  LinkedBag.cpp
//  DMPP5
//
//  Created by Daniel Mai Fisher on 3/23/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <stdio.h>
#include "LinkedBag.hpp"
#include <iostream>

using namespace std;

template<class Itemtype>   //Default Constructor
LinkedBag<Itemtype>::LinkedBag() : headPtr(nullptr), itemCount(0){
    
} //End of Default Constructor

//isEmpty Function

template<class ItemType>
bool LinkedBag<ItemType>::isEmpty() const{
    return itemCount ==0;
}

//getCurrentSize Function

template<class ItemType>
int LinkedBag<ItemType>::getCurrentSize()const{
    return itemCount;
}

//Add Function

template<class ItemType>
bool LinkedBag<ItemType>::add(const ItemType& newEntry){
    Node<ItemType>* newNodePtr = new Node<ItemType>();
    newNodePtr->setItem(newEntry);
    newNodePtr->setNext(headPtr);
    headPtr = newNodePtr;
    itemCount++;
    
    return true;
}//end add

//Remove Function

template<class ItemType>
bool LinkedBag<ItemType>::remove(const ItemType& anEntry){
    Node<ItemType>* entryNodePtr = getPointerTo(anEntry);
    
    bool canRemoveItem  =! isEmpty() && (entryNodePtr != nullptr);
    if(canRemoveItem){
        entryNodePtr->setItem(headPtr->getItem());
        
        Node<ItemType>* nodeToDeletePtr = headPtr;
        headPtr = headPtr->getNext();
        headPtr->setPrev(nullptr);
        
        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;
        
        itemCount--;
    
    
    }
    return canRemoveItem;
    
}//End Remove

//toVector Function

template<class ItemType>
    vector<ItemType> LinkedBag<ItemType>::toVector()const{
    vector<ItemType> bagContents;
    Node<ItemType>* curPtr =headPtr;
    int counter = 0;
    while ((curPtr != nullptr) && (counter<itemCount)){
        bagContents.push_back(curPtr->getItem());
        counter++;
  
    }//end While
    return bagContents;
}//end toVector


//getPointerTo Function
template <class ItemType>
Node <ItemType>* LinkedBag<ItemType>::getPointerTo (const ItemType& target) const{
    Node<ItemType>* curPtr;
    curPtr=headPtr;
    
    while (curPtr->getItem() != target && curPtr->getNext() != nullptr) {
        curPtr=curPtr->getNext();
    }
   return curPtr;
    if (curPtr->getItem() != nullptr) {
        cout<<"Silly human you can't go here"<<endl;
        return nullptr;
    }
    else {
       return curPtr;
        }
    }



//getFrequencyOf Function

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf (const ItemType & anEntry) const{
    
    int itemCount =0;
    Node<ItemType>* curPtr;
    curPtr = headPtr;
    
    while (curPtr->getNext() != nullptr) {
        if (curPtr->getItem()== anEntry) {
            itemCount++;
        }
        return  itemCount;
    }
}



//Clear Function

template<class ItemType>
void LinkedBag<ItemType>::clear(){
    Node<ItemType>* nodeToDelete = headPtr;
    while (headPtr != nullptr) {
        headPtr = headPtr->getNext();
        
        nodeToDelete->setNext(nullptr);
        delete nodeToDelete;
        nodeToDelete = headPtr;
        
    }
    itemCount=0;
}

//Contains Function

template<class ItemType>
bool LinkedBag<ItemType>::contains(const ItemType& anEntry)const{
    return (getPointerTo(anEntry) !=nullptr);
}
    
//Destructor Function

template <class ItemType>
LinkedBag<ItemType>::~LinkedBag<ItemType>(){
    clear();

};
