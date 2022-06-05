#include <iostream>
#include <cmath>
#include <exception>
using namespace std;

class InvalidDuration : exception{};

class Interest{
    protected: 
        int duration;
        double interest_rate;
        double principal_amount;
    public:
        Interest(int d = 0, double i = 0.0, double p = 0.0) : duration(d), 
        interest_rate(i), principal_amount(p){}


        		int getInterest();                     //LINE-1
};

class SimpleInterest : public Interest{         //LINE-2
    public:
        SimpleInterest(int d = 0, double i = 0.0,   double p = 0.0) : 
                               Interest(d, i, p) {}
        int getInterest(){
            if(duration < 0)
                throw InvalidDuration();       //LINE-3
            return (int)(principal_amount * interest_rate * duration);		
		}
};

class CompoundInterest : public Interest{           //LINE-4
    int compounding_frequency;
    public:
        CompoundInterest(int d = 0, double i = 0.0, double p = 0.0, int f = 0) : 
        Interest(d, i, p), compounding_frequency(f) {}
        int getInterest(){
            if(duration < 0)
                throw InvalidDuration();   //LINE-5
            return (int)((principal_amount * 
                        pow((1 + interest_rate / compounding_frequency),
                    duration * compounding_frequency)) - principal_amount);		
		}	
};

int main(){
    double p, i;
    int d, f;
    cin >> p >> i >> d >> f;
    SimpleInterest si(d, i, p);
    CompoundInterest ci(d, i, p, f);
	
    Interest *in[2] = {&si, &ci};
	
     for(int i = 0; i < 2; i++){
        try{
            cout << in[i]->getInterest() << " ";
        }
        catch(InvalidDuration& e){ cout << "invalid duration" << " "; }
	}
	
    return 0;
}