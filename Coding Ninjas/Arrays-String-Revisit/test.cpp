#include <bits/stdc++.h>
using namespace std;
string encryptRailFence(string text, int key)
{
	char rail[key][(text.length())];
	for (int i=0; i < key; i++)
		for (int j = 0; j < text.length(); j++)
			rail[i][j] = '\n';
	bool dir_down = false;
	int row = 0, col = 0;

	for (int i=0; i < text.length(); i++)
	{
		if (row == 0 || row == key-1)
			dir_down = !dir_down;
		rail[row][col++] = text[i];
		dir_down?row++ : row--;
	}
	string result;
	for (int i=0; i < key; i++)
		for (int j=0; j < text.length(); j++)
			if (rail[i][j]!='\n')
				result.push_back(rail[i][j]);

	return result;
}
string decryptRailFence(string cipher, int key)
{
	char rail[key][cipher.length()];
	for (int i=0; i < key; i++)
		for (int j=0; j < cipher.length(); j++)
			rail[i][j] = '\n';
	bool dir_down;

	int row = 0, col = 0;

	// mark the places with '*'
	for (int i=0; i < cipher.length(); i++)
	{
		// check the direction of flow
		if (row == 0)
			dir_down = true;
		if (row == key-1)
			dir_down = false;

		// place the marker
		rail[row][col++] = '*';

		// find the next row using direction flag
		dir_down?row++ : row--;
	}

	// now we can construct the fill the rail matrix
	int index = 0;
	for (int i=0; i<key; i++)
		for (int j=0; j<cipher.length(); j++)
			if (rail[i][j] == '*' && index<cipher.length())
				rail[i][j] = cipher[index++];


	// now read the matrix in zig-zag manner to construct
	// the resultant text
	string result;

	row = 0, col = 0;
	for (int i=0; i< cipher.length(); i++)
	{
		if (row == 0)
			dir_down = true;
		if (row == key-1)
			dir_down = false;
		if (rail[row][col] != '*')
			result.push_back(rail[row][col++]);
		dir_down?row++: row--;
	}
	return result;
}
int main()
{
  string str;
  cin>>str;
  cout<<
	cout << encryptRailFence("attack at once", 2) << endl;
	cout << encryptRailFence("GeeksforGeeks ", 3) << endl;
	cout << encryptRailFence("defend the east wall", 3) << endl;
	cout << decryptRailFence("GsGsekfrek eoe",3) << endl;
	cout << decryptRailFence("atc toctaka ne",2) << endl;
	cout << decryptRailFence("dnhaweedtees alf tl",3) << endl;

	return 0;
}
