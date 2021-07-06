#Test site

class MyClass
        def self.generic_method
                puts 'Random number, got: '
                puts rand(0 .. 10)
        end
end
MyClass.generic_method