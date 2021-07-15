#Test site for random number generator class
#Code is debugged here, then the ruby file in lib is updated.

class GenNumRandom
        def self.prompt
                puts "How many times to generate a number?"
                
                numIterations = gets.to_i
                numGens = 0
                if numIterations == 0
                        puts "Ok, no times."
                elsif numIterations >= 1
                        if numIterations == 1
                                puts "Ok, " + numIterations.to_s + " time."

                                self.gen
                                numGens = numGens + 1
                                puts "That was generation #" + numGens.to_s
                                #The big question: What is a good format for succinctly informing the user of both generation # and # generated?
                        else
                                puts "Ok, " + numIterations.to_s + " times."

                                for i in 0..numIterations - 1
                                        self.gen
                                        numGens = numGens + 1
                                        puts "That was generation #" + numGens.to_s
                                end
                        end
                else
                        puts "Invalid input."
                end
        end
        def self.gen
                puts "Gererating a random number between up to 100, got: "
                puts rand(0 .. 100)
        end
end

GenNumRandom.prompt