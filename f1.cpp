#include<iostream>//header file//
using namespace std;
class branch
{
        public:
                void display()//function//
                {
                        cout<<"Hello there";
                        cout<<"How are you?";
                }
		void add()
		{
			int x=10,y=20,sum;
			sum =x+y;
			return sum;
		}

};
int main()
{
        branch b1;
	b1.display();//display function calling//
	b1.add();//add function calling//

 return 0;
}


