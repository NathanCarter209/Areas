import math as m
sideA = float(input("Enter side A : "))
sideB = float(input("Enter side B : "))
sideC = float(input("Enter side C : "))
side = (sideA*sideB*sideC)/2
Area = (m.sqrt(side*(side-sideA)*(side-sideB)*(side-sideC)))
print("Area of Triangle : ",'%.2f'%Area)
