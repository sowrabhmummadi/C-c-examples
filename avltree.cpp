//============================================================================
// Name        : avltree.cpp
// Author      : Sowrabh,Susheel..
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<conio.h>
using namespace std;


struct rec
	{
		int  data;
		int bf;
	    rec * left,*right;
    };
typedef struct rec node;
/*class stack
  {
	int i;
     node* r[20];
     void push(node *p)
     {
    	 r[i]->*p;
    	 i++;
     }
     node* pop()
     {
    	 node *q=r[i];
    	 r[i]=NULL;
    	 i--;
    	 return q;
     }
  };*/

class avl//: public stack
{
   public:
      node *root;node *temp1;
      avl()
        {
         root=NULL;
         root->bf=0;
        }

      void insert(int n)
         {

           int k,count=0;
           node * temp=root,*prev;
           if(root==NULL)
             {
               root=new node();
               root->data=n;
               root->bf=0;
             }
          else
             {
               while(temp)
                  {
            	   count++;
                   if(temp->data>n)
                     {
                       prev=temp;
                       temp=temp->left;
                       prev->bf+=1;
                       if(prev->bf <1 || prev->bf <-1)
                    	  temp1=prev;
                      }
                  else
                     {

                     prev=temp;
                     temp=temp->right;
                     prev->bf-=1;
                     if(prev->bf <1 || prev->bf <-1)
                    	 temp1=prev;
                    }
                   }
             temp=new node();

             if(prev->data<n)
             {

                temp->data=n;
                temp->bf=0;
                prev->right=temp;
                }
             else
               {
                temp->data=n;
                temp->bf=0;
                prev->left=temp;
               }
  }
}
void Rotation()
  {
	if(temp1->bf==2)
	{

	}
	else if(temp1->bf==-2)
	{

	}
  }
void ll(node *temp)
{

  }


void lr(node *temp)
  {

  }
};







