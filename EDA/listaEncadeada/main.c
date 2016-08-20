#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(x) (x *) malloc ( sizeof(x) )

// #typedef struct no NO;

struct no {//node is each element in list
	int info;
	struct no *previous;//indicate previous element;
	struct no *next;//indicate next element;
};

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

void printList ( void )
{
   struct no *current = first;

   while ( current )
   {
      printf ( "Info:  %.2d\n", current->info );
      current = current->next;
   }
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

void clear( struct no *data )
{
	if(!data) return;

	//intermediate node
	if(data->next && data->previous)
	{
		data->previous->next = data->next;
		data->next->previous = data->previous;

		free ( data );
		return ;
	}

	//first node
	if(data == first)
	{
		first = data->next;
		first->previous = NULL;

		free( data );
		return;
	}

	//end node
	if(data == end)
	{
		end = data->previous;
		end->next = NULL;

		free(data);
		return;
	}
}

int main ( void )
{
   register int i;
   first = end = NULL;

   for ( i = 1; i <= 10; i++ )
      insert(i); // case 3 - insert at end...

   printList(); puts ("");


   insert (0);  // case 1
   insert (12); // case 3
   insert (11); // case 2

   printList (); puts ("");

   // search function test
   printf ("search( 3 ): %.2d\n\n", search(3)->info );

   clear ( search ( 0) ); // case 1
   clear ( search ( 5) ); // case 2
   clear ( search (12) ); // case 3

   printList(); puts ("");

   return 0;
}
