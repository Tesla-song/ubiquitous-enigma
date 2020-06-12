/**
 * create 2020-02-12
 */

#ifndef _Set__

#define _Set__
#include <stdio.h>
template<typename K>
class Set
{
public:
	/**
	 * @brief
	 * @param vale
	*/
	virtual Set<K>& add(K vale) = 0;
	/**
	 * @brief
	 * @param index
	 * @return
	*/
	virtual K get(int index) = 0;
	/**
	 * @brief
	 * @return
	*/
	virtual K* toArray() = 0;
	/**
	 * @brief
	 * @return
	*/
	virtual bool isEmpty() = 0;
	/**
	 * @brief
	 * @return
	*/
	virtual int size() = 0;
	/**
	 * @brief
	 * @return
	*/
	virtual bool contains(K value) = 0;
	/**
	 * @brief
	 * @param set
	*/
	virtual void removeAll(Set<K> set) = 0;
	/**
	 * @brief
	 * @param index
	*/
	virtual void remove(int index) = 0;

	virtual void remove(K value)=0;
};

#endif // !_Set__
#ifndef _HashSet__

#define _HashSet__
template<typename K>
class HashSet : public Set<K>{
	int valueSize;
	int cacp;
	struct Node
	{
		K value;
		Node* next;
	};
	Node* tail;
	Node* head;
	HashSet<K>& mythis();
public:
	HashSet(int cacp);
	HashSet();
	HashSet<K> operator=(HashSet<K>);

	virtual Set<K>& add(K vale);

	virtual K get(int index);

	virtual K* toArray();

	virtual bool isEmpty();

	virtual int size();

	virtual bool contains(K value);

	virtual void removeAll(Set<K> set);

	virtual void remove(int index);

	virtual void remove(K value);
};
#endif // !_HashSet__