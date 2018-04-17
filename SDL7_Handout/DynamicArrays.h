#ifndef _DYNAMICARRAYS_
#define _DYNAMICARRAYS_


#define DYNAMIC_ARRAY_CHUNK_SIZE 5
#define DYNAMIC_ARRAY_INITIAL_CAPACITY 5

template <class T>	
class DynamicArray
{
public:

	DynamicArray()
	{
		mSize = 0;
		mCapacity = DYNAMIC_ARRAY_INITIAL_CAPACITY;
		mArray(new[DYNAMIC_ARRAY_CHUNK_SIZE]);
	}

	~DynamicArray();

	unsigned int size() const;
	int operator[ ](unsigned int index);
	int operator[ ](unsigned int index) const;

	void push_back(int value)
	{
		if (mSize < mCapacity)
		{
			mArray[mSize] = value;
			mSize++;		
		}
		else if (mSize == mCapacity)
		{
			mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;
			mArray[mSize];
			mSize++;
		}
	}

private:

	void increaseCapacity();
	int *mArray = nullptr;

	unsigned int mCapacity = DYNAMIC_ARRAY_INITIAL_CAPACITY;
	unsigned int mSize = 0;
};

#endif // !_DYNAMICARRAYS_
