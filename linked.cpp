#include"linked.h"
#include<iostream>
#include<stddef.h>

Linkedlist::Linkedlist()
{
	HEAD=NULL;
	TAIL=NULL;
}
Linkedlist::~Linkedlist(){}

void Linkedlist::addToHead(int data){
	Node* newNode=new Node();
	newNode->info=data;
	newNode->next=HEAD;
	HEAD=newNode;
}

void Linkedlist::traverse(){
	Node* temp=HEAD;
	
	while (temp!=NULL){
		std::cout<<temp->info<<" ";
		temp=temp->next;
}
std::cout<<std::endl;
}
int main()
{
	Linkedlist s;
	s.addToHead(8);
	s.addToHead(5);
	s.traverse();
	
}
