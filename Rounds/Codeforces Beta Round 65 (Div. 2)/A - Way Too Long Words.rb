def main
    cases = gets.to_i
  
    for _ in 0...cases
        word = gets.chomp.to_s
  
        if word.length <= 10
            puts word
        else
            puts "#{word[0]}#{word.length - 2}#{word[word.length - 1]}"
        end
    end
 end
  
main