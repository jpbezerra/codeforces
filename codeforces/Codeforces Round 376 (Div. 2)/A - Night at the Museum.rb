def main
    word = gets.to_s
    total = 0
    curr_letter = 0
   
    word[0, word.length - 1].each_byte do |c|
        temp = (curr_letter - (c % 97)).abs
        if temp < 13
            total += temp
        else
            total += 26 - temp
        end
   
        curr_letter = c % 97
    end
   
    puts total
end
   
main