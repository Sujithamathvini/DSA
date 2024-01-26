#array
# minimum and maximum in an array [Problem Link](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)

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
int arr[6] = [2,7,4,11,5,8];
int n = arr.size();
int temp = arr[n-1];
for(int i=n-2;i>=0;i++){
	arr[i+1]=arr[i]; // from 0 to n-2 elements are pushed one step forward
}
arr[0]=temp; // the last element (temp) is placed in front of array
```

![image](https://github.com/Sujithamathvini/DSA/assets/70484186/fb64e5db-ee4f-4a4b-9446-c32693304add)


# missing and repeating number

Input -
arr = [4,6,3,2,1,1]
n = 6

## Approach 1 : Hashing

Explanation -
if count > 2 => repeating num
if count == 0 => missing num

**TC : O(2n), SC : O(n)**

## Approach 2 : mathematical

Explanation -
s = sum of elements
sn = sum of n num
s2 = sum of square of elements
s2n = sum of square of n num
x = repeating num
y = missing num

(4+6+3+2+1+1) - (1+2+3+4+5+6) = -4
s-sn =-4
sn = (n(n+1))/2
x-y = -4 -> (1) // val1

(4^2+6^2+3^2+2^2+1^2+1^2) - (1^2+2^2+3^2+4^2+5^2+6^2) = -24
s2-s2n = -24
s2n = (n(n+1)(2n+1))/6
x^2-y^2 = -24 => (x+y)(x-y) = -24 => x+y = -24/(x-y) => x+y = -24/-4 = 6 // val2
x+y = 6 -> (2)

(1)+(2) => x+y+x-y = -4+6 => 2x = 2 => x = 1 // repeating num
put x = 1 in (2) => x-y = val1 => -y = val1 -x => y = x-val1
=> 1-y = -4 => -y = -4-1 => y = 4+1 => y = 5 // missing num

```cpp
int sn = (n(n+1))/2;
int s2n = (n(n+1)(2n+1))/6
int s=0, s2=0;

for(int i=0;i<a.size();i++){
	s+=a[i];
	s2+=(long long)a[i]+(long long)a[i];
}
int val1 = s-sn;
int val2 = s2-s2n;
val2 = val2/val1;

int x = (val1+val2)/2; // repeating num
int y = x - val1; // missing num

return make_pair(x,y);
```

**TC : O(n)**

# Sorting array
## Selection Sort

### Explanation -
- find the "smallest in unsorted arr"
- "swap" 1st unsorted element and smallest
- now, an element is sorted
```cpp
for(int i=0;i<n;i++){
	int index = i;
	for(int j=i+1;j<n;i++){
		if(a[j]<a[index]) index = j;
	}
	swap(arr[i],)
}
```

 