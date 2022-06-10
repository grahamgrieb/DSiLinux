import binascii
filename = 'arch/arm/boot/dts/nds.dtb'
with open(filename, 'rb') as f:
    content = f.read()
hex=binascii.hexlify(content)
print(".word",end=" ")
for i in range(0,len(hex),8):
    print("0x"+str(hex[i:i+8])[2:10]+",",end =" ")
