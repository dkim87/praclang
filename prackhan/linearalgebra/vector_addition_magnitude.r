
radtodeg = pi/180

sum_i = 6*cos(100*radtodeg)+5*cos(40*radtodeg)

print(sum_i)

sum_j = 6*sin(100*radtodeg)+5*sin(40*radtodeg)

print(sum_j)

sum_norm = sqrt(sum_i^2+sum_j^2)

print(sum_norm)

sum_angle = atan(sum_j/sum_i)

print(sum_angle)

print(sum_angle/pi*180)

print("next question:")

sum_i = 7*cos(200*radtodeg)+5*cos(70*radtodeg)

sum_j = 7*sin(200*radtodeg)+5*sin(70*radtodeg)

sum_norm = sqrt(sum_i^2+sum_j^2)

print(sum_norm)

sum_angle = atan(sum_j/sum_i)

print(sum_angle)

print(sum_angle/pi*180)

print(sum_angle/pi*180+360)
