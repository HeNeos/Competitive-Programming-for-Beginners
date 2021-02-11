cx, cy, cd = input().split()
cx = float(cx); cy = float(cy); cd = float(cd); r = cd;
n = int(input()); coef = input().split(); z = float(input());

for i in range(n+1):
	coef[i] = float(coef[i])

def f_eval(x):
	ans = 0
	for i in range(0, n+1):
		ans += coef[i]*(x**(n-i))
	return ans

lo = cx - r - 10
hi = cx + r + 10
me = (lo+hi)/2
M = 1e6
for i in range(10, 14):
    D = hi - lo
    step = D/(1<<i)
    j = lo
    while j < hi:    
        X = j; Y = f_eval(X);
        error = r*r - (X-cx)*(X-cx) - (Y-cy)*(Y-cy)
        if abs(error) < M:
            M = abs(error)
            me = X
        j += step
    
    lo = me - step/2
    hi = me + step/2
        
print(me)
