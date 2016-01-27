//
//  contact.cpp
//  cppContactList
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include "contact.h"

using namespace std;

Contact::Contact(string n):name(n), next(nullptr){
}

ostream& operator<<(ostream& os, const Contact& c){
    return os << "Name: " << c.name;
}


