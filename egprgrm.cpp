#include<iostream>
using namespace std;
struct Node{
int value;
struct Node *next;
};
struct Node* head = NULL;
struct Node* sHead = NULL;
struct Node* temp = NULL;
void insert(int new_data){
struct Node* new_node = new Node(); 
new_node->value = new_data;
new_node->next = head;
head = new_node;
}
int n;
int ele;

int main(){
int i;
cout<<"Enter number of elements you want in the list\t";
cin>>n;
cout<<"Enter elements :" <<endl;
for(i=0;i<n;i++){
cin>>ele;
insert(ele);
}
cout<<"\nList of elements : "<<endl;
Node *t;
t = head;
while(t != NULL){
cout<<t->value<<"\t";
t = t->next;
}
}

