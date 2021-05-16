#include<iostream>
#include<iomanip>
using namespace std;

class TIME
{
	 private:
	 	int seconds;
	 	int hh,mm,ss;
	public:
		void getTime(void);
		void convertintoseconds(void);
		void displaytime(void);
};
void TIME::getTime(void)
{
	cout<<"enter time:"<<endl;
	cout<<"hours?";
	cin>>hh;
	cout<<"minutes?";
	cin>>mm;
	cout<<"seconds?";
	cin>>ss;
}
void TIME::convertintoseconds(void)
{
	seconds=hh*3600+mm*60+ss;
}
void TIME::displaytime(void)
{
	cout<<"The time is="<< setw(2) << setfill('0')<< hh << ":"
	                    << setw(2) << setfill('0')<< mm << ":"
	                    << setw(2) << setfill('0')<< ss << endl;
	cout<<"Time in total seconds: " <<seconds;                   
}
int main()
{
	TIME T;
	T.getTime();
	T.convertintoseconds();
	T.displaytime();
	
	return 0;
}
