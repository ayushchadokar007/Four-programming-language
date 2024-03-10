#include<iostream>
using namespace std;
class student                                 
{
    private:
    string name= "ayush";
   // string name;

    public:
    void setname(string n)                    //set,hi hello... are used for the input
    {
        name=n;
    }
                            
    string getname()                       //get,hi, any function are used for the output,return 
    {                                    
       return name;
    }
};

int main()
{
    student y;
   // y.setname("VIRAJ"); 
    cout<<"number: "<<y.getname();
    return 0;
}