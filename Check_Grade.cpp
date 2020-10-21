#include <iostream>
#include <string>
#include <tuple>
using namespace std;

void showList(string student[], double grade[], int NoS)
{
	int a;
	// Create a list
	tuple <string, double> class_grade;

	for(a = 0; a < NoS; a++)
	{
		get<0>(class_grade) = student[a];
		get<1>(class_grade) = grade[a];
		
		// Skip the student
		if(get<1>(class_grade) == -1)
				continue;
		
		cout << endl << get<0>(class_grade) << "'s grade is "
		<< get<1>(class_grade) << endl;
	}
}

char check ()
{
	char a;
	cout << "Y/y for yes and N/n for no: ";
	cin >> a;
	return a;
}



int main()
{

	// Header
	cout << "---------C++ grading system---------" << endl;

	// ----------------------------------------------------------------------------------

	// Initialization
	int NoS;
	cout << endl << "Enter number of students: ";
	cin >> NoS;
	string student[NoS];
	double grade[NoS];
	
	
	// ----------------------------------------------------------------------------------
	
	cout << endl << "----------------------------------------------" << endl;
	
	// Input students' names and grades
	cout << endl << "Enter each student's name and grade." << endl;
	int x;
	char y;
	for(x = 0; x < NoS; x ++)
	{
		// Input
		cout << endl << "Enter student's name: ";
		cin >> student[x];
		cout << "Enter student's grade: ";
		cin >> grade[x];
		
		// Check if need to input more
		cout << endl << "Do you need to enter another?" << endl;
		y = check();
		if(y == 'N' || y == 'n')
		{
			grade[x+1] = -1; // Set undefined student's score to -1
			break;
		}
		else if((x + 1) == NoS)
		{	
			cout << "You have reached maximum number of students." << endl;
			break;
		}
	}
	
	// ----------------------------------------------------------------------------------
	
	cout << endl << "----------------------------------------------" << endl << endl;
	
	// ----------------------------------------------------------------------------------
	
	// Check if show the list
	cout << "Do you want to display the list?" << endl;
	y = check();
	
	int a;
	if(y == 'Y' || y == 'y')
	{
		showList(student, grade, NoS);
	}
	
	// ----------------------------------------------------------------------------------
	
	cout << endl << "----------------------------------------------" << endl << endl;
	
	// Check if want to change grade
	cout << "Do you want to change someone's grade?" << endl;
	y = check();
	
	if(y == 'Y' || y == 'y')
	{
		do
		{
			
			// Change score
			do
			{
			
				int NoC;
				cout << endl << "Which student's score do you want to change?" << endl;
				cout << "Enter student's number: ";
				cin >> NoC;
				NoC = NoC - 1;
				cout << "Enter new score: ";
				cin >> grade[NoC];
				cout << endl << student[NoC] << "'s new socre is " << grade[NoC] << endl;
		
				// Check if want to change another one
				cout << endl << "Do you want to change another student's grade?" << endl;
				y = check();
			}while(y == 'Y' || y == 'y');
			
			// Check if show new list
			cout << endl << "Do you want to show the new list?" << endl;
			y = check();
			if(y == 'Y' || y == 'y')
				showList(student, grade, NoS);
			
			// Check if want to exit
			cout << endl << "Do you want to change another score?" << endl
			<< "Enter 'no' will terminate the program." << endl;
			y = check();
		}while(y == 'Y' || y == 'y');
	}
	
	// ----------------------------------------------------------------------------------
	
	cout << endl << "----------------------------------------------" << endl
	
	// Footer
	<< "Thank you for choosing C++ grading system" << endl;

	
	return 0;

}

/*
Methods used:
1. array
2. for loop
3. if...else if
4. tuple
5. funcitons
*/
