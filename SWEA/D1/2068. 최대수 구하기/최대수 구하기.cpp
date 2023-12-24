#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int count = 10;
        int arr[count];
        int max = 0;
        for(int j=0; j<count; j++) {
            cin >> arr[j];
            if (max < arr[j]) max = arr[j];
        }
 
        cout << "#" << test_case << " " <<  max << "\n";


	}
	return 0;
}