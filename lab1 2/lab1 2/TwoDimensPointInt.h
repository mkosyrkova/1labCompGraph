#pragma once
using namespace std;
class TwoDimensPointInt {
private:
	double x;
	double y;
	int val;
public:
	void set_x(double _x)
	{
		x = _x;
	}
	double get_x()
	{
		return x;
	}
	void set_y(double _y)
	{
		y = _y;
	}
	double get_y()
	{
		return y;
	}
	void set_val(int _val)
	{
		val = _val;
	}
	int get_val()
	{
		return val;
	}
};