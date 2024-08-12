def main
    horseshoes =  gets.split.map(&:to_i)
    horseshoes = horseshoes.sort
    total = 0
  
    for i in 0...horseshoes.length
        if horseshoes[i] == horseshoes[i+1]
            total += 1
        end
    end
  
    puts total
end
  
main