#include<iostream>
using namespace std;

class Dateclass {
	private:
		int m_date;
		int m_month;
		int m_year;
	public:
		void setdata(int date, int month, int year)
		{
			m_date = date;
			m_month = month;
			m_year = year;
		}
		void printdata()
		{
			cout<<m_date<<"/"<<m_month<<"/"<<m_year;
		}
		
	
};

int main()
{
	class Dateclass d; 
	d.setdata(16,12,2002);
	d.printdata();
	
	return 0;
}
