#include <iostream>
#include <conio.h>

using namespace std;


int temp;
void unsorted ( int arr[], int n)
{

cout << " Enter the integers: ";
	
for ( int i = 0; i < n; i++ )
{
	cin >> arr[i]; 
	
}

}

void sorting ( int arr[] , int n )
{

for (int i = 0; i < n; i++ )
{
	for (int j = 0; j < n - i - 1; j++ )
	{
		if ( arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

cout << endl;

}

void sorted ( int arr[], int n )
{

cout << " Sorted Result: ";

for ( int i = 0; i < n; i++ )

{
	cout << arr[i] << "  ";
	
}

}





int main()

{
	int n, i, j, temp, arr[100];
	
	cout << " Enter the array size: " << flush;
	cin >> n;

unsorted ( arr, n );

sorting ( arr, n );

sorted ( arr, n );



getch ();
return 0;



	
	
}
