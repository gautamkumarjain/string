// given an integer representing the capicity of a cyber 
//cafe and a sequence representing entry and exit logs of customer 
//find the total number of custiomers who could not get any computer


#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
// Given entry/exit logs of customers and a cyber cafe's capacity,
// find the total number of customers who could not get any computer
int process(string sequence, int capacity)
{
    // to store the count of unattended customers
    int unattended = 0;
 
    // keep track of the customers who were allocated computers
    unordered_set<char> allocated;
 
    // keep track of customers who are currently inside the cyber cafe
    // (irrespective of whether they are attended or not)
    unordered_set<char> visited;
 
    // traverse the given sequence
    for (char c: sequence)
    {
        // If a customer arrives at the cyber cafe
        if (visited.find(c) == visited.end())
        {
            // mark customer as visited
            visited.insert(c);
 
            // if a computer is available, allocate it to the customer
            if (allocated.size() < capacity) {
                allocated.insert(c);
            }
            // if no computer is available, increment the unattended customer's count
            else {
                unattended++;
            }
        }
        // if a customer is leaving the cyber cafe, mark the customer as unvisited
        // and deallocate the computer
        else {
            visited.erase(c);
            allocated.erase(c);
        }
    }
 
    return unattended;
}
 
int main()
{
    string sequence = "ABCDDCEFFEBGAG";
    int capacity = 3;
 
    cout << process(sequence, capacity) << endl;
 
    return 0;
}