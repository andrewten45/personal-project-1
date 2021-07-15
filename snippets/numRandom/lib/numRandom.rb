#Random number generator class

class GenNumRandom
        def self.prompt
                puts "How many times to generate a number?"
                
                numIterations = gets.to_i
                puts "\n"
                numGens = 0
                if numIterations == 0
                        puts "Ok, no times."
                elsif numIterations >= 1
                        if numIterations == 1
                                puts "Ok, " + numIterations.to_s + " time.\n\n"

                                self.gen
                                numGens = numGens + 1
                                puts "Generation #" + numGens.to_s + "\n\n"
                        else
                                puts "Ok, " + numIterations.to_s + " times.\n\n"

                                for i in 0..numIterations - 1
                                        self.gen
                                        numGens = numGens + 1
                                        puts "Generation #" + numGens.to_s + "\n\n"
                                end
                        end
                else
                        puts "Invalid input."
                end
        end
        def self.gen
                puts "Random number between 0 and 100. Result:"
                puts rand(0 .. 100)
        end
end

GenNumRandom.prompt