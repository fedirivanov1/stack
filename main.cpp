#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
	Stack st;
	st.push(6);
	st.push(60);
	st.push(40);
	st.push(100);
	st.push(50);
	st.push(40);
	st.show();
	//st.pop();
	//st.show();
	st.multiPop(2);
	st.show();
}