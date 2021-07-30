#Test site for random number generator class
#Code is debugged here, then the ruby file in lib is updated.

class GenNumRandom
        def self.gen
                puts "Minimum number:"
                numMin = gets.to_i
                puts "\n"

                puts "Maximum number:"
                numMax = gets.to_i
                puts "\n"

                puts "How many times to generate a number?"
                numIter = gets.to_i
                puts "\n"

                puts "You have set these parameters:"
                puts "Minimum number: " + numMin.to_s
                puts "Maximum number: " + numMax.to_s
                puts "Iterations: " + numIter.to_s
                puts "\n"


                for i in 0..numIter - 1
                        #put stuff to loop in here
                end

                puts "Done. Program will now close."
        end
end

#TODO: Implement a loop containing the rand function with the parameters.

GenNumRandom.gen