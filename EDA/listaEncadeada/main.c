#include <stdio.h>
#include <stdlib.h>

#define MALLOC(x) (x *) malloc ( sizeof(x) )

struct Node{//node is each element in list  
	int info;
	struct Node *previous;//indicate previous element;
	struct Node *next;//indicate next element;
}no;
// declaring pointers of control;
struct no *first;
struct no *end; 

void insert( int info )
{
	struct no *new = MALLOC(struct no);
	struct no *current;
	
	if(!new)
	{
		perror("Malloc: ");
		return;
	}
	
	//assignment new value
	new->info = info;

	//there is not elements in list
	if(!first)
	{
		new->previous = NULL;
		new->next = NULL;

		first = new;
		end = new;
		
		return;
	}

	//if isn't first element in list
	//insert cases
	current = first;

	while(current)
	{
		if(current->info < info)//ordering list to be growing
		{
			current = current->next;
		}else
		{
			if(current->previous)//se não for o primeiro da lista
			{
				new->next = current;//the new node indicate to current node
				new->previous = current->previous;//the new node will be inserted before the current node;
				current->previous->next = new;//the node that will indicate the new node;
				current->previous = new;

				return;
			}else
			{
				//if the current is the first node;
				new->next = current;
				new->previous = NULL;
				current->previous = new;
				first = new;
				
				return;
			}
		}
	}
	end->next = new;//the last node indicate the new node
	new->next = NULL;//Add the new element at end of list
	new->previous = end;//the new node has as previous node the last node of list;
	end = new;//indicate the new node

		return;

}

struct no *search ( int info )
{
   struct no *current = first;
        
   while ( current )
   {
      if ( current->info == info)
         return current;
      else
         current = current->next;
   }
   return NULL;
} 
