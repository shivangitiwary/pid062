#include <stdio.h>
void intro();
int check();
void login();
void foo();

int main(){
	int choice,a;
	printf("1)\t home\n");
	printf("2)\t login\n");
	printf("3)\t register\n");
	printf("4)\t about us\n");
	printf("5)\t contact us\n");	
	for(a=0;a<100;a++){
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1){
		intro();
	}
	if(choice==2){
		check();
		}
	if(choice==3){
		login();
	
	}
	if(choice==4){
		foo();
		printf("In current situation while doing official work, sometime employee passes Employees as a human being faces\nso many problems related to social,educational, health and so on.\nSo there is a requirement of system which allows Group communication and sharing of information among the employees to help out one another\nand thus by increase in the happiness index of the employees and it will reflect automatically in his official work.\nOur System provides an effective way of communication and information sharing among the employees.\nwhich increases the happiness index of the employees and thereby increasing their efficiency at work environment and\nobjective of better service to public can be achieved easily\n");
		
		printf("*******************************************************************");
	}
	if(choice==5){
printf("Welcome to the Employee Happiness and Welfare System! \nWe are here to help you create a better work environment for you and your employees. \nIf you have any questions or comments, please contact us. \nEmail us at info@employeehappiness.com. \nCall us at 1-800-555-1234. \nWe look forward to hearing from you!\n");
		printf("*******************************************************************");
	}
	printf("\n");
}
	
	return 0;
}

int check()
{
	char user[7];
	int value,upwd, pwd=123456;
	printf("\nUsername: ");
	scanf("%s",&user);
	printf("Password: ");
	scanf("%d",&upwd);
	value=strcmp(user,"shivangi");
	if(value==0 && upwd==pwd)
	{
		printf("*******************************************************************\n");
		login();

	}
}
void login()
{
	char n[20],s[10],d[15],mob[15],e[20],id,c[15],design[15];
	printf("\nLogin\n\n");
	printf("Name:\t");
	scanf("%s",&n);
	printf("City:\t");
	scanf("%s",&c);
	printf("Mobile No.:\t");
	scanf("%s",&mob);
	printf("department:\t");
	scanf("%s",&d);
	printf("email:\t");
	scanf("%s",&e);
	printf("id no.:\t");
	scanf("%d",&id);
	printf("designation:\t");
	scanf("%s",&design);
	printf("\nDetails Entered Successfully!\n");
		printf("*******************************************************************\n");
}
void intro()
{
	printf("     	Employee Happpiness and Welfare System       \n");
	printf("	 Project By- Shivangi Tiwary       \n");
	printf("		Enr No.- CS47          \n");
	printf("           *****************************         ");
}

void foo(){

printf("Welcome to the Employee Happiness and Welfare System!\n We are committed to providing a comprehensive system to help improve employee morale and satisfaction. By providing a platform for employees to track and manage their happiness and welfare, we strive to create a healthy and productive work environment. Our system allows employees to easily track their happiness and welfare, as well as access resources to improve their overall well-being. We also provide tools such as surveys, forums, and activities to help employees engage and connect with each other. We are dedicated to helping employees find the balance between work and personal life and providing the support they need to be successful. Thank you for choosing us to help you make your workplace a better place \n");
}

