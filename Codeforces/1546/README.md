A就是暴力做就好，先把每個位置需要加減的值算出來，維護兩個指標，一個指向正的數，一個指向負的數，一直加減就可以  
B原本我是打算用前n個字串的字母數量減掉後n-1個字串的26字母數量，先前要記下n個字串，找到符合的直接輸出，但是如果有兩個字母數量一樣的字串就會出事。  
後來還是偷偷看了別人的解，他是利用XOR的特性：自己XOR自己=0，而且又有交換律，所以就把2n-1個字串喇在一起XOR就是答案了，這個解法實在太需要通靈了。  
C要轉換一下題目，其實就是說有沒有辦法每個數都移動偶數次來排序，所以記下每個數原本位置的奇偶性，然後排序完一一檢查就可以，要注意處理重複是這題的關鍵。  
D需要數學，看了半天還是不會。  
所以，我明天（7/14）打算寫能競校內初選的題目，比較考驗演算法能力，當作下學期能競的模考。  
