#include "iter.hpp"

void TestIntArr()
{
	std::cout << "<-------------TEST INT ARR ---------------->\n";
	int arr1[5] = {1, 2, 3, 4, 5};
	totar::iter(arr1, 5, totar::print);
	std::cout << "\n";
	// totar::iter(arr1, 5,totar::randomwrite);
	// totar::iter(arr1, 5, totar::print);
}

void TestFloatArr()
{
	std::cout << "<-------------TEST FLOAT ARR ---------------->\n";
	float arr1[5] = {1.0, 2.4, 3.5, 4.6, -0.0f};
	totar::iter(arr1, 5, totar::print);
	std::cout <<"\n";
	// totar::iter(arr1, 5,totar::randomwrite);
	// totar::iter(arr1, 5, totar::print);
}

void TestToString()
{
	std::cout << "<-------------TEST STRING ARR ---------------->\n";
	std::string arr1[5] = {"123", "lol", "qwe", "jajaja", "vxcz"};
	totar::iter(arr1, 5, totar::print);
}

void TestSubject()
{
	std::cout << "<-------------TEST SUBJECT ---------------->\n";
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	totar::iter( tab, 5, print );
	totar::iter( tab2, 5, print );
}

int main(void)
{
	//TestIntArr();
	//TestFloatArr();
	//TestToString();
	//TestSubject();	
	return (0);
}