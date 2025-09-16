# cert_pre
Leetcode solution
#### 9/15
review: 
14. longest common prefix
344. in place reverse string
#### 9/12
717. 1bit or 2 bits: 卡在解題思路: should i use if() or while(), should i loop from the front or back.

#### 9/11
13. 重新看這題: 我原本想要用char pointer, 因爲要比較前一個還有後面一個的數值, 所以就出現edge case 的address overflow, 然後chatGPT 直接new 一個int 這樣就可以直接把前面的值存下來. 就不用access 到edge case了
14. 從新刊這題: longest common prefix: double for loop, because have to compare n strings and a char in each string, 如果遇到不一樣的就return( 不是break), 如果一直一樣就return the first string

##### 1. Two_Sum.c
return type is int pointer, 
malloc() will return void*（泛型指標), must cast to change type

##### 344. Reverse String
swap the first and the last char, 
use 2 pointer and a char, 

review: 
1. 8/21 struct pointer!! 
https://leetcode.com/problems/add-two-numbers/

2. string length !! 
https://leetcode.com/problems/valid-palindrome/
