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
		void show()
		{
			cout<<"This is a practise program";
		}

			
};
int main()
{
        branch b1;
	b1.display();//function calling 1//
	b1.show();//function calling 2//

 return 0;
}


