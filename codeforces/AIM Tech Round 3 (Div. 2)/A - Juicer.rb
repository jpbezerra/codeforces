def main
    juicer = gets.split(" ").map(&:to_i)
    curr = 0
    waste = 0
    oranges = gets.split(" ").map(&:to_i)
  
    for i in 0...juicer[0]
        if juicer[1] >= oranges[i]
            curr += oranges[i]
  
            if curr > juicer[2]
                waste += 1
                curr = 0
            end
        end
    end
  
    puts waste
end
  
main