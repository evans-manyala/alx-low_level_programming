# 0x1A. C - Hash tables

# Resources

    What is a HashTable Data Structure - Introduction to Hash Tables , Part 0

        Hash tables, also known as hash maps, are data structures used in computer science to implement an associative array abstract data type. They are particularly useful for implementing dynamic sets or caches, where the goal is to quickly insert, delete, or look up data based on a key. In C programming, hash tables are typically implemented using arrays and linked lists.

    Here's a brief overview of how hash tables work:

        Hash Function: A hash function is used to map keys to indices in the array. The idea is to convert the key into an index within a predefined range. The hash function should ideally distribute keys uniformly across the array to avoid collisions (multiple keys mapping to the same index).

        Array: The hash table is implemented as an array of buckets. Each bucket can store one or more key-value pairs. The array size is typically chosen to be larger than the expected number of keys to minimize collisions.

        Collision Handling: Collisions occur when two keys hash to the same index. There are various techniques to handle collisions, and one common approach is to use linked lists. Each array index contains a linked list of key-value pairs that hash to the same index.

        Key-Value Pairs: Each element in the hash table is a key-value pair. The key is used to compute the hash, and the value is the associated data.
