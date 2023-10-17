FIRRTL version 1.2.0
circuit DecoupledGcd :
  module DecoupledGcd :
    input clock : Clock
    input reset : UInt<1>
    output input_ready : UInt<1> @[playground/src/DecoupledGCD.scala 23:18]
    input input_valid : UInt<1> @[playground/src/DecoupledGCD.scala 23:18]
    input input_bits_value1 : UInt<16> @[playground/src/DecoupledGCD.scala 23:18]
    input input_bits_value2 : UInt<16> @[playground/src/DecoupledGCD.scala 23:18]
    input output_ready : UInt<1> @[playground/src/DecoupledGCD.scala 24:18]
    output output_valid : UInt<1> @[playground/src/DecoupledGCD.scala 24:18]
    output output_bits_value1 : UInt<16> @[playground/src/DecoupledGCD.scala 24:18]
    output output_bits_value2 : UInt<16> @[playground/src/DecoupledGCD.scala 24:18]
    output output_bits_gcd : UInt<16> @[playground/src/DecoupledGCD.scala 24:18]

    reg xInitial : UInt<16>, clock with :
      reset => (UInt<1>("h0"), xInitial) @[playground/src/DecoupledGCD.scala 26:24]
    reg yInitial : UInt<16>, clock with :
      reset => (UInt<1>("h0"), yInitial) @[playground/src/DecoupledGCD.scala 27:24]
    reg x : UInt<16>, clock with :
      reset => (UInt<1>("h0"), x) @[playground/src/DecoupledGCD.scala 28:24]
    reg y : UInt<16>, clock with :
      reset => (UInt<1>("h0"), y) @[playground/src/DecoupledGCD.scala 29:24]
    reg busy : UInt<1>, clock with :
      reset => (UInt<1>("h0"), busy) @[playground/src/DecoupledGCD.scala 30:28]
    reg resultValid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), resultValid) @[playground/src/DecoupledGCD.scala 31:28]
    node _input_ready_T = eq(busy, UInt<1>("h0")) @[playground/src/DecoupledGCD.scala 33:19]
    node _T = gt(x, y) @[playground/src/DecoupledGCD.scala 38:12]
    node _x_T = sub(x, y) @[playground/src/DecoupledGCD.scala 39:14]
    node _x_T_1 = tail(_x_T, 1) @[playground/src/DecoupledGCD.scala 39:14]
    node _y_T = sub(y, x) @[playground/src/DecoupledGCD.scala 41:14]
    node _y_T_1 = tail(_y_T, 1) @[playground/src/DecoupledGCD.scala 41:14]
    node _GEN_0 = mux(_T, _x_T_1, x) @[playground/src/DecoupledGCD.scala 38:17 28:24 39:9]
    node _GEN_1 = mux(_T, y, _y_T_1) @[playground/src/DecoupledGCD.scala 38:17 29:24 41:9]
    node _T_1 = eq(x, UInt<1>("h0")) @[playground/src/DecoupledGCD.scala 43:12]
    node _T_2 = eq(y, UInt<1>("h0")) @[playground/src/DecoupledGCD.scala 43:25]
    node _T_3 = or(_T_1, _T_2) @[playground/src/DecoupledGCD.scala 43:20]
    node _T_4 = eq(x, UInt<1>("h0")) @[playground/src/DecoupledGCD.scala 44:14]
    node _GEN_2 = mux(_T_4, y, x) @[playground/src/DecoupledGCD.scala 44:23 45:25 47:25]
    node _T_5 = and(output_ready, resultValid) @[playground/src/DecoupledGCD.scala 54:25]
    node _GEN_3 = mux(_T_5, UInt<1>("h0"), busy) @[playground/src/DecoupledGCD.scala 54:41 55:21 30:28]
    node _GEN_4 = mux(_T_5, UInt<1>("h0"), UInt<1>("h1")) @[playground/src/DecoupledGCD.scala 54:41 56:21 52:26]
    node _GEN_5 = validif(_T_3, _GEN_2) @[playground/src/DecoupledGCD.scala 43:34]
    node _GEN_6 = validif(_T_3, xInitial) @[playground/src/DecoupledGCD.scala 43:34 50:26]
    node _GEN_7 = validif(_T_3, yInitial) @[playground/src/DecoupledGCD.scala 43:34 51:26]
    node _GEN_8 = mux(_T_3, _GEN_4, resultValid) @[playground/src/DecoupledGCD.scala 31:28 43:34]
    node _GEN_9 = mux(_T_3, _GEN_3, busy) @[playground/src/DecoupledGCD.scala 30:28 43:34]
    node _GEN_10 = mux(input_valid, UInt<1>("h1"), _input_ready_T) @[playground/src/DecoupledGCD.scala 33:16 60:23 src/main/scala/chisel3/util/Decoupled.scala 77:20]
    node _GEN_11 = mux(input_valid, input_bits_value1, x) @[playground/src/DecoupledGCD.scala 60:23 62:16 28:24]
    node _GEN_12 = mux(input_valid, input_bits_value2, y) @[playground/src/DecoupledGCD.scala 60:23 63:16 29:24]
    node _GEN_13 = mux(input_valid, input_bits_value1, xInitial) @[playground/src/DecoupledGCD.scala 60:23 64:16 26:24]
    node _GEN_14 = mux(input_valid, input_bits_value2, yInitial) @[playground/src/DecoupledGCD.scala 60:23 65:16 27:24]
    node _GEN_15 = mux(input_valid, UInt<1>("h1"), busy) @[playground/src/DecoupledGCD.scala 60:23 66:16 30:28]
    node _GEN_16 = mux(busy, _GEN_0, _GEN_11) @[playground/src/DecoupledGCD.scala 37:14]
    node _GEN_17 = mux(busy, _GEN_1, _GEN_12) @[playground/src/DecoupledGCD.scala 37:14]
    node _GEN_18 = validif(busy, _GEN_5) @[playground/src/DecoupledGCD.scala 37:14]
    node _GEN_19 = validif(busy, _GEN_6) @[playground/src/DecoupledGCD.scala 37:14]
    node _GEN_20 = validif(busy, _GEN_7) @[playground/src/DecoupledGCD.scala 37:14]
    node _GEN_21 = mux(busy, _GEN_8, resultValid) @[playground/src/DecoupledGCD.scala 37:14 31:28]
    node _GEN_22 = mux(busy, _GEN_9, _GEN_15) @[playground/src/DecoupledGCD.scala 37:14]
    node _GEN_23 = mux(busy, _input_ready_T, _GEN_10) @[playground/src/DecoupledGCD.scala 37:14 33:16]
    node _GEN_24 = mux(busy, xInitial, _GEN_13) @[playground/src/DecoupledGCD.scala 37:14 26:24]
    node _GEN_25 = mux(busy, yInitial, _GEN_14) @[playground/src/DecoupledGCD.scala 37:14 27:24]
    input_ready <= _GEN_23
    output_valid <= resultValid @[playground/src/DecoupledGCD.scala 34:16]
    output_bits_value1 <= _GEN_19
    output_bits_value2 <= _GEN_20
    output_bits_gcd <= _GEN_18
    xInitial <= _GEN_24
    yInitial <= _GEN_25
    x <= _GEN_16
    y <= _GEN_17
    busy <= mux(reset, UInt<1>("h0"), _GEN_22) @[playground/src/DecoupledGCD.scala 30:{28,28}]
    resultValid <= mux(reset, UInt<1>("h0"), _GEN_21) @[playground/src/DecoupledGCD.scala 31:{28,28}]
