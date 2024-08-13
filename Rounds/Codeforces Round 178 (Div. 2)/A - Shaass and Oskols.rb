def main
    size = gets.to_i
    birds = gets.split.map(&:to_i)
    cases = gets.to_i
   
    for _ in 0...cases
        action = gets.split.map(&:to_i)
   
        right = birds[action[0] - 1] - action[1]
        left = birds[action[0] - 1] - right - 1
        birds[action[0] - 1] = 0
   
        if action[0] < size
            birds[action[0]] += right
        end
        
        if action[0] - 1 > 0
            birds[action[0] - 2] += left
        end
    end
   
    for i in 0...size
        puts birds[i]
    end
end
   
main