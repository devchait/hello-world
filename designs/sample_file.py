class Parent:
	def __init__(self):
		print("In parent")
		
	def start_consuming(self, a=2, b=3):
		print("In Parent consuming")
		print("Value = ", a + b)
		

class Child(Parent):
	def __init__(self):
		print("In Child")
		super().__init__()
		
	def start_consuming(self, a=2, b=3):
		super().start_consuming(a=a,b=b)
		print(b - a)
		print(b/a)

if __name__=="__main__":
    child = Child()
    child.start_consuming(a=5,b=9)
