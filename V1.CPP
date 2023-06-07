#include <iostream.h>
#include<conio.h>
class Abhay {
public:
    float totalProduction;
    float totalSales;
    float numProducts;
    float pl;
    float production;
    float sales;

    Abhay()
     {
	totalProduction=0;
	totalSales=0;
	cout<<"Enter number of product: ";
	cin>>numProducts;
	cout<<"\n";
	}
};
class Nisarg: public Abhay {
public:
void viral();
       };
class Arav : public Nisarg
{
public:
    void karma()
    {
	cout << "Total Production: " << totalProduction << endl;
	cout << "Total Sales:      " << totalSales << endl;

	pl = totalSales - totalProduction;
	if (totalProduction > totalSales)
	{
	    cout << "\n\nLOSS: " << pl << endl;
	}
	else if (totalSales == totalProduction)
	{
	    cout << "\n\nPRODUCTION & SALES ARE EQUAL" << endl;
	} else
	{
	    cout << "\n\nPROFIT: " << pl << endl;
	}
    }
};
void Nisarg:: viral()
       {
	for (int i = 1; i <= numProducts; i++)
	{
	    cout << "Enter production for product " << i << ": ";
	    cin >> production;
	    totalProduction += production;

	    cout << "Enter sales for product      " << i << ": ";
	    cin >> sales;
	    totalSales += sales;
	    cout<<"\n";
	}

    }

void main()
{
    clrscr();
    Arav s;
    s.viral();
    s.karma();
    getch();

}