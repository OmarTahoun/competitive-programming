msg = input()
password = [msg[i:i+10] for i in range(0,80, 10)]
for i in range(10):
	digit = input()
	while digit in password:
		password[password.index(digit)] = str(i)

print("".join(password))

