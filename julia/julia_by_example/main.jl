# https://juliabyexample.helpmanual.io/#Hello-World

function main()

    println("hello world")

    function sphere_vol(r)

        return 4/3*pi*r^3
    end

    # function defined succintly
    quadratic(a, sqr_term, b) = (-b + sqr_term) / 2a

    function quadratic2(a::Float64, b::Float64, c::Float64)

        sqr_term = sqrt(b^2-4a*c)
        r1 = quadratic(a, sqr_term, b)
        r2 = quadratic(a, -sqr_term, b)

        r1, r2
    end

    vol = sphere_vol(3)
    # @printf allows number formatting but does not automatically append the \n to statements see below
    @printf "volume = %0.3f\n" vol
    #> volume = 113.097
    #
    hello maon, 3
    hello8_9

end

main()

