#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*********************************
*		PROGRAMME FUNCTIONS
**********************************/
string options[3] = {
	"Create Bank Account",
	"Access An Account"
};

void say(string text){
	cout<<text;//<<endl;
}

void showoptions()
{
	int opt_num = 1;
	for (int x = 0; x < 2; x++)
	{
		cout << opt_num << ". " << options[x] << endl;
		opt_num++;
	}
	cout<<endl;
}

void createAccount(){
	//cout<<"Creating Account..";
	string first_name;
	string last_name;
	string acct_name = first_name+last_name;
	string surname;
	string acct_name;
	say("Input First Name: ");//Inputing first name
	cin>>acct_name;
	
	say;
	cout<<"Account Name "<<acct_name<<endl;
}
/*
*		BANK ACCOUNT CLASS
*/
class BankAccount
{
	
	BankAccount(string name){
		acct_name = name;
	}
	
  public:
	string acct_name;
	int acct_num;

  private:
	int pin;
	int token;
	int acct_bal;
};

void choose_action(int opt){
//	cout<<endl<<" >>>> ";
	switch(opt){
		case 1:
			//cout<<"Creating Account"<<endl;
			createAccount();
			break;
		case 2:
			cout<<"Accessing Account"<<endl;
			break;
		default:
			cout<<"Exiting "<<opt<< " is not part of the options"<<endl;
	}
}

/*
*		MAIN PART OF THE PROGRAME
*/
int main()
{
	int opt;
	cout<<"TOYkam Banking System"<<endl;
	cout<<"Updated yes"<<endl;
	
	showoptions();
	
	cout<<endl<<">> ";
	cin>>opt;
	
	choose_action(opt);
	return 0;
}