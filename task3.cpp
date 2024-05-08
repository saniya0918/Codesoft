#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<pair<string,float> > studentInfo;
	int n;
	cout<<"Enter number of students : ";
	cin>>n;
	float grade;
	string name;
	for(int i=0;i<n;i++){
		cout<<"Enter name of student : ";
		cin>>name;
		cin.ignore();
		cout<<"Enter grades : ";
		cin>>grade;
		cin.ignore();
		studentInfo.push_back(make_pair(name,grade));
	}
	grade = 0;
	for(int i=0;i<n;i++){
		grade += studentInfo[i].second;
	}
	
	float avg = grade / n;
	cout<<"Average of grades is "<<avg<<endl;
	
	float max = studentInfo[0].second;
	float min = 0;
	for(int i=0;i<n;i++){
		if(max<=studentInfo[i].second){
			max = studentInfo[i].second;
		}
		else
		{
			min = studentInfo[i].second;
		}
	}
	
	cout<<"Maximum grades is "<<max<<endl;
	cout<<"Minimum grades is "<<min<<endl;
	return 0;
}


