#Random number generator class

class PutNumRandom
        def self.gen
                #Step 1: Gather user's input
                puts "Minimum number:"
                numMin = gets.to_i
                puts "\n"

                puts "Maximum number:"
                numMax = gets.to_i
                puts "\n"

                puts "How many times to generate a number?"
                numIter = gets.to_i
                puts "\n"

                #Step 2: Display input
                puts "You have set these parameters:"
                puts "Minimum number: " + numMin.to_s
                puts "Maximum number: " + numMax.to_s
                puts "Iterations: " + numIter.to_s
                puts "\n"

                #Step 3: Random number generation
                for i in 0..numIter - 1
                        puts rand(numMin .. numMax)
                end

                puts "Done. Program will now close."
        end
end

#Beginning work on a method that returns one random number
class GenNumRandom
        def self.basic
                rand(0 .. 10)
        end
        def self.seed
                srand
        end
end

#Testing the output commands - how does .seed make a difference?

#PutNumRandom.gen
puts GenNumRandom.seed
puts GenNumRandom.basic
