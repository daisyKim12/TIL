# Hash table


## What is Hash Table
Hash table is a data structure that saves data in (Key, Value) format. Using Key in searching a data hash table provides a high speed search.

![Hash Table](/X/Screenshot%20from%202023-08-31%2016-53-44.png)


- Hash function: Hash function process `key` into unique `index`
- Index: Using `index` provide by hash function value is saved in a array name bucket and can be searched easily
- Bucket: Values are saved in a array with the `index` hash function provides.


ex)
(Key, Value) = ("John Smith", "521-1234")
size_of_table = 16

hash function:
index = hash_function("John Smith") % 16
saving value in bucket using index
array[index] = "521-1234"

## Hash Function
Hash function's imoprtant role is to make a unique index for every key.

**Hashing** is the process of transforming any given key or a string of characters into another value. This is usually represented by a shorter, fixed-length value or key that represents and makes it easier to find or employ the original string.

1. Division Method
2. Digit Folding
3. Multiplication Method
4. Univeral Hashing

## Hash Collision
Ideally two keys always generate different index. But in reality two keys can also generate an identical hash. This phenomenon is called a collision.

A good hash function never produces the same hash value from two different inputs. 

`Open addressing`` and `separate chaining` are two ways of dealing with collisions when they occur. 

1. Open addressing
Open addressing handles collisions by storing all data in the hash table itself and not using additional storage. If the index is overlaped change the index with certain order.
![Open addressing](/X/Screenshot%20from%202023-08-31%2017-16-26.png)
- double hashing
- linear probing
- quadratic probing

2. Seperate chaining
Seperate chaining using additional storage to save value with the same key. And when access by the key with index having maky key to connect, system connects(chains) correct value with the key
![Seperate chaining](/X/Screenshot%20from%202023-08-31%2017-16-07.png)

## Time Complexity
Each key value, having a unique index determined by a hash function, allows direct access, enabling data retrieval with an average time complexity of O(1). 
However, in cases of data collisions, where chaining involves traversing linked lists, the time complexity can increase up to O(N).