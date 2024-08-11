def main
    cases = gets.to_i
    cards = gets.split.map(&:to_i)
    s_turn = true
    sereja = 0
    dima = 0
  
    while cards.length > 0
        if s_turn
            if cards[0] > cards[-1]
            sereja += cards[0]
            cards.delete_at(0)
            else
            sereja += cards[-1]
            cards.delete_at(-1)
            end
    
            s_turn = false
        else
            if cards[0] > cards[-1]
            dima += cards[0]
            cards.delete_at(0)
            else
            dima += cards[-1]
            cards.delete_at(-1)
            end
    
            s_turn = true
        end
    end
  
    puts ("#{sereja} #{dima}")
  
end
  
main