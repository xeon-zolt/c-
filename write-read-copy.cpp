#include <iostream>
#include <fstream>
using namespace std;

class file {
     public:
	void write()
	{
	char a[100];
	cout<<"enter data to write to file"<<endl;
	cin.getline(a,100);
	ofstream write;
	write.open("file.txt");
	write<<a;
	write.close();
	}

	void read()
	{
	char a;
	ifstream read;
	read.open("file.txt");
	while(!read.eof())
		{
		read.get(a);
		cout<<a;				
		}
	}
  	
	void copy()
	{
	ofstream o("file1.txt");
        ifstream ob("file.txt");
        char ch;
       	while(!ob.eof())
   	 {
        ob.get(ch);
        o.put(ch);
        cout<<ch;
    	}
    	o.close();
    	ob.close();	
	}
};

int main()
 {
 file example;
 example.write();
 example.read();
 example.copy();
 } 
