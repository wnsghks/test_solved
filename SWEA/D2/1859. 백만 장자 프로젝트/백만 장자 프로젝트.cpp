#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int day = 0;
        cin >> day;
      	vector<int> val(day);
        int max = 0;
        long long sum = 0;

        for(int j = 0; j < day; j++) cin >> val[j];
        max = val[day - 1];
      
        for(int k = day - 2; k >= 0; k--) {
          if (max >= val[k]) sum += max - val[k];
          else max = val[k];
        }

        cout << "#" << test_case << " " << sum << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}