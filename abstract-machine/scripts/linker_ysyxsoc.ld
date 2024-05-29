ENTRY(_start)
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(flash);

  .fsbl :{
    *(entry)
    *(.text._trm_init)
    *(.text.fsbl)
    . = ALIGN(0x10);
  } > flash

  _ssbl_origin = .;
  .ssbl : {
    _ssbl_ram_start = .;
    *(.text.ssbl)
    . = ALIGN(0x10);
    _ssbl_ram_end = .;
  } > psram AT> flash

  _test_origin = LOADADDR(.text);
  .text : {
    _text_ram_start = .;
    *(.text*)
    . = ALIGN(0x10);
  } > psram AT> flash
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    *(.srodata.mainargs)
    . = ALIGN(0x10);
  } > psram AT> flash

  .data : {
    . = ALIGN(0x10);
    *(.data)
    _data_ram_end = .;
  } > psram AT> flash

  .sdata.haep : {
    . = ALIGN(0x0F);
    *(.sdata.heap)
  } > psram AT> flash
  edata = .;
  _data = .;

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(8);
    _bss_end = .;
  } > psram AT> flash


  _stack_top = ALIGN(0x10000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x20000);
  _heap_end = _heap_start  + 0x8000;
}
