//
//  main.cpp
//  cppContactList
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
#include "contact.h"
#include "ContactList.h"

using namespace std;

int main() {
    
    ContactList* cl1 = new ContactList;
    
    string name;
    
    while(true){
        cout << "Enter the name of the contact or q to quit.\n";
        cin >> name;
        if(name== "q")
            break;
        else if(name == "add"){
            cin >> name;
            cl1->insert(name);
        }
        else if(name == "delete") {
            cin >> name;
            cl1->deleteNode(name);
        }
    }
    
    cl1->printList();
    
    
    return 0;
}
