def main
    dices = gets.split(" ").map(&:to_i)
    higher = dices.max_by(&:itself)
    chances = 6 - (higher - 1)
  
    if chances == 0
        puts "0/1"
    elsif chances == 6
        puts "1/1"
    else
        if chances % 2 != 0 && chances % 3 != 0
            puts "#{chances}/6"
        else
            if chances % 2 == 0
                aux = 2
            else
                aux = 3
            end
  
            puts "#{chances/aux}/#{6/aux}"
        end
    end
end
  
main