//
//  ContactList.cpp
//  cppContactList
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include "ContactList.h"
using namespace std;


ContactList::ContactList():head(nullptr),size(0){
}

ContactList::~ContactList(){
    clear();
}

void ContactList::addToHead(const string& name){
    Contact* newOne = new Contact(name);
    
    if(head == nullptr){
        //if head is not pointing at anything it will points to first node
        head = newOne;
    }
    else{
        //if head is pointing at something, contact next pointer will point at what Head is pointing
        //then Head pointer will be reassigned to newly created node
        newOne->next = head;
        head = newOne;
        
        size++;
    }
}

void ContactList::printList(){
    Contact* tp = head;
    
    while(tp != nullptr){
        cout << *tp << endl;
        tp = tp->next;
    }
}

void ContactList::clear(){
    Contact* rp = head;
    
    while(rp != nullptr) {
        head = head->next;
        delete rp;
        rp = head;
    }
    head = nullptr;
}

void ContactList::insert(const std::string & name){
    Contact* newNode = new Contact(name);
    
    //case 1 - empty list
    if(head == nullptr){
        head = newNode;
    }
    else{
        Contact* cp = head;
        Contact* tp = nullptr;
        //traverse the list
        
        while(cp != nullptr){
            if(cp->name >= newNode->name){
                break;
            }
            else {
                tp = cp;
                cp = cp->next;
            }
        }
        if(cp == head) {
            //case 2 - insert at head(not empty)
            newNode->next = head;
            head = newNode;
        }
        else {
            //case 3 - insert after head(not empty)
            newNode->next = cp;
            tp->next = newNode;
        }

        
    }
    
    size++;
    
}

void ContactList::deleteNode(const std::string & name){
    //case1 - empty list
    if(head == nullptr){
        cout << "Node cannot be deleted from an empty linked list\n";
    }
    else {
        Contact* cp = head;
        Contact* tp = nullptr;
        //traverse the list
        
        while(cp!= nullptr){
            if(cp->name == name){
                //if found break out from while
                break;
            }
            else {
                tp = cp;
                cp = cp->next;
            }
        }
        
        if(cp == nullptr){
            //case 1 - no name found
            cout << "No name found!" << endl;
        }
        else {
            //case 2 - Name found!
            
            if(cp == head) {
                //case 3 - Node is at head
                head = head->next;
                delete cp;
                
            }
            else {
                //case 4 - Node is after head
                tp->next = cp->next;
                delete cp;
                
            }
            size--;
        }
    }
}
