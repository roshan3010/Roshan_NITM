def get_max_profit(stock_prices):
    n=len(stock_prices)
    curMax=0
    j=1
    i=0
    while j<n:
        if stock_prices[i]<stock_prices[j]:
            profit=stock_prices[j]-stock_prices[i]
            curMax=max(profit, curMax)
            j+=1
        else:
            i=j
            j+=1

    return curMax

stock_prices=[]
print(get_max_profit(stock_prices))
