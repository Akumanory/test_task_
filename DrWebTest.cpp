#include <iostream>

#include "INotFoundException.h"
#include "Dictionary.h"


int main()
{
	Dictionary<int, char> dict;

	dict.set(27, 'a');
	dict.set(17, 'a');

	try
	{
		dict.get(27);
		dict.get(2);
	}
	catch (const not_found_exception<int> &ex)
	{
		std::cout << "Key: " << ex.get_key() << " not found" << std::endl;
	}

	return 0;
}