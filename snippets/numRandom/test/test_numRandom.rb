#Test site

class GenNumRandom
        def self.prompt
                puts "How many times to generate a number?"
                
                numIterations = gets.to_i
                if numIterations > 0
                        puts "valid response"
                else
                        puts "invalid response"
                end
        end
        def self.gen
                puts "Random number, got: "
                puts rand(0 .. 10)
        end
end

GenNumRandom.prompt