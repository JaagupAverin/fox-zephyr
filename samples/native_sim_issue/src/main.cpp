#include <stdio.h>
#include <functional>

using MyFunction = std::function<void()>;

void my_function()
{
	printf("Hello from my_function!\n");
}

void run_function(MyFunction fn)
{
	fn();
}

int main(void)
{
	run_function(my_function);
	return 0;
}
