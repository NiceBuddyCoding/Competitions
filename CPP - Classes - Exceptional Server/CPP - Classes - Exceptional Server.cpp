#include <iostream>
#include <cmath>
#include <std::vector>

class Server
{
private:
	static int m_load;
public:
	static int compute(long long A, long long B)
	{
		m_load += 1;
		if(A < 0)
        {
			throw std::invalid_argument("A is negative");
		}
		std::std::vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0)
            throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad()
	{
		return m_load;
	}
};
int Server::m_load = 0;

int main()
{
	int T; std::std::cin >> T;
	while(T--)
    {
		long long A, B;
		std::std::cin >> A >> B;

		try
		{
		    std::std::cout<< Server::compute(A,B)<<std::std::endl;
		}
		catch (std::bad_alloc& error)
		{
            std::std::cout<<"Not enough Memory"<<std::std::endl;
		}
		catch (std::exception& error)
		{
		    std::std::cout<<"Exception: "<<error.what()<<std::std::endl;
		}
		catch(...)
        {
            std::std::cout<<"Other Exception"<<std::std::endl;
        }
    }
	std::std::cout << Server::getLoad() << std::std::endl;
	return 0;
}
