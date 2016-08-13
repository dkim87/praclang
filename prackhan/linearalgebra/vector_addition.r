dtr = pi/180
v.r = 4
w.r = 7
v.t = 310
w.t = 50
v.t_rad = v.t*dtr
w.t_rad = w.t*dtr
v.x = v.r*cos(v.t_rad)
v.y = v.r*sin(v.t_rad)
w.x = w.r*cos(w.t_rad)
w.y = w.r*sin(w.t_rad)

print("dtr")
print(dtr)
print("v.r")
print(v.r)
print("w.r")
print(w.r)
print("v.t")
print(v.t)
print("w.t")
print(w.t)
print("v.t_rad")
print(v.t_rad)
print("w.t_rad")
print(w.t_rad)
print("v.x")
print(v.x)
print("v.y")
print(v.y)
print("w.x")
print(w.x)
print("w.y")
print(w.y)

sum.x = v.x + w.x
sum.y = v.y + w.y
sum.r = sqrt(sum.x^2+sum.y^2)
sum.t = atan(sum.y/sum.x)

print("sum.x")
print(sum.x)
print("sum.y")
print(sum.y)
print("sum.r")
print(sum.r)
print("sum.t")
print(sum.t*180/pi)

