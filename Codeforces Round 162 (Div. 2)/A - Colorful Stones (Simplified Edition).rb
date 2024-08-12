def main
    path = gets.to_s.chomp
    instructions = gets.to_s.chomp
    curr = path[0]
    pos = 1
   
    for i in 0...instructions.length
        if instructions[i] == curr
            pos += 1
            curr = path[pos - 1]
        end
    end
   
    puts pos
end
   
main