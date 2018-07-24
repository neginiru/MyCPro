/*				###########    	MyCpro	 #########
This project is  is submitted in the partial fulfillment of MCA 1st-Sem Mini Project in c,
				 Under DCSA, Panjab University,
					Chandigarh
Submitted By:Nirupama
Roll no:	24
		MCA 1st Sem
	
*/ 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int rev();
void prompt();

void main()
{
       FILE *fp1,*fp2;						//for part2
       char c1,c2,file1[10],file2[10];
						 

	int x,y,count=0,i,j,count1=0,count2=0,len=0,part;			//for part 1
	char str1[10],str2[10],p;
clrscr();

printf("\n\n\t\t*****************  Welcome to MyCpro  *******************\n");
printf("\t\t------------------------------------------------");
printf("\t\tMyCpro Has Two part..\n1.Part 1:String Handling\n2.Part 2:File Handling\n3.Exit..\n ");
printf("\t\t------------------------------------------------");
printf ("\t\tEnter the Part you want vist first...\t");
scanf("%d",&part);
switch(part)
{
case 1:
	  printf("\t\t************* Welcome to Mini Project  **************\n");
	  printf("\t\t=====================================================\n");
printf("-------------------------------------------------------------------------");
printf("\nThis part work on string Handling (Without Using String handling Function)");
printf("-------------------------------------------------------------------------") ;
while(1)
{
	printf("\t\t\t\t\n1.Length\t\t2.concat\n3.Compare\t\t4.Append\n5.Delete\t\t6.Change case\n7.Trimming\t\t8.Reversing\n\t0.Exit....\n ");
	printf("\n\t\t\tEnter your choice...\t");
	scanf("%d",&x);


switch(x)
{
case 1: prompt();
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
	len++;
	}
	printf("\nLength of string Entered is:%d",len);
	break;
case 2:
	printf("Enter string1 to concat ");
	scanf("%s",&str1);
	printf("Enter string2 to concat ");
	scanf("%s",&str2);
	for(i=0;str1[i]!='\0';i++)
	count++;
	for(i=0;str2[i]!='\0';i++)
	count2++;
	for(j=count,i=0;str2[i]!='\0';j++,i++)
	str1[j]=str2[i];
	for(i=0;i<(count+count2);i++)
	printf("%c",str1[i]);
	break;
case 3:
	printf("Enter strings to compare ");
	scanf("%s",str1);
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++)
	count++;
	for(j=0;str2[j]!='\0';j++)
	count1++;
	if(count==count1)
	printf("Both string are equal");
	else if(count>count1)
	printf("string1 is greater than String2");
	else
	printf("String is greater");
	break;
case 4:prompt();                               //Append
	scanf("%s",str1);
	 printf("Enter string to append with given string..\n ");
	scanf("%s",&str2);
	for(i=0;str1[i]!='\0';i++)
	count++;
	for(i=0;str2[i]!='\0';i++)
	count2++;
	for(j=count,i=0;str2[i]!='\0';j++,i++)
	str1[j]=str2[i];
	for(i=0;i<(count+count2);i++)
	printf("%c",str1[i]);
	break;

case 5: prompt();                              //delete
       scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
	  len++;
	}
       printf("\nEnter position\n ");
       scanf("%d",&x);

       for(i=x-1;i<=len;i++)
       str1[i]=str1[i+1];

       str1[i]='\0';

       for(i=0;i<=len;i++)
       printf("%c",str1[i]);
       break;



case 6:	prompt();                              //case change
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
	if(str1[i]>=97 && str1[i]<=122)
	printf("%c",str1[i]-32);
	if(str1[i]>=65&&str1[i]<=97)
	printf("%c",str1[i]+32);
	}
	break;
case 7:prompt();                                     //trimming
	scanf("%s",str1);
	printf("\nEnter position for trimming\n");
	scanf("%d",&x);
	y=strlen(str1);
	if(x>y)
	printf("\nstring is already short\n");
	else
	{
	str1[x]='\0';
	printf("String After trimming\t");
	for(i=0;str1[i]!='\0';i++)
	printf("%c",str1[i]);
	}
	break;
case 8:
	prompt();                                         //reverse
	scanf("%s",str1);
	rev(str1);
	break;
case 0:exit(0);
default: printf("Enter valid choice");
}


case 2:
printf("\t\t*************** Welcome to Mini Project *************\n ")  ;
printf("\t\t=====================================================\n");
printf("-------------------------------------------------------------------------");
printf("\tThis part work on File Handling (Comparing Two Files)\n");
printf("-------------------------------------------------------------------------") ;

printf("\nEnter File1...\t ");
scanf("%s",file1);

printf("\nEnter File2...\t");
scanf("%s",file2);


	fp1=fopen(file1,"r");
	fp2=fopen(file2,"r");

	if(fp1==NULL &&  fp2==NULL)
	{
	printf("File not found");
	}
	else
	{
		

	while( (c1=getc(fp1)!=EOF) && (c2=getc(fp2)!=EOF) )
	{
		c1=getc(fp1);
		c2=getc(fp2);

		if(c1!=c2)
		{
		printf("File not same");
		break;
		}
		else
		printf("File same");
		}
	}	
	fclose(fp1);
	fclose(fp2);
    break;
case 3: printf("Thanks For visit....%c %c %c",1,1,1);
	getch();
	exit(2);

default: printf("Plz Enter Valid Option....");
}		//End of Switch
getch();
}		//End of outer while

}               //END OF MAIN


rev(char *a){
int i;
	for(i=0;a[i]!='\0';i++)
	{
	}
	i--;
	for(;i>=0;i--)
	printf("%c",a[i]);
}
void prompt()
{
	printf("\nEnter the string\n");

}