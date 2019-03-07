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
	b1.display();
	b1.add();

 return 0;
}


