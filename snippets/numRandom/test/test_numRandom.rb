#Test site for random number generator class
#Code is debugged here, then the ruby file in lib is updated.

class GenNumRandom
        def self.prompt
                puts "How many times to generate a number?"
                
                numIterations = gets.to_i
                if numIterations == 0
                        puts "Ok, no times."
                elsif numIterations == 1
                        puts "Ok, " + numIterations.to_s + " time."

                        self.gen
                elsif numIterations > 1
                        puts "Ok, " + numIterations.to_s + " times."

                        for i in 0..numIterations - 1
                                self.gen
                        end
                else
                        puts "Invalid input."
                end
        end
        def self.gen
                puts "Random number, got: "
                puts rand(0 .. 10)
        end
end

GenNumRandom.prompt