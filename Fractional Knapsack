// C++ program to Fractional Knapsack 
// Problem using STL 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find maximum profit 
void maxProfit(vector<int> profit, 
			vector<int> weight, int N) 
{ 

	// Number of total weights present 
	int numOfElements = profit.size(); 
	int i; 

	// Multimap container to store 
	// ratio and index 
	multimap<double, int> ratio; 

	// Variable to store maximum profit 
	double max_profit = 0; 
	for (i = 0; i < numOfElements; i++) { 

		// Insert ratio profit[i] / weight[i] 
		// and corresponding index 
		ratio.insert(make_pair( 
			(double)profit[i] / weight[i], i)); 
	} 

	// Declare a reverse iterator 
	// for Multimap 
	multimap<double, int>::reverse_iterator it; 

	// Traverse the map in reverse order 
	for (it = ratio.rbegin(); it != ratio.rend(); 
		it++) { 

		// Fraction of weight of i'th item 
		// that can be kept in knapsack 
		double fraction = (double)N / weight[it->second]; 

		// if remaining_weight is greater 
		// than the weight of i'th item 
		if (N >= 0 
			&& N >= weight[it->second]) { 

			// increase max_profit by i'th 
			// profit value 
			max_profit += profit[it->second]; 

			// decrement knapsack to form 
			// new remaining_weight 
			N -= weight[it->second]; 
		} 

		// remaining_weight less than 
		// weight of i'th item 
		else if (N < weight[it->second]) { 
			max_profit += fraction 
						* profit[it->second]; 
			break; 
		} 
	} 

	// Print the maximum profit earned 
	cout << "Maximum profit earned is:"
		<< max_profit; 
} 

// Driver Code 
int main() 
{ 
	// Size of list 
	int size = 4; 

	// Given profit and weight 
	vector<int> profit(size), weight(size); 

	// Profit of items 
	profit[0] = 100, profit[1] = 280, 
	profit[2] = 120, profit[3] = 120; 

	// Weight of items 
	weight[0] = 10, weight[1] = 40, 
	weight[2] = 20, weight[3] = 24; 

	// Capacity of knapsack 
	int N = 60; 

	// Function Call 
	maxProfit(profit, weight, N); 
}
