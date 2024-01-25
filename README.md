# DSA yaaa

#array
# minimum and maximum in an array 

[Problem Link](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)
```cpp:6e047d76-772f-4fc2-82e7-66db674238fa
pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi = INT_MIN;
    long long mini = INT_MAX;
    for(int i=0; i<n; i++){
        maxi = max(a[i],maxi);
        mini = min(a[i], mini);
    }
    return {mini, maxi};
    
}
```
# reverse an array 

TC - O(n)
```cpp
int arr = {1,2,3,4,5};
int s=0, e=4;
while(s<e){
	swap(arr[s],arr[e]);
	s++;
	e--;
}
```

# missing number
**Input:**
	N = 5
	A[] = {1,2,3,5}
**Output:** 4

TC - O(n)
```cpp
int a[4]={1,2,3,5};
int n=5;

// sum of all elements in arrays
int sum = 0;
for(int i=0;i<n-1;i++){
	sum+=a[i];
}

// sum of n number
int res = n*(n+1)/2;
cout<< res-sum; // gives missing number
```

# rotate array by 1

```cpp
int arr = 
```

![image](https://github.com/Sujithamathvini/DSA/assets/70484186/fb64e5db-ee4f-4a4b-9446-c32693304add)


![[image]](Pasted image 20240124184332.png)
