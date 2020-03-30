#pragma once
#include <functional>
namespace Hash
{
	typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;

	unsigned int badHash(const char* data, unsigned int length);

	unsigned int BKDRHash(const char* data, unsigned int length);

	unsigned int colorHash(const char* data, unsigned int length);

	unsigned int Melody(const char* data, unsigned int length);

	static HashFunc defaultHash = badHash;
};

