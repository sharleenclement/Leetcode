1. Sort the vector then apply the conditions accordingly. **O(NlogN)**
2. When we see to find max/min sum , element we think of sorting . But what if i tell
you do sorting but in a better and optimized way, sort only those elements which
need to be sorted.
We have to negate any index element  k times so array elements yields max sum. So it is clear we have to always negate smallest element, so we can use "min heap" which will ensure you have smallest element always on top no matter how many insertion or deletion you make.
So, use priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),nums.end()); - stores the values from the nums vector in a min heap. Here, the element at the top will always be the smallest.
![](https://files.codingninjas.in/article_images/time-and-space-complexity-of-stl-containers-4-1648879223.jpg)