#include<iostream>
#pragma once//���Ǵ� 1ȸ��
using namespace std;
class Shape
{
public:
	float _x, _y;
	Shape();
	Shape(float x, float y);//�����ε�:���ڰ� �ٸ���� �˸������� ����
	virtual void Draw() const;//���� ���� ��ӵȴ�
};
Shape::Shape() {}
Shape::Shape(float x, float y)
{
	_x = x;_y = y;
}
void Shape::Draw()const//const:����Ұ�
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
	void Draw() const;//�������̵�:�θ� ��ü�� �Լ��� �ڽ� ��ü���� ������
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
	//�����?
	/*Shape a(100, 40);
	Rectangle b(120, 40, 50, 20);
	Circle c(200, 100, 50);
	a.Draw();
	b.Draw();
	c.Draw();
	return 0;
	return 0;*/
	/*
	�θ�Ŭ������ �����ͷ� �ڽ� ��ü�� ����ų���ִ�
	=>�θ� �����ͷ� �ڽĵ��� ���� �� �� �ִ�
	*/
	Shape* shapes[5] = { NULL };
	shapes[0] = new Circle(100, 100, 50);
	shapes[1] = new Rectangle(300, 300, 100, 100);
	shapes[2] = new Rectangle(200, 100, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);
	for (int i = 0; i < 5; ++i)
		shapes[i]->Draw();
	/*Draw�Լ��� Shape, Rectangle, Circle �� ���ο� �ִ�
	�� �� �θ�(Shape)�� Draw�� ȣ���
	=>���� �̸��� �Լ��� ������ ������ Ÿ���� �켱�Ǳ� ����
	Shape���� void Draw() const;�� �տ� Virtual�� �߰� �Ǹ� ������ Draw�� ������ �ȴ�
	=>�����Լ�*/
	for (int i = 0; i < 5; ++i)
	{
		delete shapes[i];
		shapes[i] = NULL;
	}
}
//�������� �����ϴ°�:�ҽ�����+vcprj���ñ�+sln����