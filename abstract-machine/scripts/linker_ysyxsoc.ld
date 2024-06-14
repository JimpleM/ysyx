ENTRY(_start)
MEMORY {
  mrom :  ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram :  ORIGIN = 0x0f000000, LENGTH = 8K
  sdram : ORIGIN = 0xa0000000, LENGTH = 64M
}

SECTIONS {
  . = ORIGIN(flash);

  .fsbl :{
    *(entry)
    *(.text._trm_init)
    *(.text.fsbl)
    . = ALIGN(4);
  } > flash

  _ssbl_origin = .;
  .ssbl : {
    _ssbl_ram_start = .;
    *(.text.ssbl)
    *(.text.device_init)
    . = ALIGN(4);
    *(.text.putch)
    . = ALIGN(4);
    _ssbl_ram_end = .;
  } > sdram AT> flash

  _test_origin = LOADADDR(.text);
  .text : {
    _text_ram_start = .;
    *(.text*)
    . = ALIGN(4);
  } > sdram AT> flash
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    *(.srodata)
    *(.srodata.*)
    . = ALIGN(4);
  } > sdram AT> flash

  .data : {
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
    . = ALIGN(4);
    _data_ram_end = .;
  } > sdram AT> flash

  edata = .;
  _data = .;

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _bss_end = .;
  } > sdram AT> flash

  _stack_top = ALIGN(0x30000);
  . = _stack_top + 0x20000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x60000);
  _heap_end = _heap_start  + 0x3000000;
}
