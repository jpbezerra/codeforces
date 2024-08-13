def main
    cases = gets.to_i
    home = Array.new
    guest = Array.new
    total = 0
  
    for _ in 0...cases
        temp = gets.split(" ")
        home.push(temp[0])
        guest.push(temp[1])
    end
  
    for i in 0...home.length
        for j in 0...guest.length
            if home[i] == guest[j]
                total += 1
            end
        end
    end
  
    puts total
end
  
main