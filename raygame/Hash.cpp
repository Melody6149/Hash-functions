#include "Hash.h"

namespace Hash {
	unsigned int Hash::badHash(const char * data, unsigned int length)
	{
		//implementation of a basic addition hash
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash += data[i];
		}
		return hash;
	}

	unsigned int Hash::BKDRHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFfF);
	}

	unsigned int Hash::colorHash(const char * data, unsigned int length)
	{
		unsigned int hash = 0;
		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0xFFFFFF);
	}

	unsigned int Hash::Melody(const char * data, unsigned int length)
	{
		unsigned int hash = 0;
		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313) + data[i] * 648 * 'M' ;
		}

		return (hash);
	}
}