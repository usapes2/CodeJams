#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
/*! \class Person
 *  \Person keep history of legal name changes
 *  It is given that there are no more than one change/year
 *  GetFullName should give 
 *
 *  Detailed description
 */
class Person
{
public:
	void ChangeFirstName(int year, const string& first_name) {
	// reflect the fact of firstname change in the passed year
		if (data.find(year) != data.end()) {
			data[year][0] = first_name; 
		} else {
		string last_name = getPrevLastName(year);
		data[year] = {first_name,last_name}; }
	}

	void ChangeLastName(int year, const string& last_name) {
	// reflect the fact of lastname change in the passed year
		if (data.find(year) != data.end()) {
			data[year][1] = last_name; 
		} else {
		string first_name = getPrevFirstName(year);
		data[year] = {first_name,last_name}; }
	}

	string GetFullName(int year) {
	// get the last and first name at the end of the passed year
		string fn=getPrevFirstName(year+1);
		string ln=getPrevLastName(year+1);
		if( fn == "" and ln == "") {return "Incognito";
		}else if(fn == "" and ln !="") {return ln+" with unkown first name";
		}else if(fn != "" and ln =="") {return fn+" with unkown last name";
		}else return fn+" "+ln;
	
	}

private:
	map<int, vector<string> > data ; // vector<string> 

	string getPrevFirstName(int year) {
		auto itlow = data.lower_bound(year);
		if (itlow == data.begin()) {
			return "";	
		} else {
			itlow--;
			return (*itlow).second[0];
	}
	}

	string getPrevLastName(int year) {
		//auto itlow = data
		auto itlow = data.lower_bound(year);
		if (itlow == data.begin()) {
			return "";	
		} else {
			itlow--;
			return (*itlow).second[1];
	}
	}
};
int main(int argc, const char *argv[]){

  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  

  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  } 
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  } 
	
		
	return 0;
}
