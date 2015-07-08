#Definition of a Machine and Language
---
|Opcode| Address|Instruction|Meaning|
|------|--------|-----------|:-------|
|`LOAD`|operand|`LOAD a`|*c*(0)←*v*(*a*)|*
|`STORE`|operand|`STORE i`|*c*(*i*)←*c*(0)|
|||`STORE *i`|*c*(*c*(*i*))←*c*(0)|
|`ADD`|operand|`ADD a`|*c*(0)←*c*(0)+*v*(*a*)|
|`SUB`|operand|`SUB a`|*c*(0)←*c*(0)-*v*(*a*)|
|`MULT`|operand|`MULT a`|*c*(0)←*c*(0)×*v*(*a*)|
|`DIV`|operand|`DIV a`|*c*(0)←⌊*c*(0)/*v*(*a*)⌋|
|`READ`|operand|`READ i`|*c*(*i*)←current input symbol.
|||`READ *i`|*c*(*c*(*i*))←current input symbol. The tape head moves one square to the right in any case.
|`WRITE`|operand|`WRITE a`|*v*(*a*) is printed on the square of the output tape currently under the output tape head. The tape head is moved one square right.
|`JUMP`|label|`JUMP b`|The location counter is set to the instruction labeled *b*.
|`JGTZ`|label|`JGTZ b`|The location counter is set to the instruction labeled *b* if *c*(0)>0; otherwise, the location counter is set to the next instruction.
|`JZERO`|label|`JZERO b`|The location counter is set to the instruction labeled *b* if *c*(0)=0; otherwise, the location counter is set to the next instruction.
|`HALT`||`HALT`|Execution ceases.
|`SWYM`||`SWYM`|No operation
---
An operand can be one of the following:
1. =*i*, indicating the integer itself
2. A nonnegative integer *i*, indicating the contents of register *i*.
3. **i*, indicating indirect addressing. That is, the operand is the contents of register *j*, where *j* is the integer found in register *i*. If *j* < 0, then the machine halts.

We can define the meaning of a program **P** with the help of two quantities,
- a mapping *c* from from nonnegative integers to integers and
- a "location counter" which determines the next instruction to execute.

The function *c* is a *memory map*; *c*(*i*) is the integer stored in register *i* (the *contents* of reginster *i*).

Initially, *c*(*i*)=0 for all *i*>= 0, the location counter is set to the first instruction in **P**, and the output tape is blank.

After execution of the *k*th instruction in **P**, the location counteris automatically set to *k*+1 (i.e. the next instruction), unless the *k*th instruction is `JUMP`, `HALT`, `JGTZ`, or `JZERO`.

To specify the meaning of an instruction, we define *v*(*a*), *the value of operand a* as follows:

*v*(=*i*)=*i*,  
*v*(*i*)=*c*(*i*),  
*v*(**i*)=*c*(*c*(*i*)).

---

#Computational Complexity

**Logarithmic cost of an operand**

---

|Operand *a*     |Cost *t*(*a*)|
|----------------|:-------------|
|=*i*|*l*(*i*)|
|*i*|*l*(*i*)+*l*(*c*(*i*))|
|**i*|*l*(*i*)+*l*(*c*(*i*))+*l*(*c*(*c*(*i*))|
**Logarithmic cost of RAM instructions** where *t*(*a*) is the cost of operand *a*, and *b* denotes a label.

---
|Instruction     |Cost|
|----------------|:-------------|
|`LOAD a`        |t(a)|
|`STORE i`       |l(c(0))+l(i)|
|`STORE *i`      |l(c(0))+l(i)+l(c(i))|
|`ADD a`         |l(c(0))+t(a)|
|`SUB a`         |l(c(0))+t(a)|
|`MULT a`        |l(c(0))+t(a)|
|`DIV a`         |l(c(0))+t(a)|
|`READ i`        |l(c(0))+t(a)|
|`READ *i`       |l(c(0))+l(i)+l(c(i))|
|`WRITE a`       |t(a)           |
|`JUMP b`        |1              |
|`JGTZ b`        |l(c(0))        |
|`JZERO b`       |l(c(0))        |
|`HALT`          |1|
