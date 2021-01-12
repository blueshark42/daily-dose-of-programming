# Custom Vectors
- Difficulty: Hard (Extra)
- Recommended language: C

## Part 1
The library that contained the code for our dynamic arrays has been corrupted and deleted. Meaning dynamic arrays (vectors) that do not have a static/constant size
e.g. can have 5 values and add or remove them. These dynamic arrays are helpful as we do not need to know the initial size of our array and we can change it over time.

Your goal is to create vectors that are similiar to ones found in C++'s `std::vector<T>`.

To pass this part, your vectors should be able to:
| Support | Description |
| --------------- | --------------- |
| init | Create the vector, type of `int` is enough |
| add | Add new values to the vector, on the end |
| remove | Remove values from the vector by index |
| modify | Modify indexes of choice, such as selecting one like `arr[3]` |

Not all of them have to be functions, they just have to have the ability to perform those tasks.

## Part 2
The dynamic array is good but of course we need to store other things as well, not just numbers. Modify your code to support different data types.
