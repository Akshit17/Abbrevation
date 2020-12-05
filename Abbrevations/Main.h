# include<iostream>
using namespace std;
# include<string>
# include<vector>
//#define MAX_ARRAY_SIZE 1000

	
void solution(string word, string sofar, int count, int pos)
{
	//int i = 0;
	if (pos == word.length())
	{
		if (count == 0)

			cout <<endl<< sofar;

		else
		{
			cout <<endl<< sofar + to_string(count);
		}
		return;
	}

	//i++;
	//cout << word.substr(pos, 1);

	//cout << "Test "<< i <<endl;
	if (count > 0)
	{
	
	//cout << "IFTest " << i << endl;
	
	//to_string is used to convert integer to string
	
		solution(word, sofar + to_string(count) + word.substr(pos, 1), 0, pos + 1);

}
	else
	{
		//cout << "ELSETest " << i << endl;
		//cout << asf + word.substr(pos, 1);
		solution(word, sofar + word.substr(pos, 1), 0, pos + 1);
	}
	
	   solution(word, sofar , count + 1, pos + 1);
	}
	 

void main()
{
	//vector<char> array;
	
	int pos = 0;
	string arr;
	cout << "Enter your name or any word :" << endl;
	cin >> arr;
	
	solution(arr,"" , 0,0 );


};






