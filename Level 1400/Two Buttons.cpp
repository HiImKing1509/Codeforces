/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <list>
#include <map>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define MAX 1000000000
#define MIN -1

#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll

#define ull unsigned ll
#define ui64 unsigned __int64 // == unsigned ll


void SolveProblem()
{
	ll n, m, sum = 0;
	cin >> n >> m;
	while (m != n)
	{
		if (m <= n)
		{
			sum = sum + (n - m);
			m = m + (n - m);
		}
		else
		{
			if (m % 2 == 0)
				m /= 2;
			else
				m++;
			sum++;
		}
	}
	cout << sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
	SolveProblem();
	return 0;
}
 
