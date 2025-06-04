#include<iostream>
#include<conio.h>
using namespace std;
int i=0;
struct student{
	string name,grade,section;
    int reg_no;
    float per,obtain_marks,pfm,em,ictm,ap;
}s[25];
// Insert Function 
void insert()
{
	system("cls");
	int count=0; // check variable
	cout<<"\n\n \t\t\t\t\t*****INSERT RECORD*****";
	cout<<"\n\n Enter Reg No : ";
	cin>>s[i].reg_no;
     for( int j=i-1;j>=0;j--) // loop to check reg no already exist 
     {
     	if(s[i].reg_no==s[j].reg_no)
     	{
     		cout<<"\n\n\n\t\t\t Reg no already exist ";
     		count=1;
		}
	 }
	if(count==0)  // if reg no is unique insert data 
	{
		cout<<"\n\n Enter Name :  ";
	cin>>s[i].name;
	cout<<"\n\n Enter Section :  ";
	cin>>s[i].section;
	cout<<"\n\n Now Enter Your Marks";
	cout<<"\n\n  Enter your marks in Programing Fundamental :  ";
	cin>>s[i].pfm;
	cout<<"\n\n  Enter your marks in Applied Physics :  ";
	cin>>s[i].ap;
	cout<<"\n\n  Enter your marks in ICT :  ";
	cin>>s[i].ictm;
	cout<<"\n\n  Enter your marks in English :   ";
	cin>>s[i].em;
	s[i].obtain_marks=s[i].ap+s[i].em+s[i].ictm+s[i].pfm;
	s[i].per=s[i].obtain_marks/400*100;
	if(s[i].per>=80)
	s[i].grade= "A+";
	else if (s[i].per>=70 && s[i].per<80)
	s[i].grade= "A";
	else if (s[i].per>=60 && s[i].per<70)
	s[i].grade= "B";
	else if (s[i].per>=50 && s[i].per<60)
	s[i].grade= "C";
	else if (s[i].per>=40 && s[i].per<50)
	s[i].grade= "D";
	else if (s[i].per<40)
	s[i].grade= "F";
	
	i++;
	cout<<"\n\n \t\t\t Record Insert Successfully";
	}
}
// search Function
void search()
{
	int count=0,check; // temporary variable to store search reg no 
 system("cls");
cout<<"\n\n\t\t\t\t\t*****SEARCH RECORD*****";
 cout<<"\n\n Enter reg no ";
 cin>>check;
 if(i==0) // if i=0 it means no data entered
 {
 	cout<<"\n\n\t\t\t\t\t*****FIRST ENTER ANY Record *****";
 }
 else
 {
 	for( int j=0; j<i;j++)
 	{
 		if(check==s[j].reg_no) // compare user entered reg no with stored reg nos using for loop
 		{
 		cout<<"\n\n Name : "<<s[j].name;
 		cout<<"\n\n Section : "<<s[j].section;
 		cout<<"\n\n Marks in Applied Physics: "<<s[j].ap;
 		cout<<"\n\n Marks in Programing  Fundamental: "<<s[j].pfm;
 		cout<<"\n\n Marks in ICT: "<<s[j].ictm;
 		cout<<"\n\n Marks in English: "<<s[j].em;
 		cout<<"\n\n Percantage = "<<s[j].per<<"%";
 		cout<<"\n\n Grade is : "<<s[j].grade;
 		count=1;
		 }
		}
		if(count==0)
		{
			cout<<"\n\n\t\t\t\t\t*****No Record Found*****";
		}
	 }
 }
// update function 
void update()
{
   int check; // variable to stored user update reg no
 system("cls");
 cout<<"\n\n\t\t\t\t\t*****UPDATE RECORD*****";
 cout<<"\n\n Enter reg no ";
 cin>>check;
 if(i==0)
 {
 	cout<<"\n\n\t\t\t\t\t*****FIRST ENTER ANY Record *****";
 }
 else
 {
 	for( int j=0; j<i;j++)  
 	{
 		if(check==s[j].reg_no) // compare user entered reg no with stored reg nos using for loop
 	    { 
 	    		cout<<"\n\n Enter Name :  ";
	cin>>s[j].name;
	cout<<"\n\n Enter Section :  ";
	cin>>s[j].section;
	cout<<"\n\n Now Enter Your Marks";
	cout<<"\n\n  Enter your marks in Programing Fundamental :  ";
	cin>>s[j].pfm;
	cout<<"\n\n  Enter your marks in Applied Physics :  ";
	cin>>s[j].ap;
	cout<<"\n\n  Enter your marks in ICT :  ";
	cin>>s[j].ictm;
	cout<<"\n\n  Enter your marks in English :   ";
	cin>>s[j].em;
	s[j].obtain_marks=s[i].ap+s[j].em+s[j].ictm+s[j].pfm;
	s[j].per=s[j].obtain_marks/400*100;
	if(s[j].per>=80)
	s[j].grade= "A+";
	else if (s[j].per>=70 && s[j].per<80)
	s[j].grade= "A";
	else if (s[j].per>=60 && s[j].per<70)
	s[j].grade= "B";
	else if (s[j].per>=50 && s[j].per<60)
	s[j].grade= "C";
	else if (s[j].per>=40 && s[j].per<50)
	s[i].grade= "D";
	else if (s[j].per<40)
	s[j].grade= "F";
		 }
	 }
	 cout<<"\n\n\t\t\t\t\t*****RECORD  DELETED SUCCESSFULLY*****";
 }	
}
// delete function 
void del()
{
    int check, count = 0;
    system("cls");
    cout<<"\n\n\t\t\t\t\t*****DELETE RECORD*****";
    cout<<"\n\n Enter reg no ";
    cin>>check;

    if(i == 0)
    {
        cout<<"\n\n\t\t\t\t\t*****FIRST ENTER ANY Record *****";
    }
    else
    {
        for(int j = 0; j < i; j++) 
        {
            if(check == s[j].reg_no) // compare user entered reg no with stored reg nos using for loop
            {
                for(int k = j; k < i - 1; k++) 
                {
                    s[k].reg_no = s[k+1].reg_no;
                    s[k].name = s[k+1].name;
                    s[k].section = s[k+1].section;
                    s[k].ap = s[k+1].ap;
                    s[k].em = s[k+1].em;
                    s[k].pfm = s[k+1].pfm;
                    s[k].ictm = s[k+1].ictm;
                    s[k].obtain_marks = s[k+1].obtain_marks;
                    s[k].per = s[k+1].per;
                    s[k].grade = s[k+1].grade;
                }

                cout<<"\n\n\t\t\t\t\t*****RECORD DELETED SUCCESSFULLY*****";
                count = 1;
                i--;
                break;
            }
        }

        if(count == 0)
        {
            cout<<"\n\n No Record Found ";
        }
    }
}

// show function 
void show()
{
	 	int check;
 system("cls");
 cout<<"\n\n\t\t\t\t\t*****SHOW RECORD*****";
 if(i==0)
  {
 	cout<<"\n\n Enter any record first";
  }
  else {
  	for( int j=0; j<i;j++)
  	{
  		cout<<"\n\n Reg No :  "<<s[j].reg_no;
  		cout<<"\n\n Name : "<<s[j].name;
 		cout<<"\n\n Section : "<<s[j].section;
 		cout<<"\n\n Marks in Applied Physics: "<<s[j].ap;
 		cout<<"\n\n Marks in Programing  Fundamental: "<<s[j].pfm;
 		cout<<"\n\n Marks in ICT: "<<s[j].ictm;
 		cout<<"\n\n Marks in English: "<<s[j].em;
 		cout<<"\n\n Percantage = "<<s[j].per<<"%";
 		cout<<"\n\n Grade is : "<<s[j].grade;
 		cout<<"\n\n ************************************************************************************************************************************************************";
	  }
  }
}

void highest()
  {
  	 system("cls");
  	int max=0;
  	int n;
  	for(int j=0;j<=i;j++)
  	{
  		if(max<s[j].obtain_marks)
  		{
  			max=s[j].obtain_marks;
  			n=j;
		  }
	  }
	 cout<<"\n\n Highest marks is = "<<max;
	 cout<<"\n\n Reg No "<<s[n].reg_no;
	 cout<<"\n\n Name "<<s[n].name;
	 cout<<"\n\n Section "<<s[n].section;
  }
  
  void lowest()
  {
  	 system("cls");
  	int min=s[0].obtain_marks;
  	int n;
  	for(int j=1;j<i;j++)
  	{
  		if(min>s[j].obtain_marks)
  		{
  			min=s[j].obtain_marks;
  			n=j;
		  }
	  }
	 cout<<"\n\n Minimum marks is = "<<min;
	 cout<<"\n\n Reg No "<<s[n].reg_no;
	 cout<<"\n\n Name "<<s[n].name;
	 cout<<"\n\n Section "<<s[n].section;
  }
int main()
{
	p:
	system("cls");
	int choice;
	cout<<"\n\n\t\t\t\t***** Student Record Management System *****";
	cout<<"\n\n 1.  Insert Record";
	cout<<"\n\n 2.  Search Record";
	cout<<"\n\n 3.  Update Record";
	cout<<"\n\n 4.  Delete Record";
	cout<<"\n\n 5.  Show Record";
	cout<<"\n\n 6.  Highest Marks ";
	cout<<"\n\n 7.  Lowest Marks ";
	cout<<"\n\n 8.  Exit";
	cout<<"\n\n Enter your choice :  ";
	cin>>choice;
	switch(choice)
	{
		case 1:
        insert();
		break;
		case 2:
			search();
		break;
		case 3:
			update();
		break;
		case 4:
			del();
		break;
		case 5:
			show();
		break;
		case 6:
			highest();
			break;
		case 7:
			lowest();
			break;
		case 8:
			exit(0);
		break;
		default:
			cout<<"\n\n \t\t\t ** Invalid Choice **";
	}
	getch();
	goto p;
	
}
