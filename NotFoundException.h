#pragma once

#include "INotFoundException.h"

template<class Key>
class NotFoundExceptions : public not_found_exception<Key>
{
public:

	NotFoundExceptions(const Key& key)
	{
		_key = key;
	}

	const Key& get_key() const noexcept
	{
		return _key;
	}
private:
	Key _key = 0;
};