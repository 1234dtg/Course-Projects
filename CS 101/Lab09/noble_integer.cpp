#include <iostream>
using namespace std;

int main()
{
    int size, found = 0;
	cin >> size;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cin >> arr[i];
	}

    for (int i = 0; i < size; i++ )
    {
        int count = 0;
        for (int j = 0; j < size; j++)
            if (arr[i] < arr[j])
                count++;
			
        if (count == arr[i])
		{
			cout << 1 << endl;
            return 0;
		}
    }
     
    cout << 0 << endl;
	
	return 0;
}
