# debug

## 运行rtt出现以下错误
+ 原因：rtt后来加了个uart rx的功能，用来接收终端发送的数据，以前的npc和nemu无法正常运行这个，只要将rtt的代码回退就可以了
```
[I/utest] Commands list :
msh />address (0x00000000) is out of bound at pc = 0x00000000
```
+ rtt 版本解释
  + 5028ed72e2f0b465fa06a09650d407a6d994a356：添加了_uart_getc来接收uart的数据
  + 1c20a2f2ccb4fd9098a0e7daab854ea5b91e745e：因为soc的变动增加了extra.ld来使得代码连接到不同存储器上