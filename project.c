 #include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct address {
	int homeno;
	char city[20];
	char state[20];
	};
	
struct patient {
	char name[30];
	int age;
	int gender;
	struct address b;
	char hist[200];
	char disease[50];
	char treatment[40];
	};
	
struct staff {
	char name[40];
	int age;
	char bg[3];
	char gender;
	char uid[10];
	struct address a;
	char qualification[20];
	double salary;
	};
               



void emp(void);
void menu(void);
void pat(void);
void inv(void);
void about(void);


// MAIN MENU FUNCTION
void menu()
{
	char ch;
	printf("/t ******** WELCOME TO HOSPITAL MANAGEMENT *********");
	printf("\n\n \n \n \n");
	
	printf("\t\t1.PATIENT");
      printf("\n\t\t2.STAFF");
     printf("\n\t\t3.EXIT");
     printf("enter choice");
     scanf("%s",ch);
     
		switch(ch) {
     			case 1:
     				pat();
     				break;
     			case 2:
     				staff();
     				break;
     			case 3:
     				break;
     				}
     				}
     	void main()
{
                menu();
}

/* MODULE  1 */
/* PATIENT */

void pat()
{
                FILE *fp,*ft;
                char another,ch;
                char reg[20],pname[40];
                int iF=0;
                long int recsize;
                struct patient p;

                fp=fopen("pat.DAT","rb+");
                if(fp==NULL)
                {
                                fp=fopen("pat.DAT","wb+");
                                if(fp==NULL)
                                {
                                                puts("\nSorry!! Cannot open file");
                                                exit(1);
                                }
                }
}
     


