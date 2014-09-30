#include <iostream>

using namespace std; 

void print_array(int a[]) {
	for(int i = 0; i < 3; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

//do pointer example so they really understand them
//example: what will a and b look like before the function ends?
void example1() {
	int a[] = {1, 2, 3};
	int b[] = {4, 5, 8};
	int *c = a; 
	int *d = b; 
	*c++ = *d++;
	*c = (*d)++;
	cout << "this is a: ";
	print_array(a);
	cout << "this is b: ";
	print_array(b);
}
//what about this? 
void example2() {
	int a[] = {1, 2, 3};
	int b[] = {4, 5, 8};
	int *c = a; 
	int *d = b; 
	*++c = *++d; //MWAHAHAHAHAHA!!!! preincrement matters, brah
	*c = (*d)++;
	cout << *(a+2) << endl; //Is this legal? If so, why and what will it output? 
							//If not, what is the correct way of writting this?
	cout << "this is a: ";
	print_array(a);
	cout << "this is b: ";
	print_array(b);
}

//passing pointers into functions
void example3(int* x, int y) {
	*x = *x + y; 
} //what will happen to x when I output the value in main? 

//go over enums
enum Day{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

void example4(Day today) {
	switch(today) {
		case Mon: cout << "It's Monday\n";
				break; 
		case Tue: cout << "It's Tuesday\n";
				break; 
		case Wed: cout << "It's Wednesday\n";
				break; 
		case Thur: cout << "It's Thursday\n";
				break; 
		case Fri: cout << "It's Friday\n";
				break; 
		case Sat: cout << "It's Saturday\n";
				break; 
		case Sun: cout << "It's Sunday\n";
				break; 
		default: cout << "idk what day it is\n";
	}
}

//go over templates 
template <typename T>
void example5(T a, T b) { //in here, i can pass in ints, strings, doubles, bools... etc.
	cout << a << " " << b << endl;
}

//go over structs
struct Square {
	int side; 
};
void example6(Square X) {
	int area = X.side * X.side;
	cout << area << endl; 
}

//go over classes
class Rectangle {
public:
	Rectangle() {
		height = 1; 
		length = 1;
	}
	Rectangle(int x, int y) {
		height = y;
		length = x;
	}
	int area() {
		return height*length;
	}
private:
	int height; 
	int length;
};

//go over argc and argv
int main(int argc, char* argv[]) {
	cout << "this is argc: "<< argc << endl; 
	cout << "this is argv: ";
	for(int i = 0; i < argc; i++) {
		cout << argv[i] << " ";
	}
	cout << endl;
	cout << "example1: \n";
	example1();
	cout << "example2: \n";
	example2();
	cout << "example3: \n";
	int b = 7, c = 5;
	int *d = &c;
	cout << "c was: "<< c << endl; 
	example3(d, b);
	cout << "now c is: "<< c << endl; 
	cout << "example 4 \n"; 
	Day today = Wed; //notice the type of today
	example4(today);
	cout << "example 5 \n"; 
	example5(3, 4);
	example5('a', 'b');
	example5("hello", "goodbye");
	cout << "example 6 \n"; 
	Square S; 
	S.side = 2; 
	cout << "Square area is: ";
	example6(S);
	Rectangle R1;
	Rectangle R2(7, 9);
	int R1_area = R1.area();
	int R2_area = R2.area();
	cout << "R1 area is: " << R1_area << endl;
	cout << "R2 area is: " << R2_area << endl;
}