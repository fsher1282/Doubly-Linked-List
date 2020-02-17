//
//  LinkedBag.hpp
//  DMPP5
//
//  Created by Daniel Mai Fisher on 3/19/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#ifndef LinkedBag_hpp
#define LinkedBag_hpp
#include <stdio.h>
#include "BagInterface.hpp"
#include "LinkedNode.hpp"
#include <vector>

template <class ItemType> class LinkedBag:public BagInterface <ItemType>
{
private:
  Node <ItemType> *headPtr;	// Pointer to first node
  int itemCount;		// Current count of bag items
     // Returns either a pointer to the node containing a given entry
     // or the null pointer if the entry is not in the bag.
  Node <ItemType> *getPointerTo (const ItemType & target) const;

public:
  LinkedBag();
  LinkedBag (const LinkedBag <ItemType> &aBag);	// Copy constructor
  ~ LinkedBag();	// Destructor should be virtual
  int getCurrentSize() const;
  bool isEmpty() const;
  bool add(const ItemType & newEntry);
  bool remove(const ItemType & anEntry);
  void clear();
  bool contains (const ItemType & anEntry) const;
  int getFrequencyOf (const ItemType & anEntry) const;
  std::vector <ItemType> toVector()const;
};  // end LinkedBag

#endif /*LinkedBag_hpp */
