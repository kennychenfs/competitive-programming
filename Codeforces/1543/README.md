今天午睡比較晚起床，所以就先秒掉兩題，再寫一題比較難的  
A:數學，觀察一下會發現gcd最多是abs(a-b) 設c=abs(a-b)，然後再想怎麼達到：a,b此時都是c的倍數，而其實a是c的倍數時b也會是c的倍數，判斷一個就好，考慮用減的(a%c)或用加的(c-a%c)哪個比較小，這種題目需要觀察力。  
B:也是數學，觀察一下會發現不限制移動次數，所以其實就是盡量平均排列，排完會有sum%n個數比其他n-sum%n個數大1，所以就是(sum%n)*(n-sum%n)，記得開long long，題目卡住一律開long long。  
C:時間不夠，題敘太長懶得看。  
D1:寫到這時間就差不多了，因為晚起床。這題要用到XOR的特性：題目說改變後的答案(ans)會使得猜的數(g)和原本答案(o)滿足o^ans=g，但其實因為XOR自己^自己會是0的特性還有交換律，可以得到o^ans^o=g^o，ans=g^o。當時我懷疑了自己好久，後來寫下來才發現確實是這樣，這告訴我不要懷疑自己XD。這個特性在[CF1546B](https://codeforces.com/contest/1546/problem/B)也有用到。  
接下來我就不會了，後來也沒有想出來。  
  
CF的題目好像都偏數學和通靈，明天我想要練一些演算法，例如[EEK](https://slides.com/fhvirus/eek)，這些題目是之前某次資讀講的，我當時大概都有勉強懂，但因為時間不足只寫了幾題：[1](https://tioj.ck.tp.edu.tw/problems/1733)、[2](https://tioj.ck.tp.edu.tw/problems/2020)不知道我現在會不會寫。目標兩個小時至少寫三題不是水題的題。
