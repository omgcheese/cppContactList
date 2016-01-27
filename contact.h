//
//  contact.h
//  cppContactList
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#ifndef __cppContactList__contact__
#define __cppContactList__contact__

#include <iostream>
#include <string>

class Contact{
    
    friend class ContactList;
    friend std::ostream& operator<<(std::ostream& os, const Contact& c);
    
public:
    Contact(std::string name = "none");
    
private:
    std::string name;
    //data
    
    Contact* next;
    //link to next
};

#endif /* defined(__cppContactList__contact__) */
