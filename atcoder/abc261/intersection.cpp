/*
We have a number line. Takahashi painted some parts of this line, as follows:

First, he painted the part from X=L1 to X=R1 red.
Next, he painted the part from X=L2 to X=R2 blue.
Find the length of the part of the line painted both red and blue.*/

//check for each possilbe 9 cases but it will leads to TLE
/*This problem is troublesome because there are various possibilities of which value is greater than others. Specifically, there are 6 cases:

L1 ≤R1≤L2≤R2
L1 ≤L2 ≤R1≤R2
L1≤L2≤R2≤R1
​L2≤L1≤R1<R2
L2≤L1≤R2≤R1
​l2<r2<l1<r1

If it belongs to multiple cases, you may classify it to any of them. First, if l1>l2 then we can swap both lines so that the cases are limited to the following three, with the corresponding answers:
l1<r1<l2<r1=>0
l1<l2<r1<r2=>r1-r2
l1<l2<r2<r1=>r2-l2
*/
//Approach is to swap lines for other case when line lies in other side

#include <bits/stdc++.h>
using namespace std;
int main() {
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (l1 > l2) {
		swap(l1, l2);
		swap(r1, r2);
	}
	if (r1 <= l2)cout << 0 << endl;
	else if (r1 <= r2)cout << r1 - l2 << endl;
	else cout << r2 - l2 << endl;
 	return 0;
}
