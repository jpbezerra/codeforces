def main
    arr = gets.split(" ")
    price = arr[0].to_i
    coin = arr[1].to_i
    over = false
    minimun = 1
  
    while !over
        curr_price = price * minimun
        curr_price %= 10
        if curr_price - coin == 0 || curr_price == 0
            over = true
        else
            minimun += 1
        end
    end
  
    puts minimun
end
  
main