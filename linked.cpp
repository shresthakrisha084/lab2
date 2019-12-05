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

void Linkedlist::add(int data,Node* &predecessor){
	Node* newNode=new Node();
	newNode->info=data;
	newNode->next=predecessor->next;
	predecessor->next=newNode;
}

void Linkedlist::traverse(){
	Node* temp=HEAD;
	
	while (temp!=NULL){
		std::cout<<temp->info<<" ";
		temp=temp->next;
}
std::cout<<std::endl;
}
void Linkedlist::removefromHead(){
	Node* toDelete=HEAD;
	HEAD= HEAD->next;
	if (HEAD==NULL){
		TAIL=NULL;
	}
	delete toDelete;
	
}

bool Linkedlist::retrieve(int data,Node* &outputptr){
	   	Node* temp=HEAD;
		while(temp!=NULL && temp-> info!=data){		
			temp=temp->next;
	}
	if (temp==NULL){
		return false;
	}
	else{
		outputptr=temp;
		return true;
	}
	
	}
int main()
{
	
	Linkedlist s;
	s.addToHead(8);
	s.addToHead(5);
	s.traverse();
	s.removefromHead();
	s.traverse();
	Node* p=new Node();
	bool found=s.retrieve(8,p);
	if (found)
	{
		s.add(4,p);
	}
	
}
