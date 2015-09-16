/*
 * Programed by - harsh
 * roll no. -14csu070
 * Date started - 15-september-2015
 * last updated - 16-september-2015
 * about - to take marks of students and update them and calaulate average marks
 * */
 
 /*
  * things left
  * -----> fix exit for switch
  * -----> validation for marks add a range
  * -----> make a seperate .h file
  * -----> make user auto enter more students which are converted into new student object
  * */
#include <iostream> 
using namespace std;

class student
{
	int roll_no;
	int marks_subject_1,marks_subject_2,marks_subject_3,marks_subject_4;
	float avgerage;
	public: 
		student(int one,int two,int three,int four)  //taking one two ...as the subjects 
		{
			marks_subject_1 = one;
			marks_subject_2 = two;
			marks_subject_3 = three;
			marks_subject_4 = four;
			}
		
		void display()
		{   
			cout<<"marks in subjects are \n";
			cout<<"\t"<<marks_subject_1<<"\n"<<"\t"<<marks_subject_2<<"\n"<<"\t"<<marks_subject_3<<"\n"<<"\t"<<marks_subject_4<<endl;
			}
		
		void update_marks_one(int x_1)
		{		
			marks_subject_1 = x_1;
			}
		void update_marks_two(int x_2)
		{		
			marks_subject_2 = x_2;
			}
		void update_marks_three(int x_3)
		{		
			marks_subject_3 = x_3;
			}
		void update_marks_four(int x_4)
		{		
			marks_subject_4 = x_4;
			}
		void avg_marks()
		{
			avgerage =  (marks_subject_1+marks_subject_2+marks_subject_3+marks_subject_4)/4;
			cout<<avgerage;
			}   
	};

int main()
{
	student student_one(00,00,00,00);
	int z_1,z_2,z_3,z_4;
	int choice;
	for	(;;)	
		{	
			cout<<"\npress 1 to display marks of subjects \npress 2 to update marks of subject one\npress 3 to update marks of subject two\npress 4 to update marks of subject three\npress 5 to update marks of subject four\npress 6 to calculate average\napress any other key to exit \n";
			cin>>choice;//choices
			//fix choice 5
	switch(choice)
		{
			case 1:
				student_one.display();
				break;
			case 2:
				cout<<"enter marks of subject one \n";
				cin>>z_1;
				student_one.update_marks_one(z_1);
				break;
			case 3:	
				cout<<"enter marks of subject two \n";
				cin>>z_2;
				student_one.update_marks_two(z_2);
				break;
			case 4:	
				cout<<"enter marks of subject three\n";
				cin>>z_3;
				student_one.update_marks_three(z_3);
				break;
			case 5:	
				cout<<"enter marks of subject four \n";
				cin>>z_4;
				student_one.update_marks_four(z_4);
				break;		
			case 6:
				 cout<<"\naverage marks are   ";
				 student_one.avg_marks();
					break;
			default:
				 
				break;
		}
	}		
	return 0;
	}
//output
/*
press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
1
marks in subjects are 
	0
	0
	0
	0

press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
2
enter marks of subject one 
65

press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
3
enter marks of subject two 
78

press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
4
enter marks of subject three
87

press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
5
enter marks of subject four 
96

press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
6

average marks are   81
press 1 to display marks of subjects 
press 2 to update marks of subject one
press 3 to update marks of subject two
press 4 to update marks of subject three
press 5 to update marks of subject four
press 6 to calculate average
apress any other key to exit 
9

 * */
