#include<iostream>
using namespace std;
int main()
{
	char cust_name[20];
	int cust_no;
	int quantity;
	int price_total;
	char product_name[20];
	int total;
	cout <<"enter your name: ";
	cin>> cust_name;
	
	cout<<"enter your number: ";
	cin>> cust_no;
	
	cout<<"enter quantity: ";
	cin>> quantity;
	
	cout<<"enter price total: ";
	cin>> price_total;
	
	cout<<"enter product name: ";
	cin>> product_name;
	
	total=price_total*quantity;
	
	cout<<"total bill for goods: "<<total;
}
	
	
