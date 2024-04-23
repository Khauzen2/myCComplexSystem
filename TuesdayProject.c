#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_SIZE 50
#define SURNAME_SIZE 50
#define COMPANY_SIZE 50
#define OCCUPATION_SIZE 50
#define BANK_NAME 50
#define ACCOUNT_SIZE 20
#define ACCOUNTHOLDER_SIZE 50
#define ACCOUNT_TYPE_SIZE 20
#define CARD_SIZE 20
#define PHONENO_SIZE 10
#define FATHER_SIZE 50
#define MOTHER_SIZE 50
#define BROTHER_SIZE 50
#define SISTER_SIZE 50
#define SOCIAL_NAME_SIZE 50
#define FRIENDS_SIZE 20
#define SOCIAL_MEDIA_SIZE 50
#define BUSINESS_SIZE 50
#define BUSINESS_OWNER_SIZE 50
#define BUSINESS_MAJOR_SIZE 50
#define FILE_SIZE 500
#define FILE_NAME "InfoFile.txt"

struct personalInfo {
	char phoneNo[PHONENO_SIZE];
	char name[NAME_SIZE];
	char surname[SURNAME_SIZE];
	int age;
};

struct employmentDetails {
	char company[COMPANY_SIZE];
	char occupation[OCCUPATION_SIZE];
	float salary;
};

struct bankingDetails {
	char bankName[BANK_NAME];
	char accountNumber[ACCOUNT_SIZE];
	char accountHolder[ACCOUNTHOLDER_SIZE];
	char accountType[ACCOUNT_TYPE_SIZE];
	char cardNumber[CARD_SIZE];
};

struct familyDetails {
	char fatherName[FATHER_SIZE];
	char motherName[MOTHER_SIZE];
	char brotherName[BROTHER_SIZE];
	char sisterName[SISTER_SIZE];
};

struct socialDetails {
	char socialName[SOCIAL_NAME_SIZE];
	char friends[FRIENDS_SIZE];
	char socialMedia[SOCIAL_MEDIA_SIZE];
};

struct businessInfo {
	char businessName[BUSINESS_SIZE];
	char businessOwner[BUSINESS_OWNER_SIZE];
	char businessMajor[BUSINESS_MAJOR_SIZE];
};

float percent(float num, float tot)
{
	float result; 
	return result = num/tot*100;
}


int main(void) {
	FILE* fp;
	int Age;
	int opt;
	char Name[50], Surname[50], CompanyName[50], Occupation[50], Company[50], PhoneNo[10], BankName[50], AccountNumber[10], AccountType[20];
	char AccountHolder[50], CardNumber[20], filename[50];
	char FatherName[FATHER_SIZE];
	char MotherName[MOTHER_SIZE];
	char BrotherName[BROTHER_SIZE];
	char SisterName[SISTER_SIZE];
	char SocialName[SOCIAL_NAME_SIZE];
	char Friends[FRIENDS_SIZE];
	char SocialMedia[SOCIAL_MEDIA_SIZE];
	char BusinessName[BUSINESS_SIZE];
	char BusinessOwner[BUSINESS_OWNER_SIZE];
	char BusinessMajor[BUSINESS_MAJOR_SIZE];  
	float Salary;
	struct personalInfo perInfo;
	struct employmentDetails empDet;
	struct bankingDetails banDet;
	struct familyDetails famDet;
	struct socialDetails socDet;
	struct businessInfo busInfo;
	float score = 0.00, totalToNextLevel = 60.00, totalInfo = 100.00;
	
	for(;;) 
	{
		system("cls");
		printf("Welcome to this complicated system that i think works but not so sure!!!\n");
		printf("\n\nPlease select from the menu\n");
		printf("To Enter Personal Information Press      - 1\n");
		printf("To Enter Employment Information Press    - 2\n");
		printf("To Enter Banking Information Press       - 3\n");
		printf("To Enter Family Information Press        - 4\n");
		printf("To Enter Social Information Press        - 5\n");
		printf("To Enter Business Information Press      - 6\n");
		printf("To Print Information Press               - 7\n");
		printf("To Exit Press                            - 8\n");
		scanf("%d", &opt);
		if(opt == 1)
		{
			system("cls");
			printf("Enter your phone number:\n");
			scanf("%s", perInfo.phoneNo);
			printf("Enter your name:\n");
			scanf("%s", perInfo.name);
			printf("Enter your surname:\n");
			scanf("%s", perInfo.surname);
			printf("Enter your age:\n");
			scanf("%d", &perInfo.age);
			score+=10;
			strcpy(filename,perInfo.name);
			fp=fopen(strcat(filename, ".txt"), "a+");
			fwrite(&perInfo,sizeof(struct personalInfo),1,fp);
			if(fwrite != 0)
			{
				printf("Score is %.2f\nThank you for your info\nPlease progress to the next level.", percent(score, totalToNextLevel));
				getch();
			}else{
				printf("Sorry something went wrong!!!");
				getch();
			}
			fprintf(fp, "\n\nYour info is as follows\n\n");
			fprintf(fp, "Phone number\t: %s\n", perInfo.phoneNo);
			fprintf(fp, "Name\t\t\t: %s\n", perInfo.name);
			fprintf(fp, "Surname\t\t\t:%s\n", perInfo.surname);
			fprintf(fp, "Age\t\t\t\t: %d\n", perInfo.age);
			fprintf(fp, "Date and Time\t: %s,%s", __DATE__,__TIME__);
			fclose(fp);
		}
		else if(opt==2) {
			system("cls");
			printf("Enter your company name:\n");
			scanf("%s", Company);
			printf("Enter your occupation:\n");
			scanf("%s", Occupation);
			printf("Enter your salary amount:\n");
			scanf("%f", &Salary);
			score+=10;
			printf("Score is %.2f\nThank you for your info\nPlease progress to the next level.", percent(score, totalToNextLevel));
			getch();	
		}
		else if(opt==3)
		{
			system("cls");
			printf("Enter bank name:\n");
			scanf("%s", BankName);
			printf("Enter your account number:\n");
			scanf("%s", AccountNumber);
			printf("Enter account holder:\n");
			scanf("%s", AccountHolder);
			printf("Enter account type:(Cheque/Savings)\n");
			scanf("%s", AccountType);
			printf("Enter your card number:\n");
			scanf("%s", CardNumber);
			score+=10;
			printf("Score is %.2f\nThank you for your info\nPlease progress to the next level.", percent(score, totalToNextLevel));
			getch();
		}
		else if(opt==4)
		{
			system("cls");
			printf("Enter name of father:\n");
			scanf("%s", FatherName);
			printf("Enter name of mother:\n");
			scanf("%s", MotherName);
			printf("Enter name of brother:\n");
			scanf("%s", BrotherName);
			printf("Enter name of sister:\n");
			scanf("%s", SisterName);
			score+=10;
			printf("Score is %.2f\nThank you for your info\nPlease progress to the next level.", percent(score, totalToNextLevel));
			getch();
		}
		else if(opt==5)
		{
			system("cls");
			printf("Enter your social name:\n");
			scanf("%s", SocialName);
			printf("Enter your friend's name:\n");
			scanf("%s", Friends);
			printf("Enter your social media:\n");
			scanf("%s", SocialMedia);
			score+=10;
			printf("Score is %.2f\nThank you for your info\nPlease progress to the next level.", percent(score, totalToNextLevel));
			getch();
		}
		else if(opt==6)
		{
			system("cls");
			printf("Enter name of your business:\n");
			scanf("%s", BusinessName);
			printf("Enter owner of business:\n");
			scanf("%s", BusinessOwner);
			printf("Enter major of business:\n");
			scanf("%s", BusinessMajor);
			score+=10;
			printf("Score is %.2f\nThank you for your info\nPlease progress to the next level.", percent(score, totalToNextLevel));
			getch();
		}
		else if(opt == 7)
		{
			system("cls");
			FILE *fp;
			fp=fopen("InfoFile.txt", "a+"); 
			printf("Your information is as follows\n\n");
			printf("Phone Number:\t%s\n", perInfo.phoneNo);
			printf("Name:\t%s\n", perInfo.name);
			printf("Surname:\t%s\n", perInfo.surname);
			printf("Age:\t%d\n",perInfo.age);
			fclose(fp);
		}
		else if(opt==8)
		{
			printf("Thank you for using the system...See you later\n");
			exit(0);
		}
		else 
		{
			printf("Invalid Input...Please try again!!!");
			getch();
		}
		if(percent(score, totalToNextLevel) == 100)
		{
			system("cls");
			printf("\n\n\n\t\t\tCONGRATULATIONS AND CELEBRATIONS!!!\n");
			printf("\n\t\t\tNow let the games begin...\nQuick 4 quizes to see if you will qualify for the next round.\n\n");
			printf("\t\t\tFirst Quiz!!\n\nWhat is the name of the programmer?\n");
			scanf("%s", Name);
			if(strcmp(Name,perInfo.name))
			{
				printf("Correct!!!");
				score+=10;
				getch();
			}
			else
			{
				printf("Nope!!! but you get a score for trying.\n");
				score+=5;
				getch();
			}
			system("cls");
			printf("\n\t\t\tSecond Quiz!!\nWhere does the programmer work (Company name)?\n");
			scanf("%s", CompanyName);
			if(strcpy(empDet.company, CompanyName))
			{
				printf("Got it...yeeey!!!More points for you!!!\n");
				score+=10;
				getch();
			}
			else
			{
				printf("Oops you got it wrong but you get points for trying!!\n");
				score+=5;
				getch();
			}
			system("cls");
			printf("\n\t\t\tThird Quiz!!\nWho was the father of the programmer?\n");
			scanf("%s", FatherName);
			if(strcpy(famDet.fatherName, FatherName))
			{
				printf("Correct!!!\n");
				score+=10;
				getch();
			}
			else
			{
				printf("Sorry...Got it wrong again but with points for trying!!!");
				score+=5;
			}
			system("cls");
			printf("Fourth Quiz!!\nWhat is your social media?\n");
			scanf("%s", SocialMedia);
			if(strcpy(socDet.socialMedia, SocialMedia))
			{
				printf("Correct!!!\n");
				score+=10;
				getch();
			}
			else
			{
				printf("Sorry you only got the name but you get points still.!!\n");
				score+=5;
				getch();
			}
			
			if(score == 100)
			{
				printf("CONGRATUALTIONS YOU HAVE MADE IT TO THE END!!!");
			}
			if(score >= 60)
			{
				printf("Congratulation you have passed the half mark...you win something atleast!!!");
			}
			
		}
		
		printf("\n\n\n\n\nProgress is %.2f over %.2f.\n", percent(score, totalInfo), totalInfo);
	    getch();
	}
	
	
	
	return 0;
}
