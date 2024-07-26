#include<stdio.h>
#include<conio.h>
#include<string.h>
struct dict
{
  char name[50];
  char num[11];
  char mail[35];
  char reg[10];
}sp[100];
int h,i=1,j,n;
int main()
{
    int c,y,addcon,a=1,z,o;
    int choice,v,pos,up,m,p;
    char b[50];
    clrscr();
    printf("                 -----WELCOME TO E PHONEBOOK-----\n\n");
    strcpy(sp[1].reg,"81001");strcpy(sp[1].name,"AJAY");strcpy(sp[1].num,"6282934843");strcpy(sp[1].mail,"ajay@gmail.com");i++;
    while(a==1)
  {
    printf("1---DISPLAY CONTACT\n2---DELETING CONTACT\n3---ADDING CONTACT\n4---FINDING CONTACT\n5---UPDATE CONTACT");
    printf("\n\n\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    for(j=0;j<140;j++)
    {
      printf("_");
    }
    if(choice<=5)
    {
      switch(choice)
      {
	case 1:
	printf("\nREG.NO\tADM.NO\t\tNAME\t\tNUMBER\t\tEMAIL");
	for(n=1;n<i;n++)
	{
	   printf("\n%d\t%s\t\t%s\t\t%s\t%s",n,sp[n].reg,sp[n].name,sp[n].num,sp[n].mail);
	}
	printf("\n");
	for(j=0;j<140;j++);
	{
	  printf("_");
	}
	break;

	case 2:
	printf("\nENTER THE REG NO TO REMOVE THE CONTACT:");
	scanf("%d",&h);
	if(h>=i)
	{
	  printf("INVALID REG NO");
	}
	else
	{
	  for(c=h;c<=i;c++)
	  {
	    strcpy(sp[c].reg,sp[c+1].reg);strcpy(sp[c].name,sp[c+1].name);strcpy(sp[c].num,sp[c+1].num);strcpy(sp[c].mail,sp[c+1].mail);
	  }
	  i--;
	  for(n=1;n<i;n++)
	  {
	    printf("\n%d\t%s\t%s\t\t%s\t%s",n,sp[n].reg,sp[n].name,sp[n].num,sp[n].mail);
	  }
	  }
	  printf("\n");
	  for(j=0;j<140;j++)
	  {
	    printf("_");
	  }
	  break;

	  case 3:
	  printf("\nADDING CONTACT");
	  printf("\nENTER THE NO OF PERSONS TO BE ADDED:");
	  scanf("%d",&addcon);
	  for(v=i;v<i+addcon;++v)
	  {
	    printf("\nENTER ADM NO:");
	    scanf("%s",sp[v].reg);
	    printf("\nENTER NAME:");
	    scanf("%s",sp[v].name);
	    printf("\nENTER NUMBER:");
	    scanf("%s",sp[v].num);
	    printf("\nENTER MAIL:");
	    scanf("%s",sp[v].mail);
	  }
	  printf("\n");
	  for(j=0;j<140;j++)
	  {
	    printf("_");
	  }
	  i=v;
	  printf("\nAFTER CHANGING\n");
	  printf("REG.NO\tADM.NO\t\tNAME\t\tNUMBER\t\tEMAIL");
	  for(n=1;n<i;n++)
	  {
	    printf("\n%d\t%s\t\t%s\t\t%s\t\t%s",n,sp[n].reg,sp[n].name,sp[n].num,sp[n].mail);
	  }
	  printf("\n");
	  for(j=0;j<140;j++)
	  {
	    printf("_");
	  }
	  break;

	  case 4:
	  printf("\nENTER THE REGISTER NUMBER TO FIND THE CONTACT DETAILS:");
	  scanf("%d",&pos);
	  if(pos>=i)
	  {
	    printf("INVALID REG NO");
	  }
	  else
	  {
	    for(y=pos-1;y<pos;y++)
	    {
	      printf("ADM.NO:%s\n",sp[pos].reg);
	      printf("NAME:%s\n",sp[pos].name);
	      printf("PHONE NUMBER:%s\n",sp[pos].num);
	      printf("MAIL ID:%s\n",sp[pos].mail);
	    }}
	    printf("\n");
	    for(j=0;j<140;j++)
	    {
	      printf("_");
	    }
	    break;

	  case 5:
	  printf("\nENTER THE REG NO TO UPDATE THE CONTACT DETAILS:");
	  scanf("%d",&up);
	  if(up>=i)
	  {
	    printf("INVALID REG NO");
	  }
	  else
	  {
	    for(z=up-1;z<up;z++)
	    {
	      printf("ADM.NO:%s\n",sp[up].reg);
	      printf("NAME:%s\n",sp[up].name);
	      printf("PHONE NUMBER:%s\n",sp[up].num);
	      printf("MAIL ID:%s\n",sp[up].mail);

	}}
	if(up>=i)
	{
	  printf("INVALID REG NO");
	}
	else
	{
	  for(o=up;o<=i;o++)
	  {
	    strcpy(sp[o].reg,sp[o+1].reg);strcpy(sp[o].name,sp[o+1].name);strcpy(sp[o].num,sp[o+1].num);strcpy(sp[o].mail,sp[o+1].mail);
	  }
	  i--;
	}
	for(p=i;p<i+1;++p)
	{
	    printf("\nENTER ADM NO:");
	    scanf("%s",sp[p].reg);
	    printf("\nENTER NAME:");
	    scanf("%s",sp[p].name);
	    printf("\nENTER NUMBER:");
	    scanf("%s",sp[p].num);
	    printf("\nENTER MAIL:");
	    scanf("%s",sp[p].mail);
	}
	printf("\n");
	  for(j=0;j<140;j++)
	  {
	    printf("_");
	  }
	  i=p;
	  printf("\nAFTER CHANGING\n");
	  printf("REG.NO\tADM.NO\t\tNAME\t\tNUMBER\t\tEMAIL");
	  for(n=1;n<i;n++)
	  {
	    printf("\n%d\t%s\t\t%s\t\t%s\t%s",n,sp[n].reg,sp[n].name,sp[n].num,sp[n].mail);
	  }

	}}
	  else
	  {
	    printf("\nINVALID CHOICE");
	  }
	  printf("\nPRESS 1 TO CONTINUE 0 TO EXIT");
	  scanf("%d",&a);
	}
	getch();
	return 0;
      }
