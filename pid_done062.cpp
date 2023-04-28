#include<iostream>
#include<string.h>
using namespace std;
class registerform {
	protected:
		string name;
		int contact;
		string department;
		string designation;
		string mail;
		string bg;
		string username;
		int pass;
	public:

		int i,data;
		
			
		void getdata() {
			
				cout<<"name:";
				cin>>name;
				cout<<"contact:";
				cin>>contact;
				cout<<"E-mail:";
				cin>>mail;
				cout<<"designation:";
				cin>>designation;
				cout<<"department:";
				cin>>department;
				cout<<"blood group:";
				cin>>bg;
				cout<<"username:";
				cin>>username;
				cout<<"password:";
				cin>>pass;
			
		}

		void display() {
			cout<<"name:"<<name<<endl;
			cout<<"contact:"<<contact<<endl;
			cout<<"E-mail:"<<mail<<endl;
			cout<<"designation:"<<designation<<endl;
			cout<<"department:"<<department<<endl;
			cout<<"blood group:"<<bg<<endl;
			cout<<"username:"<<username<<endl;
		
		}
		friend class login;
};


class info
{
	public:
		
		void about_us()
		{
			cout<<"about us"<<endl;
			cout<<"In current situation while doing official work, sometime employee passes"<<endl;
			cout<<"through depression and anxiety due to heavy work load"<<endl;
			cout<<"Employees as a human being faces so many problems related to social,"<<endl;
			cout<<"educational, health and so on. So there is a requirement of system which"<<endl;
			cout<<"allows Group communication and sharing of information among the"<<endl;
			cout<<"employees to help out one another and thus by increase in the happiness"<<endl;
			cout<<"index of the employees and it will reflect automatically"<<endl;
			cout<<"in his official work."<<endl;
			
		}
		
		void contact_us()
		{
			cout<<"contact us :)"<<endl;
			cout<<"mail:shivangitiwary@gnu.ac.in"<<endl;
			cout<<"contact no:1234567890";
		}
};


class search:public registerform,public info
 {
	public:
		
		void searching(int s,string s1) {
			
	
				if((s1.compare(bg))==0) {
					display();
				}

		

			}
			void searching(int s,int s2) {
			
	
				if(contact==s2) {
					display();
				}

		

			}
			
			
			
		
};





int main() {

	int input,counter=0;
	cout<<"enter no. of data u want to input:";
	cin>>input;

	search obj[input];
	//search  obj2;
	int page,pg1=7,fr;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"	*				Welcome to our project						  *  "<<endl;
	cout<<"	*		Project:Emplloyee Happiness And Welfare System     	  *  "<<endl;
	cout<<"	*				  project id:PID 062                       	  *  "<<endl;
	cout<<"	*			         developed by--                           *  "<<endl;
	cout<<" *       	 		shivangi Tiwary                           *"<<endl;
	cout<<"	*					   Thank you                              *  "<<endl;
	cout<<"----------------------------------------------------------------"<<endl;

	cout<<"enter <1> to visit out website"<<endl;
	cin>>page;
	if (page==1) {
		while(pg1!=6) {
			//
			cout<<"welcome to our homepage"<<endl;
			cout<<"enter <1> for creating new acc"<<endl;
			cout<<"enter <2> for searching "<<endl;
			cout<<"enter <3> for about us"<<endl;
			cout<<"enter <4> for contact us"<<endl;
			cout<<"Enter <5> for displaying all the records"<<endl;
			cout<<"Enter <6> for exiting the program:";
			cin>>pg1;
			system("cls");
			if(pg1==1) {
				system("cls");
				//new acc;registration form
				if(counter<input)
				{
				obj[counter].getdata();
				counter++;
				}
				else{
					cout<<"Maximum Limit reached!";
				}
			} 
			
			else if(pg1==2) {
				system("cls");
				int s,s2;
				string s1;
				cout<<"enter <1> to search by bloodgroup:"<<endl;
				cout<<"enter <2> to search by contact number:"<<endl;
				cin>>s;
				if(s==1)
				{	
					cout<<"Enter required bloodgroup:";
					cin>>s1;int i;
					for(i=0;i<counter;i++)
					{
					obj[i].searching(s,s1);
					}
				}
				else{
					cout<<"Enter contact number:";
					cin>>s2;
					for(int i=0;i<counter;i++)
					{
						obj[i].searching(s,s2);
					}
				}
				
			} 
			
			else if(pg1==3) {
				//abt us
				system("cls");
				obj[0].about_us();
				
			} 
			
			else if(pg1==4) {
				//contact us
				system("cls");
				obj[0].contact_us();
				
			}
			//display
			
			else if(pg1==5)
			{
				cout<<counter;
				for(int i=0;i<counter;i++)
				{
					obj[i].display();
				}
			}
		}
	} 
	else {
		system("cls");
		cout<<"thank you"<<endl;
	}
	return 0;
}
