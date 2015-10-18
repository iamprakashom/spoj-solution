#include <iostream>
#include <vector>
using namespace std;

int main() {

	// your code here
    int n;
	vector<int> vec;
	for(int i = 0; i < 100; i++)
    {
        cin>>n;
        vec.push_back(n);
    }
	for(vector<int>::iterator it = vec.begin(); it < vec.end(); ++it)
    {
        if(*it == 42)
            break;
        else
            cout<<*it<<endl;
    }
	return 0;
}
