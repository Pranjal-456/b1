#include<iostream>
#include<string.h>

using namespace std;

class Highschool{
	private : 
	int stu_id;
	char name[100]  ;
	int stu_roll_no;
	int stu_std;
	int stu_age;
	char stu_contact[10] ;
	static char stu_edu_institute_name[100];
	char stu_address;
	float per ;
	
    public :
	void setdata(){
	 stu_id=1;
	 strcpy(name,"pranjal");
	 stu_roll_no=1;
	 stu_std=12;
	 stu_age=18;
	 per=92.80;
	 strcpy(stu_contact,"9327190484");
	 cout<<"student address= "<<stu_address<<endl;
	cin>>stu_address;
}
	void getdata(){
	
	cout<<"id="<<stu_id<<endl
	    <<"name= "<<name<<endl
	    <<" stu_roll_no= "<<stu_roll_no<<endl
	    <<"stu_std= "<<stu_std<<endl
	    <<"stu_age= "<<stu_age<<endl
	    <<"stu_contact= "<<stu_contact<<endl
	    <<"stu_edu_institute_name"<<stu_edu_institute_name<<endl
	    <<"stu_address"<<stu_address<<endl
	    <<"per= "<<per<<endl;
}

	
};


char  Highschool::stu_edu_institute_name[100] ="parmsukha gurukul";

int main()
{
	Highschool h;
	
	h.setdata();
	h.getdata();
	
}

