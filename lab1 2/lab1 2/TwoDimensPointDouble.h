#pragma once
using namespace std;
class TwoDimensPointDouble {
private:
	double x;
	double y;
	double val;
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
	void set_val(double _val)
	{
		val = _val;
	}
	double get_val()
	{
		return val;
	}
};
