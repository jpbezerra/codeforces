def main
    need, time, cakes, oven = gets.split.map &:to_i

    first = time * (Float(need) / Float(cakes)).ceil
  
    currTime = 0
    total = 0
  
    while need > total
        currTime += 1
  
        if currTime % time == 0
            total += cakes
        end
  
        if currTime > oven && currTime % time == 0
            total += cakes
        end
    end
  
    if first > currTime
        puts "YES"
    else
        puts "NO"
    end
end
  
main