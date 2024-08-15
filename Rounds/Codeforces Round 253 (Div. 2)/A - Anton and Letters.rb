def main
    letters = gets.chomp.split(", ")
   
    letters[0] = letters[0][1]
    letters[letters.length - 1] = letters[letters.length - 1][0]
    letters.delete("}")
   
    h = Hash.new
    letters.each do |letter| 
        if h.key?(letter)
            h[letter] += 1
        else
            h[letter] = 1
        end
    end
   
    puts h.keys.length
end
   
main