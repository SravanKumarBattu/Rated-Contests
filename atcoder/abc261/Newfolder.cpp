/*
For two strings A and B, let A+B denote the concatenation of A and B in this order.
i/p
5
newfile
newfile
newfolder
newfile
newfolder

o/p
newfile
newfile(1)
newfolder
newfile(2)
newfolder(1)
*/
//approach is to use hash_map to count the string occurance

#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n;
	cin >> n;
	map<string,int>cnt;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		if(cnt[s]==0)
            cout << s << endl;
		else
		   cout << s << "(" << cnt[s] << ")" << endl;
		cnt[s]++;
	}
}
