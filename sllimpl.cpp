#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int info;
	struct node *next;
} *start;
class sll
{
	public:
		node* create_nodde(int);
		void insert_begin();
		void insert_last();
		void insert_pos();
		void delete_last();
		void delete_begin();
		void delete_pos();
		void update_last();
		void update_begin();
		void update_pos();
		void sort();
		void reverse();
		void search();
		void display();
		sll()
		{
			start=NULL;
		}
		
};
int main()
{
	int choice;
	sll s1,s2;
	start=NULL;
	do
	{
		cout<<"----------------------------------"<<endl;
		cout<<"Operations on singly linked list"<<endl;
		cout<<"----------------------------------"<<endl;
		cout<<"1.Insert at First"<<endl;
		cout<<"2.Insert at Last"<<endl;
		cout<<"3.Insert at Position"<<endl;
		cout<<"4.Delete at First"<<endl;
		cout<<"5.Delete at Last"<<endl;
		cout<<"6.Delete at Position"<<endl;
		cout<<"7.Update at First"<<endl;
		cout<<"8.Update at Last"<<endl;
		cout<<"9.Update at Positions"<<endl;
		cout<<"10.Ascending Order"<<endl;
		cout<<"11.Descending Order"<<endl;
		cout<<"12.Search"<<endl;
		cout<<"13.Display"<<endl;
		cout<<"14.Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: s1.insert_begin();
				s1.display();
				break;
			case 2: s1.insert_last();
				s1.display();
				break;
			case 3: s1.insert_pos();
				s1.display();
				break;	
			case 4: s1.delete_begin();
				s1.display();
				break;	
			case 5: s1.delete_last();
				s1.display();
				break;	
			case 6: s1.delete_pos();
				s1.display();
				break;	
			case 7: s1.update_begin();
				s1.display();
				break;	
			case 8: s1.update_last();
				s1.display();
				break;
			case 9: s1.update_pos();
				s1.display();
				break;	
			case 10: s1.sort();
				s1.display();
				break;	
			case 11: s1.reverse();
				s1.display();
				break;	
			case 12: s1.search();
				s1.display();
				break;	
			case 13: s1.display();
				break;
			case 14: exit(0);
				break;	
		}
	}
	while(choice!=14);
		
}
node *sll::node create_node(int value)
{
	struct node *temp, *s;
	temp=new(struct node);
	if(temp==NULL)
	{
		cout<<"Memory not allocated"<<endl;
		return 0;
	}
	else
	{
		temp->info=value;
		temp->next=NULL;
		return temp;
	}
}
void sll::insert_begin()
{
	int value;
	cout<<"Enter the value to be inserted: "<<endl;
	cin>>value;
	struct node *temp,*s;
	temp=create_node(value);
	if(start==NULL)
	{
		start=temp;
		start->next=NULL;
		cout<<temp->info<<"is inserted in the empty list"<<endl;
	}
	else
	{
		s=start;
		start=temp;
		start->next=s;
		cout<<temp->info<<"is inserted at first"<<endl;
		
	}
}
void sll::insert_last()
{
	int value;
	cout<<"Enter the value to be inserted: ";
	cin>>value;
	struct node *temp, *s;
	temp=create_node(value);
	if(start==NULL)
	{
		start=temp;
		start->next=NULL;
		cout<<temp->info<<"is inserted in the empty list"<<endl;
	}
	else
	{
		s=start;
		while(s->next!=NULL)
		{
			s=s->next;
		}
		temp->next=NULL;
		s->next=temp;
		cout<<temp->info<<"is inserted at last"<<endl;
		
	}
	
	
}
void sll::insert_pos()
{
	int value,pos,counter=0,loc=1;
	struct node *temp, *s, *ptr ;
	s=start;
	while(s!=NULL)
	{
     	s=s->next;
		counter++;	
	}
	if(counter==0)
	{
	}
	else
	{
		cout<<"Enter the position from"<<loc<<"to"<<counter+1<<":";
		cin>>pos;
		s=start;
		if(pos==1)
		{
			cout<<"Enter the value to be inserted: ";
		 	cin>>value;
			temp=create_node(value);
			start=temp;
			start->next=s;
			cout<<temp->info<<"is inserted at first"<<endl;
			
		}
		else if(pos>1 && pos<=counter)
		{
			cout<<"Enter the value to be inserted: ";
		 	cin>>value;
			temp=create_node(value);
			for(int i=1; i<pos; i++)
			{
				ptr=s;
				s=s->next;
				
			}
			ptr->next=temp;
			temp->next=s;
			cout<<temp->info<<"is inserted at position"<<pos<<endl;
		}
		else if(pos==counter+1)
		{
			cout<<"Enter the value to be inserted: ";
		 	cin>>value;	
		 	temp=create_node(value);
		 	while(s->next!=NULL)
		 	{
		 		s=s->next;
		 		
			}
			temp->next=NULL;
			s->next=temp;
			cout<<temp->info<<"is inserted at last"<<endl;
		}
		else
		{
			cout<<"Position out of range...!"<<endl;
		}
	}
}
void sll::delete_begin()
{
	if(start==NULL)
	{
	}
	else 
	{
		struct node *s, *ptr ;
		s=start;
		start=s->next;
		cout<<s->info<<"deleted from first"<<endl;
		free(s);
	}
}
void sll::delete_last()
{
	int i, counter=0;
	struct node *s, *ptr ;
	if(start==NULL)
		{
		}
	else 
	{
		s=start;
		while(s!=NULL)
		{
			s=s->next;
			counter++;		
		}
		s=start;
		if(counter==1)
		{
			start=s->next;
			cout<<s->info<<"deleted from last"<<endl;
			free(s);
		}
		else
		{
			for(int i=1;i<counter;i++)
			{
				ptr=s;
				s=s->next;
			}
			ptr->next=s->next;
			cout<<s->info<<"deleted from last"<<endl;
			free(s);
		}
	}
}
void sll::delete_pos()
{
	int pos, i, counter=0, loc=1;
	struct node *s, *ptr ;
	s=start;
	while(s!=NULL)
		{
			s=s->next;
			counter++;		
		}
		if(counter==0)
		{
		}
		else
		{
			if(counter==1)
			{
				cout<<"Enter the position[SAY"<<loc<<"]:";
				cin>>pos;
				s=start;
				if(pos==1)
				{
				start=s->next;
				cout<<s->info<<"deleted from last"<<endl;
				free(s);	
				}
				else
				cout<<"Position out of range...!"<<endl;
				free(s);
			}
			else
			{
				cout<<"Enter the position from"<<loc<<"to"<<counter<<":";
				cin>>pos;
				s=start;
				if(pos==1)
				{
				start=s->next;
				cout<<s->info<<"deleted from first"<<endl;
				free(s);	
				}
				else if(pos>1 && pos<=counter)
				{
					for(i=1;i<pos;i++)
					{
						
					ptr=s;
					s=s->next;
					}
					ptr->next=s->next;
					if(pos==counter)
				{
				
				cout<<s->info<<"deleted from last"<<endl;
				free(s);
				}
				else
				{
					cout<<s->info<<"deleted from position"<<pos<<endl;
					free(s);
				}
				}
				else
				cout<<"Position out of range...! "<<endl;
			}
		}
}
void sll::update_begin()
{
	
	int pos=1, value, i, counter=0;
	struct node *s, *ptr ;
	s=start;
	while(s!=NULL)
		{
			s=s->next;
			counter++;		
		}
		if(counter==0)
		{
		}
		else if(pos==1)
		{
			cout<<"Enter the new node:";
			cin>>value;
			start->info=value;
			cout<<"Node updated at first position:"<<pos<<"="<<start->info<<endl;
		
		}
}
void sll::update_last()
{
	int pos, value, i, counter=0;
	struct node *s, *ptr ;
	s=start;
	while(s!=NULL)
		{
			s=s->next;
			counter++;		
		}
		s=start;
			if(counter==0)
		{
		}
		else
		{
			cout<<"Enter the new node: ";
			cin>>value;
			for(i=1;i<counter;i++)
			{
				s=s->next;
			}
			s->info=value;
			cout<<"Node updated at last position:"<<counter<<"="<<s->info<<endl;
			
		
		}
}
void sll::update_pos()
{
	int value,pos,i,counter=0,loc=1;
	struct node *s, *ptr ;
	s=start;
	while(s!=NULL)
		{
			s=s->next;
			counter++;		
		}
		if(counter==0)
		{
		}
		else
		{
			if(counter==1)
			{
				cout<<"Enter the position[SAY"<<loc<<"]:";
				cin>>pos;
				s=start;
				if(pos==1)
				{
					cout<<"Enter the new node: ";
					cin>>value;
					start->info=value;
					cout<<"Node updated at position:"<<pos<<"="<<start->info<<endl;
					
			
				}
				else
				{
				 	cout<<"Position out of range...!"<<endl;
				}
			}
			else
			{
				cout<<"Enter the position from"<<loc<<"to"<<counter<<":";
				cin>>pos;
				s=start;
				if(pos==1)
				{
					cout<<"Enter the new node: ";
					cin>>value;
					start->info=value;
					cout<<"Node updated at position:"<<pos<<"="<<start->info<<endl;
					
				}
					else if(pos>1 && pos<=counter)
					{
						cout<<"Enter the new node: ";
						cin>>value;
						for(i=1;i<pos;i++)
						{
						s=s->next;	
						}
							s->info=value;
							cout<<"Node updated at position:"<<pos<<"="<<s->info<<endl;
							
					
					}
					else
					cout<<"Position out of range...!"<<endl;
					
			}
		}
		
}
void sll::sort()
	{
		struct node *s, *ptr ;
		int value;
		if(start==NULL)
		{
		}
		else
		{
			ptr=start;
			while(ptr!=NULL)
			{
				for(s=ptr->next;s!=NULL;s=s->next)
				{
					if(ptr->info>s->info)
					{
						value=ptr->info;
						ptr->info=s->info;
						s->info=value;
					}
				}
				ptr=ptr->next;
				
			}
		}
	}
void sll::reverse()
{
	struct node *s, *ptr ;
		int value;
		if(start==NULL)
		{
		}
		else
		{
			ptr=start;
			while(ptr!=NULL)
			{
				for(s=ptr->next;s!=NULL;s=s->next)
				{
					if(ptr->info<s->info)
					{
						value=ptr->info;
						ptr->info=s->info;
						s->info=value;
					}
				}
				ptr=ptr->next;
           }
		}
}
void sll::search()
{
	int value, loc=0; pos=0, counter=0;
	struct node *s;
	s=start;
	while(s!=NULL)
	{
		s=s->next;	
		counter++;
	}
	if(start==NULL)
	{
	}
	else
	{
	
	cout<<"Enter the value to be searched: ";
	cin>>value;
	struct node *s;
	s=start;
	while(s!=NULL)
	{
		pos++;
		if(s->info==value)
		{
			loc++;
			if(loc==1)
			cout<<"Element"<<value<<"is found at position"<<pos;
			else if(loc<=counter)
			
			cout<<" , "<<pos;
		}
	s=s->next;
	}
	cout<<endl;
	if(loc==0)
	cout<<"Element"<<value<<"is not found in the list"<<endl;
}
	
}
void sll::display()
{
	struct node *temp;
	if(start==NULL)
	cout<<"Linked list is empty...!"<<endl;
	else
	{
		cout<<"Linked list contains:";
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->info<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}
	


