#include<iostream>
using namespace std;
/*
// Point 클래스를 정의한다.
class Point
{
public:
	int *arr;
	// 멤버 변수들
	int x, y;
	// 멤버 함수
	void Print();
	//{cout << "( " << x << ", " << y << ")\n";}
	Point();
	Point(int initX, int initY);	~Point();
};
void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}
Point::Point()
{
	x = 0;
	y = 0;
	arr = new int[500];
}
Point::Point(int initX, int initY)
{
	x = initX;
	y = initY;
}
Point::~Point()
{
	// 메모리를 해제한다.
	delete[] arr;
	arr = NULL;
}*/
/*class AccessControl
{
public://공개
	char publicData;
	void publicFunc() {};
protected://일부공개
	int protectedData;
	void protectedFunc() {};
private://비공개
	float privateData;
	void privateFunc() {};
};*/
/*
class Parent
{
private:
	int priv;
protected:
	int prot;
public:
	int pub;
};
class Child : public Parent
{
public:
	void AccessParents()
	{
		int n;
		// 부모의 멤버에 접근을 시도
		//n = priv; // 실패
		n = prot; // 성공
		n = pub; // 성공
	}
};
*/
class Shape
{
public:
	float _x, _y;
	Shape();
	Shape(float x, float y);
	void Draw() const;
};
Shape::Shape(){}
Shape::Shape(float x, float y)
{
}
void Shape::Draw()const
{
	cout << "[Shape] position = (" << _x << "," << _y << ")\n";
}
class Rectangle :public Shape
{
public:
	float _width, _height;
	Rectangle();
	Rectangle(float x, float y, float w, float h);
	void Draw() const;
};
Rectangle::Rectangle(){}
Rectangle::Rectangle(float x, float y, float w, float h)
{
}
void Rectangle::Draw() const
{
	cout << "[Rectangle] position = (" << _x << "," << _y << "), size = (" << _width << "," << _height << ")\n";
}
class Circle :public Shape
{
public:
	float _radius;
	Circle();
	Circle(float x, float y, float radius);
	void Draw() const;
};
Circle::Circle(){}
Circle::Circle(float x, float y, float radius)
{
}
void Circle::Draw() const
{
	cout << "[Circle] position = (" << _x << "," << _y << "), radius = " << _radius << "\n";
}
int main()
{
	/*
	// 객체를 생성한다.
	Point pt1, pt2;
	// pt1, pt2를 초기화 한다.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;
	// pt1, p2의 내용을 출력한다.
	pt1.Print();
	pt2.Print();
	Point pt(50, 50);
	Point* p1 = new Point(); // 디폴트 생성자 사용
	Point* p2 = new Point(100, 100); // 인자있는 생성자 사용
	Point* p3 = new Point(pt); // 복사 생성자 사용
	p1->Print();
	p2->Print();
	p3->Print();
	delete p1;
	delete p2;
	delete p3;
	*/
	/*
	// 객체를 생성하고, 각 멤버에 접근해보자
	AccessControl ac;
	ac.publicData = 'A'; // 성공
	ac.publicFunc(); // 성공
	//ac.protectedData = 100; // 실패
	//ac.protectedFunc(); // 실패
	//ac.privateData = 4.5f; // 실패
	//ac.privateFunc(); // 실패
	*/
	Shape a(100, 40);
	Rectangle b(120, 40, 50, 20);
	Circle c(200, 100, 50);
	a.Draw();
	b.Draw();
	c.Draw();
	return 0;
	return 0;
}