#include<iostream>
#include<string>
using namespace std;

int main(){ 
	string grade;
	int i =1;
	int A =0;
	int B =0;
	int C =0;
	int D =0;
	int F =0;
	int Z =0;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student ["<< i << "]: " ;
		cin >> grade; 
		if(grade == "A" || grade == "B"|| grade == "C"||grade == "D"|| grade == "F"|| grade == "0")
		{
			 if(grade == "A")
			{
				A++ ;
				i++;
			}
			else if(grade == "B")
			{
				B++;
				i++;
			} 
			else if(grade == "C")
			{
				C++;
				i++;
			}
			else if(grade == "D")
			{
				D++;
				i++;
			}
			else if(grade == "F")
			{
				F++;
				i++;
			}
			else if(grade == "0")
			{
				break;
			}	
		}
		else
		{
			cout << "Wrong input. Please input again." << endl;
		} 
	}while(true);
	
	
	cout << "In total " << i-1 << " students." << endl;
	cout << "A = " << A <<", ";
	cout << "B = " << B <<", ";	
	cout << "C = " << C <<", ";
	cout << "D = " << D <<", ";
	cout << "F = " << F ;
	
		
	
	return 0;
}
