/*
 * returns the smallest element in the array 
 */
int arr_min(int *array, int size);

/*
 * returns the largest element in the array
 */
int arr_max(int *array, int size);

/*
 * sets all array elements to 0 
 */
int arr_clear(int *array, int size);

/*
 *  returns the average of all elements
 */
double arr_average(int *array, int size);

/*
 * returns the sum of all array elements
 */
int arr_sum(int *array, int size);

/*
 *  returns whether the array contains the specified element
 */
int arr_contains(int *haystack, int size, int needle);

/*
 * receives two arrays, merges them into one
 * and returns a pointer to the resulting array
 */
int *arr_merge(int *array1, int size1, int *array2, int size2); 

