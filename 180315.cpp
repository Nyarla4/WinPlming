#include<iostream>
using namespace std;
/*
// Point Ŭ������ �����Ѵ�.
class Point
{
public:
	int *arr;
	// ��� ������
	int x, y;
	// ��� �Լ�
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
	// �޸𸮸� �����Ѵ�.
	delete[] arr;
	arr = NULL;
}*/
/*class AccessControl
{
public://����
	char publicData;
	void publicFunc() {};
protected://�Ϻΰ���
	int protectedData;
	void protectedFunc() {};
private://�����
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
		// �θ��� ����� ������ �õ�
		//n = priv; // ����
		n = prot; // ����
		n = pub; // ����
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
	// ��ü�� �����Ѵ�.
	Point pt1, pt2;
	// pt1, pt2�� �ʱ�ȭ �Ѵ�.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;
	// pt1, p2�� ������ ����Ѵ�.
	pt1.Print();
	pt2.Print();
	Point pt(50, 50);
	Point* p1 = new Point(); // ����Ʈ ������ ���
	Point* p2 = new Point(100, 100); // �����ִ� ������ ���
	Point* p3 = new Point(pt); // ���� ������ ���
	p1->Print();
	p2->Print();
	p3->Print();
	delete p1;
	delete p2;
	delete p3;
	*/
	/*
	// ��ü�� �����ϰ�, �� ����� �����غ���
	AccessControl ac;
	ac.publicData = 'A'; // ����
	ac.publicFunc(); // ����
	//ac.protectedData = 100; // ����
	//ac.protectedFunc(); // ����
	//ac.privateData = 4.5f; // ����
	//ac.privateFunc(); // ����
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