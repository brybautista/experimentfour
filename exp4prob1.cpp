#include <iostream>
#include <conio.h>

using namespace std;

int addition ( int x, int o )
{
	int h;
	h = x + o;
	return h;
}

int subtraction ( int x, int o )
{
	int t;
	t = x - o;
	return t;
}

int multiplication ( int x, int o)
{
int q;
q = x * o;
return q;
}

int division ( int x, int o )
{
int f;
f = x / o;
return f;
}

int modulo ( int x, int o )
{
	int w;
	w = x % o;
	return w;
}




int main()
{
int add;
int sub;
int mult;
int div;
int mod;
bool skill = true;
do
{	
int x, o, z;
char a;

cout << " CALCULATOR NI BAUTISTA " << endl;
cout << endl;

cout << " LIST OF OPERATIONS : " << endl;
cout << endl;

cout << " ADDITION \n"; 
cout << " SUBTRACTION \n";
cout << " MULTIPLICATION \n";
cout << " DIVISION \n";
cout << " MODULUS \n";

cout << endl;

cout << " Press 'A' for ADDITION " << endl;
cout << " Press 'S' for SUBTRACTION " << endl;
cout << "Press'M' for MULTIPLICATION " << endl;
cout << " Press 'D' for DIVISION " << endl;
cout << " Press 'G' for MODULUS " << endl;
cout << endl;


cout << " ENTER THE DESIRED OPERATION : ";
cin >> a;
cout << endl;

cout << " Enter the desired number ";
cout << endl;

switch (a)
{
	
	case 'a':
	case 'A':
	cout << " First number : "; cin >> x;
	cout << " Second number :"; cin >> o;
	add = addition ( x, o );
	cout << endl;
	cout << x << " + " << o << endl;
	cout << endl;
	cout << " The SUM is = " << add << endl;
	break;
	
	case 's':
	case 'S':
	cout << " First number : "; cin >> x;
	cout << " Second number :"; cin >> o;
	sub = subtraction ( x, o );

		cout << endl;
		cout << x << " - " << o << endl;
		cout << endl;
	cout << " The DIFFERENCE is = " << sub << endl;
	break;
	
	
	case 'm':
	case 'M':
		cout << " First number : "; cin >> x;
	cout << " Second number :"; cin >> o;
	mult = multiplication ( x, o );
		cout << endl;
		cout << x << " X " << o << endl;
		cout << endl;
	cout << " The PRODUCT is = " << mult << endl;
	break;
	
	case 'd':
	case 'D':
		cout << " First number : "; cin >> x;
	cout << " Second number :"; cin >> o;
	div = division ( x, o );
		cout << endl;
		cout << x << " / " << o << endl;
		cout<< endl;
	cout << " The QUOTIENT is = " << div << endl;
	break;
	
	case 'g':
		case 'G':
			cout << " First number : "; cin >> x;
	cout << " Second number :"; cin >> o;
	mod = modulo ( x, o );
			cout << endl;
		cout << x << " % " << o << endl;
		cout<< endl;
	cout << " The answer is = " << mod << endl;
	break;
}

cout << endl;
cout << " ---------------------------------------------" << endl;
cout << endl; 
cout << endl;
char choice, y, n;

cout << " Continue??? " << endl;
cout << endl;
cout<< " Press Y for Yes " << endl;
cout << endl;
cout << " Press N  for NO " << endl;
cout << endl;
cout << endl;

cout << " ---------------------------------------------" << endl;

cout << " Do you wish to continue? : ";
cin >> choice;


switch (choice)
{
	case 'y':
	case 'Y':
	skill = true; 
	break;
	
	case 'n':
	case 'N':
	cout << endl;
	cout << " ---- CALCULATOR NI BAUTISTA -----" << endl;
	cout << " Thank You Very Much! " << endl;
	skill = false;
	break;
	
	
	
}

} while (skill);

getch();
return 0;

			
}
