def main
    crimes = gets.to_i
    scenes = gets.split.map(&:to_i)
    untreated = 0
    polices = 0
  
    for i in 0...crimes
        if scenes[i] != -1
            polices += scenes[i]
        else
            if polices > 0
                polices -= 1
            elsif polices <= 0
                untreated += 1
            end
        end
    end
  
    puts untreated
end
  
main
