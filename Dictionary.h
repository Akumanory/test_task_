#pragma once

#include <map>

#include "IDictionary.h"
#include "NotFoundException.h"

template<class Key, class Value>
class Dictionary : public dictionary<Key, Value>
{
public:
    const Value& get(const Key& key) const
    {
        auto it = _test_map.find(key);
        if (it == _test_map.end())
            throw NotFoundExceptions<Key>(key);
        return _test_map.at(key);
    }
    void set(const Key& key, const Value& value)
    {
        _test_map[key] = value;
    }

    bool is_set(const Key& key) const
    {
        return _test_map.find(key) != _test_map.end();
    }
private:
    std::map<Key, Value> _test_map;
};