#include<iostream>
#include<string.h>

using namespace std;


class Hotel {
	private : 
	int hotel_id;
	char name[100];
	int staff_size;
	int room_size;
	int establish_year;
	char rating_type[100];
	char hotel_address[100];

    public :
	void setData(int hotel_id,char name[],int staff_size,int room_size,int establish_year,char rating_type[],char hotel_address[])
{
	this->hotel_id=hotel_id;
	strcpy(this ->name,name);
	this->staff_size=staff_size;
	this->room_size=room_size;
	this->establish_year=establish_year;
	strcpy(this->hotel_address,hotel_address);
	strcpy(this->rating_type,rating_type);
}
	 
	void getdata()
	{
	
	cout<<"id= "<<hotel_id<<endl
	    <<"name= "<<name<<endl
	    <<"staff size = "<<staff_size<<endl
	    <<"room size= "<<room_size<<endl
	    <<"establish year= "<<establish_year<<endl
	    <<"hotel_address="<<hotel_address<<endl
	    <<"rating= "<<rating_type<<endl;
}

	
};



int main()
{
	Hotel h;
	
	h.setData(1,"taj",105,100,1999,"mumbai","5star");
	h.getdata();
	
}

