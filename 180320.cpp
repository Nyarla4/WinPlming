#include<iostream>
#pragma once//정의는 1회만
using namespace std;
class Shape
{
public:
	float _x, _y;
	Shape();
	Shape(float x, float y);//오버로딩:인자가 다를경우 알맞은것을 선택
	virtual void Draw() const;//가상 또한 상속된다
};
Shape::Shape() {}
Shape::Shape(float x, float y)
{
	_x = x;_y = y;
}
void Shape::Draw()const//const:변경불가
{
	cout << "[Shape] position = (" << _x << "," << _y << ")\n";
}
class Rectangle :public Shape
{
public:
	float _width, _height;
	Rectangle(float x, float y, float w, float h);
	void Draw() const;
};
Rectangle::Rectangle(float x, float y, float w, float h) :Shape(x, y)
{
	_width = w;_height = h;
}
void Rectangle::Draw() const
{
	cout << "[Rectangle] position = (" << _x << "," << _y << "), size = (" << _width << "," << _height << ")\n";
}
class Circle :public Shape
{
public:
	float _radius;
	Circle(float x, float y, float radius);
	void Draw() const;//오버라이딩:부모 객체의 함수를 자식 객체에서 재정의
};
Circle::Circle(float x, float y, float radius) :Shape(x, y)
{
	_radius = radius;
}
void Circle::Draw() const
{
	cout << "[Circle] position = (" << _x << "," << _y << "), radius = " << _radius << "\n";
}
int main()
{
	//↓과제?
	/*Shape a(100, 40);
	Rectangle b(120, 40, 50, 20);
	Circle c(200, 100, 50);
	a.Draw();
	b.Draw();
	c.Draw();
	return 0;
	return 0;*/
	/*
	부모클래스의 포인터로 자식 객체를 가리킬수있다
	=>부모 포인터로 자식들을 관리 할 수 있다
	*/
	Shape* shapes[5] = { NULL };
	shapes[0] = new Circle(100, 100, 50);
	shapes[1] = new Rectangle(300, 300, 100, 100);
	shapes[2] = new Rectangle(200, 100, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);
	for (int i = 0; i < 5; ++i)
		shapes[i]->Draw();
	/*Draw함수는 Shape, Rectangle, Circle 셋 전부에 있다
	이 때 부모(Shape)의 Draw가 호출됨
	=>같은 이름의 함수의 실행은 포인터 타입이 우선되기 때문
	Shape에서 void Draw() const;의 앞에 Virtual이 추가 되면 각자의 Draw로 실행이 된다
	=>가상함수*/
	for (int i = 0; i < 5; ++i)
	{
		delete shapes[i];
		shapes[i] = NULL;
	}
}
//과제에서 제출하는것:소스파일+vcprj뭐시기+sln파일