//
//  BagInterface.hpp
//  DMPP5
//
//  Created by Daniel Mai Fisher on 3/19/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#ifndef BagInterface_hpp
#define BagInterface_hpp

#include <stdio.h>
#include <vector>

template <class ItemType>
class BagInterface {
    
public:
    virtual int getCurrentSize() const = 0;
    virtual bool isEmpty() const = 0;
    virtual bool add(const ItemType& newEntry) = 0;
    virtual bool remove(const ItemType& newEntry) = 0;
    virtual void clear() = 0;
    virtual int getFrequencyOf(const ItemType& anEntry) const = 0;
    virtual bool contains(const ItemType& anEntry) const = 0;
    virtual std::vector<ItemType> toVector() const = 0;
    virtual ~BagInterface() = 0;
};

#endif /* BagInterface_hpp */

