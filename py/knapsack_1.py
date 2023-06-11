
print ('Hello World')

def KS(val,wgt,W,n):
    if n == 0 or W == 0:
        return 0;
    elif (wgt[n-1]>W) :
        return KS(val,wgt,W,n-1)
    else:
        temp1 = KS(val,wgt,W,n-1)
        temp2 = val[n-1] + KS(val,wgt,W-wgt[n-1],n-1)
        result = max(temp1,temp2)
    return result


val = [35,56,78,14]
wgt = [30,10,90,50]
W = 100
n = len(val)
print("The Result is",KS(val,wgt,W,n))