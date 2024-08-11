def main
    calories = gets.split(" ").map(&:to_i)
    squares = gets.to_s
    total = 0
  
    for i in 0...squares.length - 1
        total += calories[squares[i].to_i - 1]
    end
  
    puts total
end
  
main