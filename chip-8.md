# CHIP-8

## Memory
- memory is an array of 4096 bytes

Memory Map:
```
+---------------+= 0xFFF (4095) End of Chip-8 RAM
|               |
|               |
|               |
|               |
|               |
| 0x200 to 0xFFF|
|     Chip-8    |
| Program / Data|
|     Space     |
|               |
|               |
|               |
+- - - - - - - -+= 0x600 (1536) Start of ETI 660 Chip-8 programs
|               |
|               |
|               |
+---------------+= 0x200 (512) Start of most Chip-8 programs
| 0x000 to 0x1FF|
| Reserved for  |
|  interpreter  |
+---------------+= 0x000 (0) Start of Chip-8 RAM
```

## Registers
+ chip-8 has 16 general 8-bit register, Vx, x ia a hexadeciamal digit.
+ 16-bit register called I, used to store memory address, only the lowes 12 bit are used. 
+ VF register should not be used, it is used as a flag by some instructions
+ 2 special 8-bit register, for delay and sound timers. When they are non zero, they are automatically decremented at a rate of 60Hz.
+ Pseudo-register, not accessable from chip-8 programs. 
+ PC (Program Counter) should be 16-bit and is used to store the next executing address.
+ Stack pointer (SP) can be 8-bit, is used to point to the topmost level of the stack



