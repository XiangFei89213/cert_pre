# cert_pre
Leetcode solution

#### 9/11
13. 我他媽的真的不知道. 重新看這題: 我原本想要用char pointer, 因爲要比較前一個還有後面一個的數值, 所以就出現edge case 的address overflow, 然後chatGPT 直接new 一個int 這樣就可以直接把值存下來. 

##### 1. Two_Sum.c
return type is int pointer, 
malloc() will return void*（泛型指標), must cast to change type

##### 2. Add Two Numbers.c
不知道我還沒復習

review: 
1. 8/21 struct pointer!! 
https://leetcode.com/problems/add-two-numbers/

2. string length !! 
https://leetcode.com/problems/valid-palindrome/
