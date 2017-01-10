//============================================================================
// Name        : binaryST.cpp
// Author      : Sowrabh,Susheel...
// Copyright   : Your copyright notice
// Description : Binary Search tree in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
 struct rec
	{
		int  sid;
		char name[20] ;
		int  Class;
		rec *left,* right;
	} *root=NULL,*r,*p;

class StuGrading
 {

   public:
	  rec* recINF()
	      {
		     rec *r =new rec;
		   	  cout<<"\n enter your StudentId";
		  	  cin>>r->sid;
		      cout<<"\n enter your Name";
		  	  cin>>r->name;
		  	  cout<<"\n enter your Class";
		  	  cin>>r->Class;
		  	  r->left= NULL;
		  	  r->right=NULL;
		  	  return r;
	      }
	  void insert()
	      {
		  r=recINF();
		   rec *q;
		  if(root==NULL)
		      {
		 			 	 root=r;
		 		    	 cout<<"node inserted\n"<<endl;
		 		    	 q=root;
		 	  }
		  else{
		       while (root!= NULL)
		        {

		          if(r->sid < root->sid)
		             root=root->left;
		          else if(r->sid > root->sid)
		             root=root->right;
		        }
			   	   root=r;
		    	   cout<<"node inserted\n"<<endl;
		    	   q=root;
		     }


		  // cout<<"node inserted"<<endl;
		   root=q;
	      }
	  void display()
	  {
		 int id;
		 char pswd[3];
		 cout<<"\n enter your studentID"<<endl;
		 cin>>id;
		 cout<<"\n enter your password";
		 cin>> pswd;
		 search(id,pswd);
	  }
	void search(int id,char* pswd)
	  {

		  struct rec *p = root;
		  while(p!=NULL)
		  {
			     if(p->sid ==id)
				      {

			    	    if(check (pswd,p))
		                {
		                	cout<<"node found\n";break;
		                }
		                else
		                {
		                cout<<"invalid password\n";break;}
				      }

				  else{
				       while (p!= NULL)
				        {

				          if(id < p->sid)
				             p=p->left;
				          else if(id > p->sid)
				             p=p->right;
				          else
				        	  break;
				        }

	                  }
		  }
	  }
	 int check(char *pswd,rec *r)
	    {
		  char pc[3];
	      int x=(r->sid)/100;
		  pc[0]='0'+x;
		  pc[1]=r->name[0];
		  pc[2]='0'+r->Class;
		  if(*pswd==*pc)
			  return 1;
		  return 0;
	    }

};
int main(){

	int ch;
	       StuGrading s;
	       while(1)
	       {
	       cout<<"enter your choice :-"<<endl<<"***********************************************";
	       cout<<"\n 1.insert \n 2.display \n 3.exit \n ";
	       cin>>ch;
	       switch(ch)
	         {
	           case 1:
	        	   s.insert();break;
	           case 2:
	        	   s.display();break;
	           case 3:
	        	   return 0;
	           default :
	        	   cout<<"invalid choice";
	         }
	       }
	       getch();
		   return 0;
  }
