// map.cpp : Defines the entry point for the console application.
//

/*
* http://www.cprogramming.com/tutorial/stl/iterators.html
* http://www.cprogramming.com/tutorial/stl/stlmap.html
* http://www.cplusplus.com/reference/map/map/
*/
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <iostream>
using  namespace std;

int main(void) {
	map<string, int> grades;
	grades["John"] = 92;
	grades["Mary"] = 80;
	cout << "The class is size " << grades.size() << endl;
	// Mary's grades improve
	grades["Mary"] = 94;
	// Mary drops the class
	grades.erase("Mary");
	cout << "The class after erasing Mary is size " << grades.size() << endl;

	if (grades.find("Tim") == grades.end()) {
		cout << "Tim is not in the map!" << endl;
	}
	grades["Raja"] = 85;
	// Iterator pointing to the beginning -- list.begin();
	// Should be John
	cout << grades.begin()->first << endl;
	// Should be 92
	cout << grades.begin()->second << endl;

	map<string, int>::iterator myMapIterator;

	for (myMapIterator = grades.begin();
		myMapIterator != grades.end();
		myMapIterator++) {
		cout << myMapIterator->first << " ";
		//Should output John Raja
	}
	cout << endl << endl;

	unordered_map<string, vector<string>> bdays;
	bdays["June"];
	bdays["July"];
	bdays["August"];
	bdays["June"].push_back("Hal");
	bdays["June"].push_back("Roger");
	bdays["August"].push_back("Kim");
	unordered_map<string, vector<string> >::iterator myBdayIterator;

	for (myBdayIterator = bdays.begin();
		myBdayIterator != bdays.end();
		myBdayIterator++) {
		cout << myBdayIterator->first << " ";
		/*
		for (int i = 0; i < myBdayIterator->second.size(); i++) {
			cout << myBdayIterator->second[i] << " ";
		}
		 */

		for (string s: myBdayIterator->second) {
		    cout << s << " ";
		}
        cout << endl;
	}
	cout << endl << endl;
	cout << endl;

    map<string, double> m2;
    m2["ece"] = 2.0;
    m2["abc"] = 3.0;
	map<string, double>::iterator m2i;

	for (m2i = m2.begin();
		 m2i != m2.end(); m2i++) {
		cout << m2i->first << " ";
	}
	cout << endl << endl;
}
