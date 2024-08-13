def diff(stones)
    for i in 0...stones.length
        if stones[i] == stones[i + 1]
            stones.slice!(i + 1)
            return false
        end
    end
  
    return true
end
  
def main
    numb = gets.to_i
    stones = gets.to_s
    final = 0
  
    for i in 0...numb
        break if diff(stones)
  
        final += 1
    end
  
    puts final
end
  
main