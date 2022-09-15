#include<bits/stdc++.h>
using namespace std;



int main()
{   map<string, int> marksmap;

	marksmap["ABCD"]=1234;
	marksmap["Z"]=1;
	marksmap["B"]=2;
	marksmap["C"]=3;
	marksmap["D"]=4;
	marksmap["E"]=5;
	marksmap["F"]=6;

	marksmap.insert( {{"b",300}, {"Mithilesh", 100}});

	map<string, int>::iterator it = marksmap.begin();

	while(it != marksmap.end()){
		cout << "Key : "<<it->first <<" Value- "<<it->second<<endl;
		it++;
	}



	cout<<"The size is "<<marksmap.size()<<endl;
	cout<<"The size is "<<marksmap.max_size()<<endl;
	cout<<"The size is "<<marksmap.empty()<<endl;



	
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);


	vector<int> ::iterator vt=v.begin();
	while(vt != v.end()){
		cout<<*vt<<endl;

		vt++;
	}
   // Deleting by finding the value of the C++ iterator
	map<string, int>::iterator it2 =marksmap.find("B");
	marksmap.erase(it2, marksmap.find("b"));
	it = marksmap.begin();
	while(it != marksmap.end()){
		cout << "Key : "<<it->first <<" Value- "<<it->second<<endl;
		it++;
	}


	cout<<"The size is "<<marksmap.size()<<endl;
	cout<<"The size is "<<marksmap.max_size()<<endl;
	cout<<"The size is "<<marksmap.empty()<<endl;
	return 0;
}