#include <iostream>
#include <thread>
using namespace std;
  
// A dummy function
void foot(int A)
{
    for (int i = 0; i < A; i++) {
        cout << "Thread using function"
               " pointer as callable\n";
    }
}
  
// A callable object
class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using function"
                  " object as  callable\n";
    }
};
  
int main()
{
    cout << "Threads 1 and 2 and 3 "
         "operating independently" << endl;
  
    thread th1(foot, 3);
  
    thread th2(thread_obj(), 3);
  
    auto k = [](int x) {
        for (int i = 0; i < x; i++)
            cout << "Thread using lambda"
             " expression as callable\n";
    };
  
    thread th3(k, 3);
  
    
    th1.join();
  
    
    th2.join();
  
    
    th3.join();
  
    return 0;
}
