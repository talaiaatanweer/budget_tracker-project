#include<iostream>
#include<string>
using namespace std;
int inc,food,elc,gas,tsp,ent,misc;
int total_exp=0;
int svg=0;
int limit=0;
int sav_goal=0;
  string month;


int display()  // to display menu interface
{
	cout<<"\t\t------BUDGET TRACKING------"<<endl<<endl;
	cout<<"1. View Budget Summary"<<endl;
	cout<<"2. View Expense Breakdown"<<endl;
	cout<<"3. Set Budget Limit"<<endl;
	cout<<"4. Set Saving Goals"<<endl;
	cout<<"5. Exit"<<endl;
    cout<<"enter your choice:"<<endl;
	return 0;		
	}
	
void bud_sum() // to display budget summary 
	{
		cout<<"------Budget Summary------"<<endl<<endl;
	    cout << "Month: " <<month << endl;
		cout<<"Income:"<<inc<<endl;
		cout<<"Total Expenses:"<<total_exp<<endl;
		cout<<"Savings:"<<svg<<endl;
	}
void exp_bkd()  // to display budget breakdown
    {
    	float f=(float)food/inc*100;
    	float e=(float)elc/inc*100;
    	float g=(float)gas/inc*100;
    	float t=(float)tsp/inc*100;
    	float en=(float)ent/inc*100;
    	float m=(float)misc/inc*100;
    	float s=(float)svg/inc*100;
    	cout<<"------Expense Breakdown------"<<endl<<endl;
    	cout<<month;
    	cout<<"Your Income: Rs."<<inc<<endl;
    	cout<<"Your Expenses:"<<endl;
    		       cout<<"Food: Rs."<<food<<" ("<<f<<"% of the income)"<<endl;
	               cout<<"Electricity: Rs."<<elc<<" ("<<e<<"% of the income)"<<endl;
	               cout<<"Gas: Rs."<<gas<<" ("<<g<<"% of the income)"<<endl;
	               cout<<"Transportation: Rs."<<tsp<<" ("<<t<<"% of the income)"<<endl;
	               cout<<"Entertaintment: Rs."<<ent<<" ("<<en<<"% of the income)"<<endl;
                   cout<<"Miscellaneous: Rs."<<misc<<" ("<<m<<"% of the income)"<<endl;
    	cout<<"congratulations!! You have Saved: Rs."<<svg<<" ("<<s<<"%  from your income)"<<endl;
    }  

void bud_lim() //function to set budget limit 
{
	cout<<"Enter your budget limit:";
	cin>>limit;
		if(total_exp>limit){
			cout<<"\n Alert: You have exceeded your budget limit"<<endl;}
			else 
			{
				cout<<"Great!! You are within your budget"<<endl;
			}
		}

void goals() //to set saving goals
{
	cout<<"Enter your saving goal:"<<endl;
	cin>>sav_goal;
	cout<<"------Saving Goal------"<<endl;
	cout<<"Saving goal: Rs."<< sav_goal<<endl;
	cout<<"Current Savings: Rs."<<svg<<endl;
	if(svg>=sav_goal){
		cout<<"Congratulations! You have achieved your savings goal"<<endl;
		}
		else {
			cout<<"You need Rs."<<sav_goal-svg<<" more to reach your desired goal"<<endl;
		}
	}
	
int main()
{
    cout<<" Enter Month:  ";
    cin>>month;
    cout<<"\t\t------BUDGET RETRIEVING------"<<endl<<endl;
	cout<<"Enter your income: Rs.";
	cin>>inc;
	cout<<"\t\tEnter your expenses of the month:"<<endl;
	cout<<"Food: Rs.";
	cin>>food;
	cout<<"Electricity: Rs.";
	cin>>elc;
	cout<<"Gas: Rs.";
	cin>>gas;
	cout<<"Transportation: Rs.";
	cin>>tsp;
	cout<<"Entertaintment: Rs.";
	cin>>ent;
	cout<<"Miscellaneous: Rs.";
	cin>>misc;
	total_exp=food+elc+gas+tsp+ent+misc;
	svg=inc-total_exp;
	int choice;
	do{
		display();
		cin>>choice;
	   	if     (choice==1){
			bud_sum();
		}
		else if(choice==2){
			exp_bkd();
    	}
		else if(choice==3){
			bud_lim();
		} 
		else if(choice==4){
			goals();
		}
		else if(choice==5){
		
			cout<<"Exiting.......Goodbye!"<<endl;
		}
		else{
		    cout<<"Invalid Input.\nTry again";
		}
     }
     while(choice!=5);
     
     return 0;
 }
	
