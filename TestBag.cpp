//
//  main.cpp
//  DMPP5
//
//  Created by Daniel Mai Fisher on 3/19/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <cctype>
#include <iostream>
#include <vector>
#include "BagInterface.hpp"
#include "LinkedBag.hpp"
#include "LinkedNode.hpp"
using namespace std;


void displayBag (LinkedBag <string> *bagPtr){
    
    cout << "The bag contains " << bagPtr->getCurrentSize() << " items:" << endl;
    vector <string> bagItems;
    bagPtr->toVector();
    int numberOfEntries = bagItems.size();
    for (int i = 0; i < numberOfEntries; i++){
        cout << bagItems[i] << " ";
        
    }    // end for
    cout << endl;
    
}   // end displayBag

void bagTester (LinkedBag <string> *bagPtr)
{
    cout << "isEmpty: returns " << bagPtr->isEmpty () << "; should be 1 (true)" << endl;
    string items[] = { "one", "two", "three", "four", "five", "one" };
    cout << "Add 6 items to the bag: " << endl;
    for (int i = 0; i < 6; i++){
        bagPtr->add (items[i]);
    }    // end for
    displayBag (bagPtr);
    cout << "isEmpty: returns " << bagPtr->isEmpty() << "; should be 0 (false)" << endl;
    cout << "getCurrentSize returns : " << bagPtr->getCurrentSize () << "; should be 6" << endl;
    cout << "Try to add another entry: add(\"extra\") returns " << bagPtr->add ("extra") << endl;
}

int main(int argc, const char * argv[]) {
    cout<<"I ain't done with this yet"<<endl;
    LinkedBag <std::string> *bagPtr = nullptr;
        char userChoice;
        cout<<" Type in 'L' to test the Doubly linked-based implementation: ";
        cin >> userChoice;
 
        if (userChoice=='L') {
            bagPtr = new LinkedBag <string>();
            cout << "Testing the Link-Based Bag:" << endl;
        }    // end if
 
        cout << "The initial bag is empty." << endl;
        bagTester (bagPtr);
        delete bagPtr;
        bagPtr = nullptr;
        cout << "All done!" << endl;
 

return 0;
    }   // end main
   
/*If you find this "duplicate symbols for architecture x86_64", you can check the code for duplicate variables or methods. For me, I have "extern"ed an "int" from another class and I declared it again in .m file, so I deleted the "int" variables in .m file and the error was fixed
 */
