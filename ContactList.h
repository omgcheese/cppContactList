//
//  ContactList.h
//  cppContactList
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#ifndef __cppContactList__ContactList__
#define __cppContactList__ContactList__

#include <stdio.h>
#include "contact.h"

class ContactList{
    
public:
    ContactList();
    ~ContactList();
    void clear();
    void addToHead(const std::string&);
    void printList();
    void insert(const std::string&);
    void deleteNode(const std::string&);
    
private:
    Contact* head;
    int size;
    
};

#endif /* defined(__cppContactList__ContactList__) */
