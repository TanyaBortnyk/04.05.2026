#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Завдання 1: \n";
	vector<int>v;
	v = {1, 5, 8, 1, 1, 4, 2, 9, 8 };
	cout << "Початковий масив: \n";
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n Без дублікатів \n";
	set<int> Uniqset(v.begin(), v.end());
	for (auto it = Uniqset.begin(); it != Uniqset.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n Завдання 2:\n";
	map<string, int> grades;
	grades["Іван"] = 100;
	grades["Тетяна"] = 95;
	grades["Назар"] = 51;
	/*for (auto it = grades.begin(); it != grades.end(); it++)
		cout << it->first << "->" << it->second << endl;*/
	for (auto& pair : grades)
		cout << pair.first << "->" << pair.second << endl;
	cout << "Завдання 3: \n";
	vector<int> mark = { 90, 90, 51, 57, 67 , 84, 75, 51 };
	unordered_map<int, int> freq;
	for (int g : mark)
		freq[g]++;
	for (auto& pair : freq)
		cout << "Оцінок" << pair.first << "->" << pair.second << " разів \n";
	cout << "Завдання 4 \n";
	multimap<string, string> library;
	library.insert({ "Шевченко","Кобзар" });
	library.insert({ "Леся Українка","Лісова пісня" });
	library.insert({ "Франко","Каменяр" });
	library.insert({ "Шевченко", "Катерина" });
	for (auto& pair : library)
		cout << pair.first << "->" << pair.second << endl;
	return 0;
}
