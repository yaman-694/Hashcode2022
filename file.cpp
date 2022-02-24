#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	map<string,int> nameav;
	int contributer,project;
	cin>>contributer>>project;
	int i=0;
	map<string,string> nameskill;
	std::vector<string> names;
	std::vector<string> skillvec;
	while(i<contributer)
	{
		string name;cin>>name;
		// names.push_back(name);
		nameav[name]++;
		
		int skills;cin>>skills;

		string setOfskills="";

		while(skills--)
		{
			string skill;cin>>skill;
			int level;cin>>level;
			setOfskills+=skill;
			setOfskills+=" ";
			setOfskills+=(level+'0');
			setOfskills+=" ";
			setOfskills+=name;
			setOfskills+=" ";
			nameskill[name]=setOfskills;
		}
		i++;
	}

	// for(auto i:skillvec) cout<<i<<" ";
	// 	cout<<endl;
	for(auto i:nameskill) cout<<i.first<<" "<<i.second<<endl;
	// for(auto i: )
	i=0;
	vector<pair<int,string>> projectswithd;
	//vector with project name and array
	vector<pair<string,vector<int>>> projecdata;
	// vector with project skill level
	vector<pair<string,pair<string,int>>> projectskilllevel;
	while(i<project)
	{
		string proname;
		cin>>proname;
		//details of project
		vector <int> arr(4);
		for(int i=0;i<4;i++) cin>>arr[i];


		pair<string,vector<int>> temp;
		temp.first=proname;
		temp.second=arr;
		//pair of project and duration
		pair<int,string> projectduration;
		projectduration.second=proname;
		projectduration.first=arr[0];
		projectswithd.push_back(projectduration);
		projecdata.push_back(temp);

		int skillsreq=arr[3];
		while(skillsreq--)
		{
			string skillName;
			cin>>skillName;
			int skillevel;cin>>skillevel;
			pair<string,int> skillevelpair;
			skillevelpair.first=skillName;
			skillevelpair.second=skillevel;
			
			pair<string,pair<string,int>> proskilllevel;

			proskilllevel.first=proname;
			proskilllevel.second=skillevelpair;
			projectskilllevel.push_back(proskilllevel);
		}


		i++;
	}

	// for(auto i:projectskilllevel)
	// {
	// 	if(i.first=="WebServer")
	// 	{
	// 		cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
	// 	}
	// }

	// for(auto i : projecdata)
	// {
	// 	cout<<i.first<<" ";
	// 		for(auto j : i.second)
	// 		{
	// 			cout<<j<<" ";
	// 		}
	// 		cout<<endl;
	// }


	sort(projectswithd.begin(),projectswithd.end());

	int countproject=project;

	while(countproject--)
	{
		for(auto i:projectswithd)
		{
			string projectNameToBedone = i.second;
			for(auto j : projectskilllevel)
			{
				if(j.first==projectNameToBedone)
				{
					string skilltosearch=j.second.first;	
				}
			}
		}

	}

	return 0;
}