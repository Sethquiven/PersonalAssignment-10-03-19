// PersonalAssignment1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ctime"
#include "iostream"
using namespace std;

int main()
{
	int n,sum;
	sum = 0;
	cin>>n;
	int a=0;
	int b=0,c=0,d=0;
	float y = 0.00, p = 0.00, z = 0.00, q = 0.00, h = 0.00,w = 0.00,x=0.00,u=0.00,v=0.00,e=0.00,f=0.00,g=0.00;
	for (sum = 0; sum < n; sum++) {
		a = rand() % 6;
		c = rand() % 200;
		b = rand() % 200;
		d = rand() % 200;
		if (a % 6 == 0) {
			w = b*c;
			u = w + d;
			cout << b << "*" << c<<"+"<<d << "=" << u << "\n";
		}
		else if (a % 6 == 1) {
			x = b * c;
			v = x - d;
			cout << b << "*" << c <<"-"<<d<< "=" << v << "\n";
		}
		else if (a % 6 == 2) {
			y = b / c;
			p = y + d;
			cout << b << "/" << c<<"+"<<d << "=" << p << "\n";
		}
		else if (a % 6 == 3) {
			z = b / c;
			q = z - d;
			cout << b << "/" << c<<"-"<<d << "=" << q << "\n";
		}
		else if (a % 6 == 4) {
			e = b + c;
			f = e - d;
			cout << b << "+" << c << "-" << d << "=" << f << "\n";
		}
		else if (a % 6 == 5) {
			g = b * c;
			h = g / d;
			cout << b << "*" << c << "/" << d << "=" <<h<< "\n";
		}
	}
	printf("张文君 1753933");
    return 0;
}

