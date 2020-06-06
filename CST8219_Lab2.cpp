// CST8219_Lab2.cpp : Defines the entry point for the application.
//

#include "CST8219_Lab2.h"

using namespace std;



int w, h, number;

class Rectangle{

private:
	int top, left, bottom, right;
	

public:

	Rectangle(int t, int b, int l, int r) {

		top = t;
		bottom = b;
		left = l;
		right = r;

		cout << "In constructor with 4 parameters" << endl;
	};
	Rectangle(int width, int height) : Rectangle(0, width, 0, height) {
		cout << "In constructor with 2 parameters, width = " << width << " height = " << height << endl;
				
	};
	Rectangle() : Rectangle(1, 1) {
		cout << "In constructor with 0 parameters" << endl;
	};
	~Rectangle() {
		cout << "In constructor with 0 parameters" << endl;
	}

	
};

int main(int argc, char** argv)
{
	Rectangle rectangle1; // This calls constructor Rectangle()
	Rectangle rectangle2(10, 20); //This calls constructor Rectangle(int, int);
	Rectangle rectangle3(0, 5, 0, 10); //This calls constructor …

	cout << "rectangle1 takes"<< sizeof(rectangle1) << endl;
	cout << "rectangle2 takes" << sizeof(rectangle2) << endl;
	cout << "rectangle3 takes" << sizeof(rectangle3) << endl;
	Rectangle* pRect = NULL;
	
	
	/*cout << "enter width: " << endl;
	
	while ((!(cin >> w)) && (w < 1) )
	{
		cout << "Error! please enter a number!" << endl;
		cin.clear();
		cin.ignore(256, '\n');
	}
	
	cout << "enter heigth: " << endl;
	
	while ((!(cin >> h)) && (h < 1)) 
	{
		cout << "Error! please enter a number!" << endl;
		cin.clear();
		cin.ignore(256, '\n');
	}

	pRect = new Rectangle(w, h);
	delete pRect;*/
			
	  do {
	  int option = -1;
		cout << "Please select:\n1.calculate;\n2.quit" << endl;
		cin >> option;
		
		switch (option) {
		case 1:
			cout << "enter width: " << endl;
				
			while ((!(cin >> w))&&(w < 1)) {
				cout << "Error! please enter a number!" << endl;
				cin.clear();
				cin.ignore(256, '\n');
			}
			cout << "you enter width is: "<< w << endl;

			cout << "enter height: " << endl;
			while (!(cin >> h)&&( h < 1)) {
				cout << "Error! please enter a number!" << endl;
				cin.clear();
				cin.ignore(256, '\n');
			}
			cout << "you enter height is: " << h << endl;
			delete pRect;
			pRect = new Rectangle(w, h);
			break;
		case 2:

			delete pRect;
			exit(0);
		default:
			cout << "wrong option" << endl;
			break;
		}
	} while (true);
	
	cout << "Hello CMake." << endl;
	return 0;
}
