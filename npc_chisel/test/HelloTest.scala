// HelloTest.scala
import chisel3._

object HelloTest extends App {
  //generate Hello.v in directory generated
  emitVerilog(new Hello,  Array("--target-dir", "generated"))

  //print verilog code in ternimal
  println(getVerilogString(new Hello))

  //print HelloWorld! in ternimal
  println("HelloWorld!") //scala's function, not chisel's function
}