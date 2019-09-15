//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
////--------------------custom---------------------------//
//#define emptyspace cout << endl << endl;
////typedef list<int> container;
////using std::cout;
////using std::endl;
////--------------------custom---------------------------//
//
//
//
//// Sort doubles according to how close they are to 5.0.
//class Proximity 
//{
//public:
//
//	bool operator()(double a, double b) const 
//	{
//		cout << fabs(a - 5.0) << " " << fabs(b - 5.0) << endl;
//		return fabs(a - 5.0) < fabs(b - 5.0);
//
//	}
//
//};
//
//
//void decide(double m, double n)
//{
//
//	const Proximity p;		    // An object of the functor type
//
//	if (p(m, n))
//		cout << m << " goes before " << n << "\n";
//	else if (p(n, m))
//		cout << n << " goes before " << m << "\n";
//	else
//		cout << m << " and " << n << " are equal\n";
//}
//
//
//
//int main()
//{
//
//
//	decide(1, 3);
//	decide(9, 9);
//	decide(2, 8);		// How on Earth are 2 and 8 “equal”?
//
//	
//						
//	//Instead of a functor, a lambda - expression can also be used.
//	//	string name = "Beverly Hills Chihuahua";
//
//	transform(name.begin(), name.end(),
//		name.begin(),
//		[](char c) { return 'a' <= c && c <= 'z' ? c - 'a' + 'A' : c; }
//	);
//
//	cout << name << '\n';
//	BEVERLY HILLS CHIHUAHUA
//
//
//	system("pause");
//
//}
//
//class embiggen {
//public:
//	char operator()(char c) {
//		return ('a' <= c && c <= 'z') ? c - 'a' + 'A' : c;
//	}
//};
//
//string name = "Beverly Hills Chihuahua";
//
//transform(name.begin(), name.end(),
//	name.begin(), embiggen());
//
//cout << name << '\n';
//
//
//class embiggen {
//public:
//	char operator()(char c) {
//		return ('a' <= c && c <= 'z') ? c - 'a' + 'A' : c;
//	}
//};
//
//string name = "Beverly Hills Chihuahua";
//embiggen biggifier;
//transform(name.begin(), name.end(),
//	name.begin(), biggifier);
//cout << name << '\n'