crdNum = input("Enter the Card Number: ")
nums = [0] * 16

for i in range(16):
    if i % 2 == 1:
        nums[i] = int(crdNum[i])
    else:
        nums[i] = int(crdNum[i]) * 2
        while True:
            if nums[i] > 9:
                t = str(nums[i])
                nums[i] = int(t[0]) + int(t[1])
            else:
                break
ttc = 0
for k in nums:
    ttc+=k
if ttc%10 == 0:
    print("valid")
else:
    print("invalid")