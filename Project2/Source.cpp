#include<iostream>
#include<string>
#include<exception>

using namespace std;

int main() {
	try
	{

		//basic menu information with user defined input variable selection
		int selection;
		system("cls");
		cout << "This is a example of Error handling to test throw and catch." << endl<<endl;

		
		cout << "1.) Integer Error..." << endl;
		cout << "2.) Character Error..." << endl;
		cout << "3.) String Error..." << endl;
		cout << "4.) General Exceptions" << endl;
		cout << "5.) Quit" << endl;
		cout <<endl<<endl;
		cout << "Please Enter Selection: " << flush;
		cin >> selection;

		//Basic if statement to test for User input selections.

		if (selection == 1)
		{
			//Throws an integer variable
			throw 1;
		}
		else if (selection==2)
		{
			//throws a character variable
			throw 'A';
		}
		else if (selection == 3)
		{
			//throws a string variable
			throw string("String Error");
		}
		else if (selection==4)
		{
			//test of a runtime error function.  Throws the phrase General Runtime Error
			throw runtime_error("General Runtime Error Example");
		}
		else if (selection == 5)
		{
			//exits the program by returning 0 value
			system("cls");
			cout << "Thank you for using this program." << endl<<endl;
			system("pause");
			return 0;
		}
		else
		{
			//catches all other types of input outside of 1-5 Conditions.
			cout << "Invalid input!" << endl;
			main();
		}

	}
	catch (int e) {
		//catches integer value throws, outputs a general error message.
		system("cls");
		cout << "This is an integer error" << endl;
		cout << "Calling main()program" << endl<<endl;
		system("pause");

		main();
	}
	catch (char e) {
		//catches character value throws, outputs a general error message.
		system("cls");
		cout << "This is a Character error" << endl;
		cout << "Calling main()program" << endl<<endl;
		system("pause");
		main();

	}
	catch (string &e) {
		//catches string value throws, outputs a general error message.
		system("cls");
		cout << "This is a string error" << endl;
		cout << "Calling main()program" << endl<<endl;
		system("pause");
		main();
	}

	catch (const std::exception& e)
	{
		//Catches the general runtime error and outputs the message of the runtime error throw.
		system("cls");
		cout << "Selection 4: " << e.what()<<endl<<endl;
		system("pause");
		main();
	}

	return 0;
}