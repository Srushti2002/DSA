#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars){
	int i=0;
	int ansIndex=0;
	int n = chars.size();
	
	while(i<n){
		int j=i+1;
		while(j<n && chars[i]==chars[j]){
			j++;			
		}		
		//yaha kb aaoge 
		//ya to vector pura traverse krdia 
		//ya fir new/different character encounter kr dia he
		
		//oldChar store krlo
		chars[ansIndex++] = chars[i];
		int count = j-i;
		
		if(count >1){
			//converting counting into single digit and saving in answer
			string cnt = to_string(count);
			for(char ch: cnt) 
			{
				chars[ansIndex++] = ch;
			}
		}
	
		
		//moving to next character
		i=j;
	}
	
	return ansIndex;
	
}

int main()
{

	vector<char> chars;
	string str = "{a,b,c,b,c,d,j}";
	
	for(char ch: str){
		if(ch != ' ' && ch != ',' && ch!='{' && ch != '}'){
			chars.push_back(ch); 
		}
	}
	cout << compress(chars) << endl;
	return 0;
}
