- ## 描述

  C 库函数 **void qsort(void \*base, size_t nitems, size_t size, int (\*compar)(const void \*, const void\*))** 对数组进行排序。

  ## 声明

  下面是 qsort() 函数的声明。

  ```
  void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
  ```

  ## 参数

  - **base** -- 指向要排序的数组的第一个元素的指针。
  - **nitems** -- 由 base 指向的数组中元素的个数。
  - **size** -- 数组中每个元素的大小，以字节为单位。
  - **compar** -- 用来比较两个元素的函数。