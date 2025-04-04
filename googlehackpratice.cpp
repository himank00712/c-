#include<vector>
#include<iostream>
using namespace std;
/*int main()
{
	vector <int> hello;
	hello.push_back(12);
	hello.push_back(11);
	hello.push_back(13); 
	hello.push_back(14);
	
	for (int j : hello)
	{
		cout << j<<endl;

		cout << j+1 <<"he" << endl;


	}
	hello.pop_back();


	cout << hello.size() << endl;
	cout << hello.front() << endl;
	cout << hello.back() << endl;
	cout << hello.at(1) << endl;
	cout << hello.capacity() << endl;

}*/
/*
int curr = 0, maxi = INT_MIN;
for (int x : nums)
{
	curr += x;
	maxi = max(curr, maxi);
	if (curr < 0)
	{
		curr = 0;
	}*/
   
    /*int x = 100;
    int z = 0, a = x, b[1000], d[1000], c;
    if (x < 0)
    {
        return false;
    }
    while (x > 0)
    {
        c = x % 10;
        x /= 10;
        b[z] = c;
        z++;

    }
    c = 0;
    for (int i = 0; i < z; i++)
    {
        d[i] = b[z - 1 - i];
        if (d[i] == b[z - 1 - i])
        {
            c++;
        }
    }
    c = 0;
    for (int i = 0; i < z; i++)
    {

        if (d[i] == b[z - 1 - i])
        {
            
            c++;
        }
    }
    if (c == z)
    {
        cout << "yes";
    }
}*/
int main()
{
    string haystack = "sadbutsad", needle = "sad";
    int sizen = needle.size(), sizeh = haystack.size();
    int count=0, j = 0, index = 0, i;
    string sub;
    for (i = 0; i < sizeh; i++)
    {
        if (needle[1] == haystack[i])
        {
            index = i;
            for (j = 0; j < sizeh; j++)
            {
                sub[j] = haystack[i];
                i++;
            }
            cout << sub;
        }
    }
}