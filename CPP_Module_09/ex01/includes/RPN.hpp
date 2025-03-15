#pragma once

#include <stack>
#include <stdexcept>
#include <algorithm>
#include <cctype>
#include <climits>

# include <string>
# include <stack>

class RPN{
	private:
		std::string _expression;
		std::stack<int> _stack;

	public:
		RPN();
		RPN(const std::string &expression);
		RPN(const RPN &copy);
		~RPN();

		RPN &operator=(const RPN &copy);

		void newExp(const std::string &expresssion);
		int solve();
};
