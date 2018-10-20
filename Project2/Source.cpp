#include<iostream>
#include<string>
#include<exception>

using namespace std;

int main() {
	try
	{
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

		if (selection == 1)
		{
			throw 1;
		}
		else if (selection==2)
		{
			throw 'A';
		}
		else if (selection == 3)
		{
			throw string("String Error");
		}
		else if (selection==4)
		{
			throw runtime_error("General Runtime Error Example");
		}
		else if (selection == 5)
		{
			system("cls");
			cout << "Thank you for using this program." << endl<<endl;
			system("pause");
			return 0;
		}
		else
		{
			cout << "Invalide input!" << endl;
			main();
		}

	}
	catch (int e) {
		system("cls");
		cout << "This is an integer error" << endl;
		cout << "Calling main()program" << endl<<endl;
		system("pause");

		main();
	}
	catch (char e) {
		system("cls");
		cout << "This is a Character error" << endl;
		cout << "Calling main()program" << endl<<endl;
		system("pause");
		main();

	}
	catch (string &e) {
		system("cls");
		cout << "This is a string error" << endl;
		cout << "Calling main()program" << endl<<endl;
		system("pause");
		main();
	}

	catch (const std::exception& e)
	{
		system("cls");
		cout << "Selection 4: " << e.what()<<endl<<endl;
		system("pause");
		main();
	}

	return 0;
}