#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
		 int n = 0;
        cin >> n;
        vector<int> count(n);
        for (int j = 0; j < n; j++) {
          int check = 0;
          int num = j + 1;
          count[j] = num;

          while (num) {
            if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) {
              cout << "-";
              check += 1;
            } 
            num = num / 10;
          }
          if (check == 0) cout << count[j];
          cout << " ";
        }

	return 0;
}