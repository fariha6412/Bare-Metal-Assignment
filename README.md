# Bare-Metal-Assignment

Compiling
1. make

Loading
2. make load
In seperate teriminal window, 
3. target remote localhost:3333
4. monitor reset init
5. monitor flash write_image erase final.elf

Running
6. monitor reset halt
7. monitor resume