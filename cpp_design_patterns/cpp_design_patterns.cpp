// cpp_design_patterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Lesson 1 (vid 3)
//single respocibility principal
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
//Notes:
// when passing a param use (&) ex: func(string& fname, string& lname)
//struct: like a class
//struct Journal
//{
	/*string title;
	vector<string> entries;*/

	//constructor - this one needs a string (title) to instantiate.. 
//	Journal(const string &title) : title(title) {}
//
//	void addEntry(string entry) {
//		static int count = 1;
//		entries.push_back(to_string(count) + " : " + entry);
//	}
//};
//
//struct PersistanceManager
//{
//	static void save(const Journal& j, const string& fileName)
//	{
//		//file stream
//		ofstream ofs(fileName);
//		//foreach 
//		for (auto& e : j.entries)
//			ofs << e << endl;
//	}
//};
//
//int main()
//{
//    std::cout << "Hello World!\n";
//	Journal jrnl{ "My Diary" };
//	jrnl.addEntry("Started cpp course.");
//	jrnl.addEntry("Started OpenGL course");
//
//	PersistanceManager pm;
//	pm.save(jrnl, "myFile");

//}
//*****************************************************************************************************************************
///
/// Lesson 2 (vid 4)
/// Open Close Principal
///system should be open for extension
//enum class Color{red, green, blue};
//enum class Size {small, medium, large };
//
//struct Product
//{
//	string name;
//	Color color;
//	Size size;
//};
//
//struct ProductFilter
//{
//	vector<Product*> filterByColor(vector<Product*> items, Color color)
//	{
//		vector<Product*> result;
//		for (auto& i : items)
//		{
//			//  object -> prop is the same as object.prop
//			if (i->color == color)
//			{
//				result.push_back(i);
//			}
//		}
//		return result;
//	}
//};
//
/////
////interfaces
/////
//template <typename T> struct Specification
//{
//	virtual bool isSatified(T* item) = 0;
//
//	/*AndSpecification<T> operator&&(Specification<T> && other)
//	{
//		return AndSpecification<T>(*this, other);
//	}*/
//};
//
//template <typename T> struct Filter
//{
//	virtual vector<T*> filter(vector<T*> items, Specification<T>& spec) = 0;
//};
//
//template <typename T> struct AndSpecification : Specification<T>
//{
//	Specification<T>& first;
//	Specification<T>& second;
//
//	AndSpecification(Specification<T> &first, Specification<T> &second) : first(first), second(second)
//	{}
//
//	bool isSatified(T *item) override
//	{
//		return first.isSatified(item) && second.isSatified(item);
//	}
//};
//
////Enhanced filter class
//struct SuperFilter : Filter<Product>
//{
//	vector<Product*> filter(vector<Product*> items, Specification<Product> &spec) override
//	{
//		vector<Product*> result;
//		for (auto& item : items) {
//			if (spec.isSatified(item)) {
//				result.push_back(item);
//			}
//		}
//		return result;
//	}
//};
//// color spec to filter by color
//struct ColorSpecification : Specification<Product>
//{
//	Color color;
//	ColorSpecification(Color color) : color(color){}
//
//
//	// Inherited via Specification
//	bool isSatified(Product *item) override
//	{
//		return item->color == color;
//	}
//
//};
//// size spec to filter by size
//struct SizeSpecification : Specification<Product>
//{
//	Size size;
//	SizeSpecification(const Size size) : size(size) {}
//
//	// Inherited via Specification
//	bool isSatified(Product *item) override
//	{
//		return item->size == size;
//	}
//
//};
//
//
//
//int main()
//{
//	ProductFilter pfilter;
//	Product apple{ "apple", Color::green, Size::small };
//	Product tree{ "tree", Color::green, Size::large };
//	Product pool{ "sky", Color::blue, Size::large };
//
//	vector<Product*> items{ &apple, &tree, &pool };
//	/*auto greenItems = pfilter.filterByColor(items, Color::green);
//	for (auto& item : greenItems)
//	{
//		cout << item->name << endl;
//	}*/
//	//better filter example
//	SuperFilter sFilter;
//	ColorSpecification green(Color::green);
//	SizeSpecification sm(Size::small);
//	AndSpecification<Product> green_and_small(green, sm);
//	//auto spec = ColorSpecification(Color::green) && SizeSpecification(Size::small);
//	for (auto& item : sFilter.filter(items, green_and_small))
//	{
//		cout << item->name << endl;
//	}
//
//	
//	return 0;
//}
//****************************************************************************************************************
//lesson 3 vid5
//Liskov Substituion Principal 

int main()
{

	return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
